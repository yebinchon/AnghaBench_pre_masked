
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int y; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(int *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_0[VAR_1[VAR_2]].y < VAR_3)
  return (VAR_2 + 1);
 VAR_4 = 0;
 VAR_5 = VAR_2 + 1;
 for (;;) {
  VAR_6 = (VAR_4 + VAR_5) / 2;
  if (VAR_6 <= VAR_4)
   break;
  VAR_7 = VAR_0[VAR_1[VAR_6]].y;
  if (VAR_7 > VAR_3)
   VAR_5 = VAR_6;
  else if (VAR_7 < VAR_3)
   VAR_4 = VAR_6;
  else
   return (VAR_6);
 }
 return (VAR_6 + 1);
}

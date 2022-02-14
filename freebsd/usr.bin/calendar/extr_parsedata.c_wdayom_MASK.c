
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* monthdays; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_2 (int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{

 int VAR_5;

 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5 < 0)
  return (VAR_5);




 VAR_7 = (VAR_1 - VAR_5 + 1) % 7;





 if (VAR_2 < 0) {

  VAR_6 = VAR_7;
  while (VAR_6 <= VAR_0->monthdays[VAR_3])
   VAR_6 += 7;
  VAR_7 = VAR_2 * 7 + VAR_6;
 } else if (VAR_2 > 0){
  if (VAR_7 > 0)
   VAR_7 += VAR_2 * 7 - 7;
  else
   VAR_7 += VAR_2 * 7;
 } else
  FUNC_1 ("Invalid offset 0");
 return (VAR_7);
}

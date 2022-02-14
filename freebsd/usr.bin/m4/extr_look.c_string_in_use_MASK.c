
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* sstr; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 <= VAR_2; VAR_5++) {
  if (VAR_3[VAR_5] == VAR_0 && VAR_1[VAR_5].sstr == VAR_4)
   return 1;
  }
 return 0;
}

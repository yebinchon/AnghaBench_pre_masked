
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; int serial; } ;


 TYPE_1__** VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(void)
{
 int VAR_6, VAR_7;

 for (VAR_2 = 0; VAR_2 < VAR_1[0] && VAR_2 < VAR_1[1] &&
     VAR_0[0][VAR_2 + 1].value == VAR_0[1][VAR_2 + 1].value;
     VAR_2++)
  ;
 for (VAR_5 = 0; VAR_5 < VAR_1[0] - VAR_2 && VAR_5 < VAR_1[1] - VAR_2 &&
     VAR_0[0][VAR_1[0] - VAR_5].value == VAR_0[1][VAR_1[1] - VAR_5].value;
     VAR_5++)
  ;
 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_3[VAR_7] = VAR_0[VAR_7] + VAR_2;
  VAR_4[VAR_7] = VAR_1[VAR_7] - VAR_2 - VAR_5;
  for (VAR_6 = 0; VAR_6 <= VAR_4[VAR_7]; VAR_6++)
   VAR_3[VAR_7][VAR_6].serial = VAR_6;
 }
}

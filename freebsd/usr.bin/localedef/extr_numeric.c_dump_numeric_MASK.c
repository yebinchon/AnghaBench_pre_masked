
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int grouping; int thousands_sep; int decimal_point; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;

void
FUNC_3(void)
{
 FILE *VAR_2;

 if ((VAR_2 = FUNC_1()) == ((void*)0)) {
  return;
 }

 if ((FUNC_2(VAR_1.decimal_point, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.thousands_sep, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.grouping, VAR_2) == VAR_0)) {
  return;
 }
 FUNC_0(VAR_2);
}

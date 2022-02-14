
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ampm_fmt; scalar_t__ c_fmt; scalar_t__ date_fmt; scalar_t__ pm; scalar_t__ am; scalar_t__ x_fmt; scalar_t__ X_fmt; scalar_t__* weekday; scalar_t__* wday; scalar_t__* month; scalar_t__* mon; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 TYPE_1__ VAR_1 ;

void
FUNC_3(void)
{
 FILE *VAR_2;
 int VAR_3;

 if ((VAR_2 = FUNC_1()) == ((void*)0)) {
  return;
 }

 for (VAR_3 = 0; VAR_3 < 12; VAR_3++) {
  if (FUNC_2(VAR_1.mon[VAR_3], VAR_2) == VAR_0) {
   return;
  }
 }
 for (VAR_3 = 0; VAR_3 < 12; VAR_3++) {
  if (FUNC_2(VAR_1.month[VAR_3], VAR_2) == VAR_0) {
   return;
  }
 }
 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
  if (FUNC_2(VAR_1.wday[VAR_3], VAR_2) == VAR_0) {
   return;
  }
 }
 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
  if (FUNC_2(VAR_1.weekday[VAR_3], VAR_2) == VAR_0) {
   return;
  }
 }







 if ((FUNC_2(VAR_1.X_fmt, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.x_fmt, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.c_fmt, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.am, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.pm, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.date_fmt ? VAR_1.date_fmt : VAR_1.c_fmt, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.ampm_fmt, VAR_2) == VAR_0)) {
  return;
 }
 FUNC_0(VAR_2);
}

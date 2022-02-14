
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; scalar_t__ l; scalar_t__ m; } ;
typedef TYPE_1__ kstring_t ;
typedef scalar_t__ clock_t ;


 double VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,double) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int VAR_2 ;

int FUNC_7()
{
 int VAR_3;
 clock_t VAR_4;
 kstring_t VAR_5, VAR_6;
 FUNC_6(11);
 VAR_5.l = VAR_5.m = 0; VAR_5.s = 0;
 VAR_4 = FUNC_0();
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  int VAR_7 = FUNC_5();
  VAR_5.l = 0;
  FUNC_3(VAR_7, &VAR_5);
 }
 FUNC_1(VAR_2, "kputw: %lf\n", (double)(FUNC_0() - VAR_4) / VAR_0);
 FUNC_6(11);
 VAR_4 = FUNC_0();
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  int VAR_8 = FUNC_5();
  VAR_5.l = 0;
  FUNC_4(&VAR_5, "%d", VAR_8);
 }
 FUNC_1(VAR_2, "ksprintf: %lf\n", (double)(FUNC_0() - VAR_4) / VAR_0);

 FUNC_6(11);
 VAR_6 = VAR_6 = 0; VAR_6 = 0;
 VAR_4 = FUNC_0();
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  int VAR_9 = FUNC_5();
  VAR_6 = VAR_5.l = 0;
  FUNC_3(VAR_9, &VAR_6);
  FUNC_2(VAR_6, &VAR_5);
 }
 FUNC_1(VAR_2, "kputw+kputs: %lf\n", (double)(FUNC_0() - VAR_4) / VAR_0);
 FUNC_6(11);
 VAR_4 = FUNC_0();
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  int VAR_10 = FUNC_5();
  VAR_6 = VAR_5.l = 0;
  FUNC_3(VAR_10, &VAR_6);
  FUNC_4(&VAR_5, "%s", VAR_6);
 }
 FUNC_1(VAR_2, "kputw+ksprintf: %lf\n", (double)(FUNC_0() - VAR_4) / VAR_0);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double ksw_used; double ksw_total; } ;


 int FUNC_0 (double) ;
 int FUNC_1 (int*,long*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,double,double,double,double) ;
 int FUNC_4 (char*,int ,int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_3, VAR_4;
 long VAR_5;

 VAR_4 = FUNC_2();
 FUNC_1(&VAR_3, &VAR_5);
 if (VAR_2) {
  VAR_5 = 1024 * 1024;
  (void)FUNC_4("%jdM/%jdM swap space\n",
      FUNC_0(VAR_1.ksw_used), FUNC_0(VAR_1.ksw_total));
 } else if (VAR_0 > 1) {
  FUNC_3("Total", VAR_1.ksw_total, VAR_1.ksw_used,
      VAR_1.ksw_total - VAR_1.ksw_used,
      (VAR_1.ksw_used * 100.0) / VAR_1.ksw_total);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int kstat_t ;
struct TYPE_3__ {long ul; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
typedef TYPE_2__ kstat_named_t ;
typedef int kstat_ctl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*,int ,char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *) ;
 long FUNC_5 (int ) ;

int FUNC_6(double* VAR_2) {
  kstat_ctl_t *VAR_3;
  kstat_t *VAR_4;
  kstat_named_t *VAR_5;

  long VAR_6 = FUNC_5(VAR_1);

  VAR_3 = FUNC_3();
  if (VAR_3 == ((void*)0))
    return VAR_0;

  VAR_4 = FUNC_2(VAR_3, (char*) "unix", 0, (char*) "system_misc");
  if (FUNC_4(VAR_3, VAR_4, ((void*)0)) == -1) {
    *VAR_2 = -1;
  } else {
    VAR_5 = (kstat_named_t*) FUNC_1(VAR_4, (char*) "clk_intr");
    *VAR_2 = VAR_5->value.ul / VAR_6;
  }
  FUNC_0(VAR_3);

  return 0;
}

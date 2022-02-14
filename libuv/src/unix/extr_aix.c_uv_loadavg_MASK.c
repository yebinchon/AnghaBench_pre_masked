
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ps_total ;
struct TYPE_3__ {double* loadavg; } ;
typedef TYPE_1__ perfstat_cpu_total_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int,int) ;

void FUNC_1(double VAR_1[3]) {
  perfstat_cpu_total_t VAR_2;
  int VAR_3 = FUNC_0(((void*)0), &VAR_2, sizeof(VAR_2), 1);
  if (VAR_3 == -1) {
    VAR_1[0] = 0.; VAR_1[1] = 0.; VAR_1[2] = 0.;
    return;
  }
  VAR_1[0] = VAR_2.loadavg[0] / (double)(1 << VAR_0);
  VAR_1[1] = VAR_2.loadavg[1] / (double)(1 << VAR_0);
  VAR_1[2] = VAR_2.loadavg[2] / (double)(1 << VAR_0);
}

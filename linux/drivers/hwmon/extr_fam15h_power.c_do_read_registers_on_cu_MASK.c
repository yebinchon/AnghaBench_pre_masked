
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fam15h_power_data {int* cu_on; int * cpu_sw_pwr_ptsc; int * cu_acc_power; } ;
struct TYPE_2__ {int cpu_core_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct fam15h_power_data *VAR_3 = VAR_2;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2();





 VAR_5 = FUNC_0(VAR_4).cpu_core_id;

 FUNC_1(VAR_0, &VAR_3->cu_acc_power[VAR_5]);
 FUNC_1(VAR_1, &VAR_3->cpu_sw_pwr_ptsc[VAR_5]);

 VAR_3->cu_on[VAR_5] = 1;
}

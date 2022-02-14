
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cpu; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_2;

 if ((!FUNC_3("st,stih407")) &&
  (!FUNC_3("st,stih410")))
  return -VAR_0;

 VAR_1.cpu = FUNC_1(0);
 if (!VAR_1.cpu) {
  FUNC_0(VAR_1.cpu, "Failed to get device for CPU0\n");
  goto skip_voltage_scaling;
 }

 if (!FUNC_2(VAR_1.cpu->of_node, "operating-points-v2", ((void*)0))) {
  FUNC_0(VAR_1.cpu, "OPP-v2 not supported\n");
  goto skip_voltage_scaling;
 }

 VAR_2 = FUNC_5();
 if (VAR_2)
  goto skip_voltage_scaling;

 VAR_2 = FUNC_6();
 if (!VAR_2)
  goto register_cpufreq_dt;

skip_voltage_scaling:
 FUNC_0(VAR_1.cpu, "Not doing voltage scaling\n");

register_cpufreq_dt:
 FUNC_4("cpufreq-dt", -1, ((void*)0), 0);

 return 0;
}

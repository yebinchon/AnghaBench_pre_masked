
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc6_settings {int cpu_pstate_separation_time; int nb_pstate_switch_disable; int cpu_pstate_disable; int cpu_cc6_disable; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(
 const struct cc6_settings *VAR_0)
{
 FUNC_0("New Display Configuration:\n");

 FUNC_0("   cpu_cc6_disable: %d\n",
   VAR_0->cpu_cc6_disable);
 FUNC_0("   cpu_pstate_disable: %d\n",
   VAR_0->cpu_pstate_disable);
 FUNC_0("   nb_pstate_switch_disable: %d\n",
   VAR_0->nb_pstate_switch_disable);
 FUNC_0("   cpu_pstate_separation_time: %d\n\n",
   VAR_0->cpu_pstate_separation_time);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpu; } ;
struct cpufreq_acpi_req {unsigned int state; int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct cpufreq_acpi_req*) ;

__attribute__((used)) static int
FUNC_1 (
 struct cpufreq_policy *VAR_1,
 unsigned int VAR_2)
{
 struct cpufreq_acpi_req VAR_3;

 VAR_3.cpu = VAR_1->cpu;
 VAR_3.state = VAR_2;

 return FUNC_0(VAR_3.cpu, VAR_0, &VAR_3);
}

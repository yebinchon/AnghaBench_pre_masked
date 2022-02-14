
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_acpi_req {unsigned int cpu; } ;


 int VAR_0 ;
 long FUNC_0 (unsigned int,int ,struct cpufreq_acpi_req*) ;

__attribute__((used)) static unsigned int
FUNC_1 (
 unsigned int VAR_1)
{
 struct cpufreq_acpi_req VAR_2;
 long VAR_3;

 VAR_2.cpu = VAR_1;
 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2);

 return VAR_3 > 0 ? (unsigned int) VAR_3 : 0;
}

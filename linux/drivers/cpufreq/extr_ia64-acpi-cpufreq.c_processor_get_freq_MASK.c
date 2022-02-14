
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpufreq_acpi_req {unsigned int cpu; } ;
struct cpufreq_acpi_io {int dummy; } ;


 long VAR_0 ;
 struct cpufreq_acpi_io** VAR_1 ;
 int FUNC_0 (struct cpufreq_acpi_io*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 () ;

__attribute__((used)) static long
FUNC_5 (
 void *VAR_2)
{
 struct cpufreq_acpi_req *VAR_3 = VAR_2;
 unsigned int VAR_4 = VAR_3->cpu;
 struct cpufreq_acpi_io *VAR_5 = VAR_1[VAR_4];
 u32 VAR_6;
 int VAR_7;

 FUNC_1("processor_get_freq\n");
 if (FUNC_4() != VAR_4)
  return -VAR_0;


 VAR_7 = FUNC_3(&VAR_6);
 if (VAR_7) {
  FUNC_2("get performance failed with error %d\n", VAR_7);
  return VAR_7;
 }
 return 1000 * FUNC_0(VAR_5, VAR_6);
}

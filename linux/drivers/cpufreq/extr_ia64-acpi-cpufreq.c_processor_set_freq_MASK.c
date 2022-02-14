
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cpufreq_acpi_req {unsigned int cpu; int state; } ;
struct TYPE_4__ {int state; TYPE_1__* states; } ;
struct cpufreq_acpi_io {TYPE_2__ acpi_data; scalar_t__ resume; } ;
struct TYPE_3__ {scalar_t__ control; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct cpufreq_acpi_io** VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static long
FUNC_5 (
 void *VAR_3)
{
 struct cpufreq_acpi_req *VAR_4 = VAR_3;
 unsigned int VAR_5 = VAR_4->cpu;
 struct cpufreq_acpi_io *VAR_6 = VAR_2[VAR_5];
 int VAR_7, VAR_8 = VAR_4->state;
 u32 VAR_9;

 FUNC_0("processor_set_freq\n");
 if (FUNC_3() != VAR_5)
  return -VAR_0;

 if (VAR_8 == VAR_6->acpi_data.state) {
  if (FUNC_4(VAR_6->resume)) {
   FUNC_0("Called after resume, resetting to P%d\n", VAR_8);
   VAR_6->resume = 0;
  } else {
   FUNC_0("Already at target state (P%d)\n", VAR_8);
   return 0;
  }
 }

 FUNC_0("Transitioning from P%d to P%d\n",
  VAR_6->acpi_data.state, VAR_8);





 VAR_9 = (u32) VAR_6->acpi_data.states[VAR_8].control;

 FUNC_0("Transitioning to state: 0x%08x\n", VAR_9);

 VAR_7 = FUNC_2(VAR_9);
 if (VAR_7) {
  FUNC_1("Transition failed with error %d\n", VAR_7);
  return -VAR_1;
 }

 VAR_6->acpi_data.state = VAR_8;
 return 0;
}

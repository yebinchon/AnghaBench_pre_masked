
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int transition_latency; } ;
struct cpufreq_policy {unsigned int cpu; struct cpufreq_frequency_table* freq_table; TYPE_3__ cpuinfo; } ;
struct cpufreq_frequency_table {int frequency; } ;
struct TYPE_7__ {scalar_t__ space_id; } ;
struct TYPE_6__ {scalar_t__ space_id; } ;
struct TYPE_10__ {int state_count; unsigned int state; TYPE_4__* states; TYPE_2__ status_register; TYPE_1__ control_register; } ;
struct cpufreq_acpi_io {int resume; TYPE_5__ acpi_data; } ;
struct TYPE_9__ {int transition_latency; int core_frequency; scalar_t__ control; scalar_t__ status; scalar_t__ bus_master_latency; scalar_t__ power; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cpufreq_acpi_io** VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (TYPE_5__*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct cpufreq_frequency_table* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct cpufreq_acpi_io*) ;
 struct cpufreq_acpi_io* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,unsigned int) ;

__attribute__((used)) static int
FUNC_8 (
 struct cpufreq_policy *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9 = VAR_7->cpu;
 struct cpufreq_acpi_io *VAR_10;
 unsigned int VAR_11 = 0;
 struct cpufreq_frequency_table *VAR_12;

 FUNC_6("acpi_cpufreq_cpu_init\n");

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return (-VAR_3);

 VAR_6[VAR_9] = VAR_10;

 VAR_11 = FUNC_1(&VAR_10->acpi_data, VAR_9);

 if (VAR_11)
  goto err_free;


 if (VAR_10->acpi_data.state_count <= 1) {
  FUNC_6("No P-States\n");
  VAR_11 = -VAR_2;
  goto err_unreg;
 }

 if ((VAR_10->acpi_data.control_register.space_id !=
     VAR_0) ||
     (VAR_10->acpi_data.status_register.space_id !=
     VAR_0)) {
  FUNC_6("Unsupported address space [%d, %d]\n",
   (u32) (VAR_10->acpi_data.control_register.space_id),
   (u32) (VAR_10->acpi_data.status_register.space_id));
  VAR_11 = -VAR_2;
  goto err_unreg;
 }


 VAR_12 = FUNC_3(VAR_10->acpi_data.state_count + 1,
                            sizeof(*VAR_12),
                            VAR_4);
 if (!VAR_12) {
  VAR_11 = -VAR_3;
  goto err_unreg;
 }


 VAR_7->cpuinfo.transition_latency = 0;
 for (VAR_8=0; VAR_8<VAR_10->acpi_data.state_count; VAR_8++) {
  if ((VAR_10->acpi_data.states[VAR_8].transition_latency * 1000) >
      VAR_7->cpuinfo.transition_latency) {
   VAR_7->cpuinfo.transition_latency =
       VAR_10->acpi_data.states[VAR_8].transition_latency * 1000;
  }
 }


 for (VAR_8 = 0; VAR_8 <= VAR_10->acpi_data.state_count; VAR_8++)
 {
  if (VAR_8 < VAR_10->acpi_data.state_count) {
   VAR_12[VAR_8].frequency =
         VAR_10->acpi_data.states[VAR_8].core_frequency * 1000;
  } else {
   VAR_12[VAR_8].frequency = VAR_1;
  }
 }

 VAR_7->freq_table = VAR_12;


 FUNC_0(VAR_5);

 FUNC_7("CPU%u - ACPI performance management activated\n", VAR_9);

 for (VAR_8 = 0; VAR_8 < VAR_10->acpi_data.state_count; VAR_8++)
  FUNC_6("     %cP%d: %d MHz, %d mW, %d uS, %d uS, 0x%x 0x%x\n",
   (VAR_8 == VAR_10->acpi_data.state?'*':' '), VAR_8,
   (u32) VAR_10->acpi_data.states[VAR_8].core_frequency,
   (u32) VAR_10->acpi_data.states[VAR_8].power,
   (u32) VAR_10->acpi_data.states[VAR_8].transition_latency,
   (u32) VAR_10->acpi_data.states[VAR_8].bus_master_latency,
   (u32) VAR_10->acpi_data.states[VAR_8].status,
   (u32) VAR_10->acpi_data.states[VAR_8].control);



 VAR_10->resume = 1;

 return (VAR_11);

 err_unreg:
 FUNC_2(VAR_9);
 err_free:
 FUNC_4(VAR_10);
 VAR_6[VAR_9] = ((void*)0);

 return (VAR_11);
}

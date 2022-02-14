
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {scalar_t__ space_id; } ;
struct TYPE_4__ {scalar_t__ space_id; } ;
struct TYPE_6__ {int state_count; int shared_cpu_map; TYPE_2__ status_register; TYPE_1__ control_register; } ;
struct powernow_k8_data {scalar_t__ cpu; int numps; TYPE_3__ acpi_data; struct cpufreq_frequency_table* powernow_table; } ;
struct cpufreq_frequency_table {int frequency; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct powernow_k8_data*,struct cpufreq_frequency_table*) ;
 int FUNC_5 (struct cpufreq_frequency_table*) ;
 struct cpufreq_frequency_table* FUNC_6 (int,int ) ;
 int FUNC_7 (struct powernow_k8_data*,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct powernow_k8_data*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct powernow_k8_data *VAR_7)
{
 struct cpufreq_frequency_table *VAR_8;
 int VAR_9 = -VAR_3;
 u64 VAR_10, VAR_11;

 if (FUNC_1(&VAR_7->acpi_data, VAR_7->cpu)) {
  FUNC_8("register performance failed: bad ACPI data\n");
  return -VAR_2;
 }


 if (VAR_7->acpi_data.state_count <= 1) {
  FUNC_8("No ACPI P-States\n");
  goto err_out;
 }

 VAR_10 = VAR_7->acpi_data.control_register.space_id;
 VAR_11 = VAR_7->acpi_data.status_register.space_id;

 if ((VAR_10 != VAR_0) ||
     (VAR_11 != VAR_0)) {
  FUNC_8("Invalid control/status registers (%llx - %llx)\n",
   VAR_10, VAR_11);
  goto err_out;
 }


 VAR_8 = FUNC_6((sizeof(*VAR_8)
  * (VAR_7->acpi_data.state_count + 1)), VAR_5);
 if (!VAR_8)
  goto err_out;


 VAR_7->numps = VAR_7->acpi_data.state_count;
 FUNC_7(VAR_7, 0);

 VAR_9 = FUNC_4(VAR_7, VAR_8);
 if (VAR_9)
  goto err_out_mem;

 VAR_8[VAR_7->acpi_data.state_count].frequency =
  VAR_1;
 VAR_7->powernow_table = VAR_8;

 if (FUNC_3(FUNC_11(VAR_7->cpu)) == VAR_7->cpu)
  FUNC_10(VAR_7);


 FUNC_0(VAR_6);

 if (!FUNC_12(&VAR_7->acpi_data.shared_cpu_map, VAR_5)) {
  FUNC_9("unable to alloc powernow_k8_data cpumask\n");
  VAR_9 = -VAR_4;
  goto err_out_mem;
 }

 return 0;

err_out_mem:
 FUNC_5(VAR_8);

err_out:
 FUNC_2(VAR_7->cpu);



 VAR_7->acpi_data.state_count = 0;

 return VAR_9;
}

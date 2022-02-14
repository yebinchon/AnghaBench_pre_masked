
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shared_cpu_map; scalar_t__ state_count; } ;
struct powernow_k8_data {TYPE_1__ acpi_data; int cpu; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct powernow_k8_data *VAR_0)
{
 if (VAR_0->acpi_data.state_count)
  FUNC_0(VAR_0->cpu);
 FUNC_1(VAR_0->acpi_data.shared_cpu_map);
}

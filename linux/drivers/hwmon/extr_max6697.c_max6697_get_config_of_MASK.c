
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max6697_platform_data {int resistance_cancellation; void* ideality_value; void* ideality_mask; void* over_temperature_mask; void* alert_mask; void* beta_compensation; void* extended_range_enable; void* smbus_timeout_disable; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 void* FUNC_0 (int const) ;
 int * FUNC_1 (struct device_node*,char*,int*) ;
 void* FUNC_2 (struct device_node*,char*) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_0,
      struct max6697_platform_data *VAR_1)
{
 int VAR_2;
 const __be32 *VAR_3;

 VAR_1->smbus_timeout_disable =
  FUNC_2(VAR_0, "smbus-timeout-disable");
 VAR_1->extended_range_enable =
  FUNC_2(VAR_0, "extended-range-enable");
 VAR_1->beta_compensation =
  FUNC_2(VAR_0, "beta-compensation-enable");

 VAR_3 = FUNC_1(VAR_0, "alert-mask", &VAR_2);
 if (VAR_3 && VAR_2 == sizeof(u32))
  VAR_1->alert_mask = FUNC_0(VAR_3[0]);
 VAR_3 = FUNC_1(VAR_0, "over-temperature-mask", &VAR_2);
 if (VAR_3 && VAR_2 == sizeof(u32))
  VAR_1->over_temperature_mask = FUNC_0(VAR_3[0]);
 VAR_3 = FUNC_1(VAR_0, "resistance-cancellation", &VAR_2);
 if (VAR_3) {
  if (VAR_2 == sizeof(u32))
   VAR_1->resistance_cancellation = FUNC_0(VAR_3[0]);
  else
   VAR_1->resistance_cancellation = 0xfe;
 }
 VAR_3 = FUNC_1(VAR_0, "transistor-ideality", &VAR_2);
 if (VAR_3 && VAR_2 == 2 * sizeof(u32)) {
   VAR_1->ideality_mask = FUNC_0(VAR_3[0]);
   VAR_1->ideality_value = FUNC_0(VAR_3[1]);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adf_hw_device_data {int accel_mask; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(struct adf_hw_device_data *VAR_1)
{
 uint32_t VAR_2, VAR_3 = 0;

 if (!VAR_1 || !VAR_1->accel_mask)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->accel_mask & (1 << VAR_2))
   VAR_3++;
 }
 return VAR_3;
}

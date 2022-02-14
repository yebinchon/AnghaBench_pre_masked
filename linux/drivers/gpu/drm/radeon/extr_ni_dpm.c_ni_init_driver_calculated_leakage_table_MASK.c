
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_8__ {int leakage_minimum_temperature; int i_leakage; int leakage_coefficients; } ;
struct ni_power_info {TYPE_3__ cac_data; } ;
struct TYPE_7__ {unsigned int count; TYPE_1__* entries; } ;
struct evergreen_power_info {TYPE_2__ vddc_voltage_table; } ;
typedef int s32 ;
struct TYPE_9__ {void*** cac_lkge_lut; } ;
struct TYPE_6__ {int value; } ;
typedef TYPE_4__ PP_NIslands_CACTABLES ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (int) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int *,int ,int,int ,int*) ;
 struct ni_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_2,
         PP_NIslands_CACTABLES *VAR_3)
{
 struct ni_power_info *VAR_4 = FUNC_3(VAR_2);
 struct evergreen_power_info *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6 = 0;
 unsigned int VAR_7, VAR_8, VAR_9;
 s32 VAR_10;
 u32 VAR_11, VAR_12 = 0;
 u32 VAR_13;

 VAR_9 = VAR_5->vddc_voltage_table.count;

 if (VAR_1 < VAR_9)
  VAR_9 = VAR_1;

 VAR_13 = FUNC_4(VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   VAR_10 = (1000 * ((VAR_7 + 1) * 8));

   if (VAR_10 < VAR_4->cac_data.leakage_minimum_temperature)
    VAR_10 = VAR_4->cac_data.leakage_minimum_temperature;

   FUNC_2(VAR_2,
        &VAR_4->cac_data.leakage_coefficients,
        VAR_5->vddc_voltage_table.entries[VAR_8].value,
        VAR_10,
        VAR_4->cac_data.i_leakage,
        &VAR_6);

   VAR_11 = FUNC_5(VAR_6, VAR_13) / 1000;
   if (VAR_11 > VAR_12)
    VAR_12 = VAR_11;

   VAR_3->cac_lkge_lut[VAR_7][VAR_8] = FUNC_0(VAR_11);
  }
 }

 for (VAR_8 = VAR_9; VAR_8 < VAR_1; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   VAR_3->cac_lkge_lut[VAR_7][VAR_8] = FUNC_0(VAR_12);
 }
 return 0;
}

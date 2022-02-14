
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct TYPE_6__ {int cac_leakage; } ;
struct si_power_info {TYPE_2__ dyn_powertune_data; TYPE_1__* powertune_data; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_7__ {int ** cac_lkge_lut; } ;
struct TYPE_5__ {int fixed_kt; int leakage_coefficients; } ;
typedef TYPE_3__ PP_SIslands_CacConfig ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ,unsigned int,int ,int*) ;
 struct si_power_info* FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_2,
         PP_SIslands_CacConfig *VAR_3,
         u16 VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct si_power_info *VAR_7 = FUNC_2(VAR_2);
 u32 VAR_8;
 unsigned int VAR_9, VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u16 VAR_13;

 VAR_12 = FUNC_3(VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_13 = VAR_4 - (VAR_6 * VAR_10);

  FUNC_1(VAR_2,
        &VAR_7->powertune_data->leakage_coefficients,
        VAR_7->powertune_data->fixed_kt,
        VAR_13,
        VAR_7->dyn_powertune_data.cac_leakage,
        &VAR_8);

  VAR_11 = FUNC_4(VAR_8, VAR_12) / 4;

  if (VAR_11 > 0xFFFF)
   VAR_11 = 0xFFFF;

  for (VAR_9 = 0; VAR_9 < VAR_0 ; VAR_9++)
   VAR_3->cac_lkge_lut[VAR_9][VAR_1-1-VAR_10] =
    FUNC_0((u16)VAR_11);
 }
 return 0;
}

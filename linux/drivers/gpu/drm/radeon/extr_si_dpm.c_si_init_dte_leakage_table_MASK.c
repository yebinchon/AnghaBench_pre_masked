
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
struct radeon_device {int dummy; } ;
typedef int s32 ;
struct TYPE_7__ {int ** cac_lkge_lut; } ;
struct TYPE_5__ {int leakage_coefficients; } ;
typedef TYPE_3__ PP_SIslands_CacConfig ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct radeon_device*,int *,unsigned int,int,int ,int*) ;
 struct si_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_2,
         PP_SIslands_CacConfig *VAR_3,
         u16 VAR_4, u16 VAR_5, u16 VAR_6,
         u16 VAR_7, u16 VAR_8)
{
 struct si_power_info *VAR_9 = FUNC_2(VAR_2);
 u32 VAR_10;
 unsigned int VAR_11, VAR_12;
 s32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u16 VAR_16;

 VAR_15 = FUNC_3(VAR_2);

 for (VAR_11 = 0; VAR_11 < VAR_0 ; VAR_11++) {
  VAR_13 = (1000 * (VAR_11 * VAR_8 + VAR_7));

  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   VAR_16 = VAR_4 - (VAR_6 * VAR_12);

   FUNC_1(VAR_2,
        &VAR_9->powertune_data->leakage_coefficients,
        VAR_16,
        VAR_13,
        VAR_9->dyn_powertune_data.cac_leakage,
        &VAR_10);

   VAR_14 = FUNC_4(VAR_10, VAR_15) / 4;

   if (VAR_14 > 0xFFFF)
    VAR_14 = 0xFFFF;

   VAR_3->cac_lkge_lut[VAR_11][VAR_1-1-VAR_12] =
    FUNC_0((u16)VAR_14);
  }
 }
 return 0;
}

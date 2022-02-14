
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct rv7xx_power_info {size_t vddc_mask_low; void* valid_vddc_entries; TYPE_1__* vddc_table; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {int vddc; size_t low_smio; scalar_t__ high_smio; void* vddc_index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,int ,int*) ;
 int FUNC_1 (struct radeon_device*,int ,int*) ;
 int FUNC_2 (struct radeon_device*,int,int ,size_t*,size_t*) ;
 int FUNC_3 (struct radeon_device*,int ,int*) ;
 struct rv7xx_power_info* FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_3)
{
 struct rv7xx_power_info *VAR_4 = FUNC_4(VAR_3);
 u16 VAR_5, VAR_6, VAR_7;
 u32 VAR_8 = 0;
 u8 VAR_9 = 0;
 u32 VAR_10;

 FUNC_1(VAR_3, VAR_2, &VAR_5);
 FUNC_0(VAR_3, VAR_2, &VAR_6);
 FUNC_3(VAR_3, VAR_2, &VAR_7);

 VAR_8 = (VAR_6 - VAR_5) / VAR_7 + 1;

 if (VAR_8 > VAR_1)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  u32 VAR_11, VAR_12;

  VAR_4->vddc_table[VAR_10].vddc = (u16)(VAR_5 + VAR_10 * VAR_7);
  FUNC_2(VAR_3,
            VAR_4->vddc_table[VAR_10].vddc,
            VAR_2,
            &VAR_11, &VAR_12);
  VAR_4->vddc_table[VAR_10].low_smio = VAR_11 & VAR_12;
  VAR_4->vddc_table[VAR_10].high_smio = 0;
  VAR_4->vddc_mask_low = VAR_12;
  if (VAR_10 > 0) {
   if ((VAR_4->vddc_table[VAR_10].low_smio !=
        VAR_4->vddc_table[VAR_10 - 1].low_smio ) ||
        (VAR_4->vddc_table[VAR_10].high_smio !=
         VAR_4->vddc_table[VAR_10 - 1].high_smio))
    VAR_9++;
  }
  VAR_4->vddc_table[VAR_10].vddc_index = VAR_9;
 }

 VAR_4->valid_vddc_entries = (u8)VAR_8;

 return 0;
}

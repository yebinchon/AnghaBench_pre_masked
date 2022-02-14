
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct llcc_edac_reg_data {int reg_cnt; size_t synd_reg; size_t count_status_reg; int count_mask; int count_shift; size_t ways_status_reg; int ways_mask; int ways_shift; int name; } ;
struct llcc_drv_data {size_t* offsets; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int ,int,...) ;
 struct llcc_edac_reg_data* VAR_2 ;
 int FUNC_1 (int,struct llcc_drv_data*) ;
 int FUNC_2 (int ,size_t,...) ;

__attribute__((used)) static int
FUNC_3(struct llcc_drv_data *VAR_3, u32 VAR_4, int VAR_5)
{
 struct llcc_edac_reg_data VAR_6 = VAR_2[VAR_5];
 int VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_6.reg_cnt; VAR_10++) {
  VAR_11 = VAR_6.synd_reg + (VAR_10 * 4);
  VAR_9 = FUNC_2(VAR_3->regmap, VAR_3->offsets[VAR_4] + VAR_11,
      &VAR_12);
  if (VAR_9)
   goto clear;

  FUNC_0(VAR_1, VAR_0, "%s: ECC_SYN%d: 0x%8x\n",
       VAR_6.name, VAR_10, VAR_12);
 }

 VAR_9 = FUNC_2(VAR_3->regmap,
     VAR_3->offsets[VAR_4] + VAR_6.count_status_reg,
     &VAR_7);
 if (VAR_9)
  goto clear;

 VAR_7 &= VAR_6.count_mask;
 VAR_7 >>= VAR_6.count_shift;
 FUNC_0(VAR_1, VAR_0, "%s: Error count: 0x%4x\n",
      VAR_6.name, VAR_7);

 VAR_9 = FUNC_2(VAR_3->regmap,
     VAR_3->offsets[VAR_4] + VAR_6.ways_status_reg,
     &VAR_8);
 if (VAR_9)
  goto clear;

 VAR_8 &= VAR_6.ways_mask;
 VAR_8 >>= VAR_6.ways_shift;

 FUNC_0(VAR_1, VAR_0, "%s: Error ways: 0x%4x\n",
      VAR_6.name, VAR_8);

clear:
 return FUNC_1(VAR_5, VAR_3);
}

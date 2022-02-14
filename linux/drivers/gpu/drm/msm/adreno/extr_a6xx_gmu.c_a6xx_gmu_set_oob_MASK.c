
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_gmu {int dev; } ;
typedef enum a6xx_gmu_oob_state { ____Placeholder_a6xx_gmu_oob_state } a6xx_gmu_oob_state ;


 int FUNC_0 (int ,char*,char const*,int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct a6xx_gmu*,int ,int,int,int,int) ;
 int FUNC_2 (struct a6xx_gmu*,int ) ;
 int FUNC_3 (struct a6xx_gmu*,int ,int) ;

int FUNC_4(struct a6xx_gmu *VAR_10, enum a6xx_gmu_oob_state VAR_11)
{
 int VAR_12;
 u32 VAR_13;
 int VAR_14, VAR_15;
 const char *VAR_16;

 switch (VAR_11) {
 case 128:
  VAR_14 = VAR_6;
  VAR_15 = VAR_5;
  VAR_16 = "GPU_SET";
  break;
 case 130:
  VAR_14 = VAR_2;
  VAR_15 = VAR_1;
  VAR_16 = "BOOT_SLUMBER";
  break;
 case 129:
  VAR_14 = VAR_4;
  VAR_15 = VAR_3;
  VAR_16 = "GPU_DCVS";
  break;
 default:
  return -VAR_0;
 }


 FUNC_3(VAR_10, VAR_9, 1 << VAR_14);


 VAR_12 = FUNC_1(VAR_10, VAR_8, VAR_13,
  VAR_13 & (1 << VAR_15), 100, 10000);

 if (VAR_12)
  FUNC_0(VAR_10->dev,
   "Timeout waiting for GMU OOB set %s: 0x%x\n",
    VAR_16,
    FUNC_2(VAR_10, VAR_8));


 FUNC_3(VAR_10, VAR_7, 1 << VAR_15);

 return VAR_12;
}

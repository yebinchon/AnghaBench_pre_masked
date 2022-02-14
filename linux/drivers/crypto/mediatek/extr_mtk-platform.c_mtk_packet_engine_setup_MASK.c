
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct mtk_sys_cap {void* hia_ver; void* hw_opt; void* hia_opt; } ;
struct mtk_cryp {scalar_t__ base; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mtk_cryp*,int,struct mtk_sys_cap*) ;
 int FUNC_3 (struct mtk_cryp*,int) ;
 int FUNC_4 (struct mtk_cryp*,struct mtk_sys_cap*) ;
 int FUNC_5 (struct mtk_cryp*) ;
 int FUNC_6 (struct mtk_cryp*,int,struct mtk_sys_cap*) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct mtk_cryp *VAR_27)
{
 struct mtk_sys_cap VAR_28;
 int VAR_29, VAR_30;
 u32 VAR_31;

 VAR_28.hia_ver = FUNC_7(VAR_27->base + VAR_6);
 VAR_28.hia_opt = FUNC_7(VAR_27->base + VAR_5);
 VAR_28.hw_opt = FUNC_7(VAR_27->base + VAR_3);

 if (!(((u16)VAR_28.hia_ver) == VAR_9))
  return -VAR_1;


 FUNC_8(0, VAR_27->base + VAR_2);


 VAR_31 = FUNC_7(VAR_27->base + VAR_4);
 VAR_31 &= ~VAR_8;
 VAR_31 |= FUNC_0(5);
 FUNC_8(VAR_31, VAR_27->base + VAR_4);

 VAR_30 = FUNC_5(VAR_27);
 if (VAR_30) {
  FUNC_1(VAR_27->dev, "Failed to reset DFE and DSE.\n");
  return VAR_30;
 }

 FUNC_4(VAR_27, &VAR_28);


 FUNC_3(VAR_27, 0xf);

 for (VAR_29 = 0; VAR_29 < VAR_24; VAR_29++) {
  FUNC_2(VAR_27, VAR_29, &VAR_28);
  FUNC_6(VAR_27, VAR_29, &VAR_28);
 }

 FUNC_8(VAR_22 | VAR_21 | VAR_23,
        VAR_27->base + VAR_26);


 FUNC_8(VAR_7, VAR_27->base + VAR_0);
 FUNC_8(VAR_12 | VAR_15 |
        VAR_17 | VAR_19 |
        VAR_10 | VAR_13 |
        VAR_16 | VAR_18 |
        VAR_20 | VAR_11 |
        VAR_14,
        VAR_27->base + VAR_25);

 return 0;
}

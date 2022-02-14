
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_lvds {scalar_t__ output; int pclk; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rockchip_lvds*,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct rockchip_lvds *VAR_47)
{
 int VAR_48;
 u32 VAR_49;

 VAR_48 = FUNC_5(VAR_47->pclk);
 if (VAR_48 < 0) {
  FUNC_0(VAR_47->dev, "failed to enable lvds pclk %d\n", VAR_48);
  return VAR_48;
 }
 VAR_48 = FUNC_7(VAR_47->dev);
 if (VAR_48 < 0) {
  FUNC_0(VAR_47->dev, "failed to get pm runtime: %d\n", VAR_48);
  FUNC_4(VAR_47->pclk);
  return VAR_48;
 }
 VAR_49 = VAR_10 | VAR_9 |
  VAR_8 | VAR_7 |
  VAR_6;
 if (VAR_47->output == VAR_0) {
  VAR_49 |= VAR_13 |
   VAR_11;
  FUNC_6(VAR_47, VAR_5, VAR_49);
  FUNC_6(VAR_47, VAR_21,
       FUNC_1(0x46));
  FUNC_6(VAR_47, VAR_32,
       VAR_38 |
       VAR_37 |
       VAR_36 |
       VAR_35 |
       VAR_34 |
       VAR_33);
  FUNC_6(VAR_47, VAR_39,
       VAR_45 |
       VAR_44 |
       VAR_43 |
       VAR_42 |
       VAR_41 |
       VAR_40);
 } else {
  VAR_49 |= VAR_12 |
       VAR_11;
  FUNC_6(VAR_47, VAR_5, VAR_49);
  FUNC_6(VAR_47, VAR_14,
       VAR_20 |
       VAR_19 |
       VAR_18 |
       VAR_17 |
       VAR_16 |
       VAR_15);
  FUNC_6(VAR_47, VAR_21,
       VAR_30 |
       VAR_29 |
       VAR_28 |
       VAR_27 |
       VAR_26 |
       VAR_25 |
       VAR_24 |
       FUNC_1(0x46));
  FUNC_6(VAR_47, VAR_32, 0x00);
  FUNC_6(VAR_47, VAR_39, 0x00);
 }
 FUNC_6(VAR_47, VAR_31, FUNC_2(0x46));
 FUNC_6(VAR_47, VAR_46, FUNC_3(0x0a));
 FUNC_6(VAR_47, VAR_22, VAR_23);

 FUNC_6(VAR_47, VAR_3, VAR_4);
 FUNC_6(VAR_47, VAR_1, VAR_2);

 return 0;
}

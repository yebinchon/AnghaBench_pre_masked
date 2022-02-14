
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_hdmi {int regmap; } ;
struct dw_hdmi {int dummy; } ;


 int FUNC_0 (int,int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct dw_hdmi*,void*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dw_hdmi *VAR_15, void *VAR_16)
{
 struct rockchip_hdmi *VAR_17 = (struct rockchip_hdmi *)VAR_16;

 FUNC_1(VAR_15, VAR_16);


 FUNC_2(VAR_17->regmap,
  VAR_2,
  FUNC_0(0, VAR_8 | VAR_4 |
     VAR_14 | VAR_11 |
     VAR_6));
 FUNC_2(VAR_17->regmap,
  VAR_1,
  FUNC_0(0, VAR_12 | VAR_9 |
     VAR_5 |
     VAR_3));
 FUNC_2(VAR_17->regmap,
  VAR_0,
  FUNC_0(VAR_13 | VAR_10,
         VAR_13 | VAR_10 |
         VAR_7));
}

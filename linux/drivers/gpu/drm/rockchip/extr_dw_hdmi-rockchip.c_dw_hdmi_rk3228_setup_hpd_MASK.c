
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
 int FUNC_1 (struct dw_hdmi*,void*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dw_hdmi *VAR_7, void *VAR_8)
{
 struct rockchip_hdmi *VAR_9 = (struct rockchip_hdmi *)VAR_8;

 FUNC_1(VAR_7, VAR_8);

 FUNC_2(VAR_9->regmap,
  VAR_1,
  FUNC_0(VAR_2 | VAR_6 |
         VAR_4,
         VAR_2 | VAR_6 |
         VAR_4));

 FUNC_2(VAR_9->regmap,
  VAR_0,
  FUNC_0(VAR_5 | VAR_3,
         VAR_5 | VAR_3));
}

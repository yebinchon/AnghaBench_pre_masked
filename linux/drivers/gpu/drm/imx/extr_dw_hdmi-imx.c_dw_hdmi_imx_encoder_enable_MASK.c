
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_hdmi {int regmap; TYPE_1__* dev; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct drm_encoder*) ;
 struct imx_hdmi* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_3)
{
 struct imx_hdmi *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = FUNC_0(VAR_4->dev->of_node, VAR_3);

 FUNC_2(VAR_4->regmap, VAR_2,
      VAR_0,
      VAR_5 << VAR_1);
}

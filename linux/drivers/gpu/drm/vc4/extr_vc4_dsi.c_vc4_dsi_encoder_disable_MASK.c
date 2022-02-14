
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_dsi_encoder {struct vc4_dsi* dsi; } ;
struct vc4_dsi {int pixel_clock; int escape_clock; int pll_phy_clock; int bridge; TYPE_1__* pdev; } ;
struct drm_encoder {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 struct vc4_dsi_encoder* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct vc4_dsi*,int) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_0)
{
 struct vc4_dsi_encoder *VAR_1 = FUNC_4(VAR_0);
 struct vc4_dsi *VAR_2 = VAR_1->dsi;
 struct device *VAR_3 = &VAR_2->pdev->dev;

 FUNC_1(VAR_2->bridge);
 FUNC_5(VAR_2, 1);
 FUNC_2(VAR_2->bridge);

 FUNC_0(VAR_2->pll_phy_clock);
 FUNC_0(VAR_2->escape_clock);
 FUNC_0(VAR_2->pixel_clock);

 FUNC_3(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_rgb {int dc; } ;
struct tegra_output {scalar_t__ panel; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct tegra_output* FUNC_3 (struct drm_encoder*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct tegra_rgb* FUNC_6 (struct tegra_output*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_1)
{
 struct tegra_output *VAR_2 = FUNC_3(VAR_1);
 struct tegra_rgb *VAR_3 = FUNC_6(VAR_2);

 if (VAR_2->panel)
  FUNC_1(VAR_2->panel);

 FUNC_5(VAR_3->dc, VAR_0, FUNC_0(VAR_0));
 FUNC_4(VAR_3->dc);

 if (VAR_2->panel)
  FUNC_2(VAR_2->panel);
}

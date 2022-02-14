
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_plane {struct tegra_dc* dc; } ;
struct tegra_dc {int dev; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_dc*,struct tegra_plane*) ;
 int FUNC_4 (struct tegra_plane*,int ) ;
 int FUNC_5 (struct tegra_plane*,int ,int ) ;
 struct tegra_dc* FUNC_6 (int ) ;
 struct tegra_plane* FUNC_7 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_8(struct drm_plane *VAR_2,
           struct drm_plane_state *VAR_3)
{
 struct tegra_plane *VAR_4 = FUNC_7(VAR_2);
 struct tegra_dc *VAR_5;
 u32 VAR_6;


 if (!VAR_3 || !VAR_3->crtc)
  return;

 VAR_5 = FUNC_6(VAR_3->crtc);






 if (FUNC_0(VAR_4->dc == ((void*)0)))
  VAR_4->dc = VAR_5;

 FUNC_1(VAR_5->dev);

 VAR_6 = FUNC_4(VAR_4, VAR_0);
 VAR_6 &= ~VAR_1;
 FUNC_5(VAR_4, VAR_6, VAR_0);

 FUNC_3(VAR_5, VAR_4);

 FUNC_2(VAR_5->dev);
}

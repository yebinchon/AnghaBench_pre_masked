
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dc {int dummy; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_dc*,int ) ;
 int FUNC_1 (struct tegra_dc*,int ,int ) ;
 struct tegra_dc* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_2,
     struct drm_plane_state *VAR_3)
{
 struct tegra_dc *VAR_4;
 u32 VAR_5;


 if (!VAR_3 || !VAR_3->crtc)
  return;

 VAR_4 = FUNC_2(VAR_3->crtc);

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_5 &= ~VAR_0;
 FUNC_1(VAR_4, VAR_5, VAR_1);
}

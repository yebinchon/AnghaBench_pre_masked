
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_plane {int dummy; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_plane*,int ) ;
 int FUNC_1 (struct tegra_plane*,int ,int ) ;
 struct tegra_plane* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_2,
           struct drm_plane_state *VAR_3)
{
 struct tegra_plane *VAR_4 = FUNC_2(VAR_2);
 u32 VAR_5;


 if (!VAR_3 || !VAR_3->crtc)
  return;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_5 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_5, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_plane {int index; } ;
struct tegra_dc_state {int planes; } ;
struct drm_plane_state {int crtc; int state; } ;
struct drm_crtc_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 int VAR_1 ;
 struct drm_crtc_state* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;
 struct tegra_dc_state* FUNC_4 (struct drm_crtc_state*) ;

int FUNC_5(struct tegra_plane *VAR_2,
     struct drm_plane_state *VAR_3)
{
 struct drm_crtc_state *VAR_4;
 struct tegra_dc_state *VAR_5;
 int VAR_6;


 VAR_4 = FUNC_2(VAR_3->state, VAR_3->crtc);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 VAR_6 = FUNC_3(VAR_3, VAR_4,
        0, VAR_0, 1, 1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_4(VAR_4);

 VAR_5->planes |= VAR_1 << VAR_2->index;

 return 0;
}

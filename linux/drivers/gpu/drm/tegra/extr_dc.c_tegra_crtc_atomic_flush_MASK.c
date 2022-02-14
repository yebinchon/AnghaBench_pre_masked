
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dc_state {int planes; } ;
struct tegra_dc {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_dc*,int ) ;
 int FUNC_1 (struct tegra_dc*,int,int ) ;
 struct tegra_dc_state* FUNC_2 (int ) ;
 struct tegra_dc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_3,
        struct drm_crtc_state *VAR_4)
{
 struct tegra_dc_state *VAR_5 = FUNC_2(VAR_3->state);
 struct tegra_dc *VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7;

 VAR_7 = VAR_5->planes << 8 | VAR_2;
 FUNC_1(VAR_6, VAR_7, VAR_0);
 VAR_7 = FUNC_0(VAR_6, VAR_0);

 VAR_7 = VAR_5->planes | VAR_1;
 FUNC_1(VAR_6, VAR_7, VAR_0);
 VAR_7 = FUNC_0(VAR_6, VAR_0);
}

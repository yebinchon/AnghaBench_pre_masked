
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dc {int dummy; } ;
struct tegra_bo {int paddr; } ;
struct drm_plane_state {int crtc_w; int crtc_y; int crtc_x; int crtc_h; int fb; int crtc; } ;
struct drm_plane {struct drm_plane_state* state; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (struct tegra_dc*,int ) ;
 int FUNC_2 (struct tegra_dc*,int,int ) ;
 struct tegra_bo* FUNC_3 (int ,int ) ;
 struct tegra_dc* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_17,
           struct drm_plane_state *VAR_18)
{
 struct tegra_bo *VAR_19 = FUNC_3(VAR_17->state->fb, 0);
 struct tegra_dc *VAR_20 = FUNC_4(VAR_17->state->crtc);
 struct drm_plane_state *VAR_21 = VAR_17->state;
 u32 VAR_22 = VAR_1;


 if (!VAR_17->state->crtc || !VAR_17->state->fb)
  return;

 switch (VAR_21->crtc_w) {
 case 32:
  VAR_22 |= VAR_8;
  break;

 case 64:
  VAR_22 |= VAR_9;
  break;

 case 128:
  VAR_22 |= VAR_6;
  break;

 case 256:
  VAR_22 |= VAR_7;
  break;

 default:
  FUNC_0(1, "cursor size %ux%u not supported\n", VAR_21->crtc_w,
       VAR_21->crtc_h);
  return;
 }

 VAR_22 |= (VAR_19->paddr >> 10) & 0x3fffff;
 FUNC_2(VAR_20, VAR_22, VAR_14);







 VAR_22 = FUNC_1(VAR_20, VAR_16);
 VAR_22 |= VAR_4;
 FUNC_2(VAR_20, VAR_22, VAR_16);

 VAR_22 = FUNC_1(VAR_20, VAR_12);
 VAR_22 &= ~VAR_2;
 VAR_22 &= ~VAR_11;
 VAR_22 |= VAR_5;
 VAR_22 |= VAR_3;
 VAR_22 |= VAR_10;
 VAR_22 |= VAR_0;
 FUNC_2(VAR_20, VAR_22, VAR_12);


 VAR_22 = (VAR_21->crtc_y & 0x3fff) << 16 | (VAR_21->crtc_x & 0x3fff);
 FUNC_2(VAR_20, VAR_22, VAR_13);
}

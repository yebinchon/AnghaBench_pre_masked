
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {unsigned long value; int mode; } ;
struct tegra_plane_state {int format; TYPE_2__ tiling; } ;
struct tegra_plane {int dummy; } ;
struct tegra_dc {int dev; TYPE_1__* soc; } ;
struct tegra_bo {int paddr; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_3__* state; } ;
struct drm_framebuffer {int * pitches; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {unsigned int normalized_zpos; int src_y; int src_x; int crtc_w; int crtc_h; int crtc_x; int crtc_y; int visible; struct drm_framebuffer* fb; int crtc; } ;
struct TYPE_4__ {scalar_t__ supports_block_linear; } ;


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
 int FUNC_0 (unsigned long) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;



 int VAR_35 ;
 int VAR_36 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int VAR_37 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct tegra_dc*,struct tegra_plane*) ;
 struct tegra_bo* FUNC_15 (struct drm_framebuffer*,int ) ;
 int FUNC_16 (struct tegra_plane*,int ) ;
 int FUNC_17 (struct tegra_plane*,int,int ) ;
 int FUNC_18 (struct drm_plane*,struct drm_plane_state*) ;
 struct tegra_dc* FUNC_19 (int ) ;
 struct tegra_plane* FUNC_20 (struct drm_plane*) ;
 struct tegra_plane_state* FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static void FUNC_23(struct drm_plane *VAR_38,
          struct drm_plane_state *VAR_39)
{
 struct tegra_plane_state *VAR_40 = FUNC_21(VAR_38->state);
 struct tegra_dc *VAR_41 = FUNC_19(VAR_38->state->crtc);
 unsigned int VAR_42 = VAR_38->state->normalized_zpos;
 struct drm_framebuffer *VAR_43 = VAR_38->state->fb;
 struct tegra_plane *VAR_44 = FUNC_20(VAR_38);
 struct tegra_bo *VAR_45;
 dma_addr_t VAR_46;
 u32 VAR_47;


 if (!VAR_38->state->crtc || !VAR_38->state->fb)
  return;

 if (!VAR_38->state->visible) {
  FUNC_18(VAR_38, VAR_39);
  return;
 }

 FUNC_12(VAR_41->dev);

 FUNC_14(VAR_41, VAR_44);

 FUNC_17(VAR_44, VAR_35, VAR_19);


 VAR_47 = VAR_0 | VAR_2 |
  VAR_1 |
  VAR_3;
 FUNC_17(VAR_44, VAR_47, VAR_16);

 VAR_47 = VAR_0 | VAR_2 |
  VAR_1 |
  VAR_3;
 FUNC_17(VAR_44, VAR_47, VAR_17);

 VAR_47 = FUNC_4(255) | FUNC_3(255) | FUNC_10(255 - VAR_42);
 FUNC_17(VAR_44, VAR_47, VAR_15);


 VAR_47 = VAR_31 | VAR_36;
 FUNC_17(VAR_44, VAR_47, VAR_26);

 VAR_47 = VAR_34 | VAR_33;
 FUNC_17(VAR_44, VAR_47, VAR_27);


 FUNC_17(VAR_44, 0, VAR_7);

 VAR_45 = FUNC_15(VAR_43, 0);
 VAR_46 = VAR_45->paddr;

 FUNC_17(VAR_44, VAR_40->format, VAR_18);
 FUNC_17(VAR_44, 0, VAR_23);

 VAR_47 = FUNC_8(VAR_38->state->crtc_y) |
  FUNC_1(VAR_38->state->crtc_x);
 FUNC_17(VAR_44, VAR_47, VAR_22);

 VAR_47 = FUNC_9(VAR_38->state->crtc_h) | FUNC_2(VAR_38->state->crtc_w);
 FUNC_17(VAR_44, VAR_47, VAR_25);

 VAR_47 = VAR_37 | VAR_5;
 FUNC_17(VAR_44, VAR_47, VAR_29);

 VAR_47 = FUNC_9(VAR_38->state->crtc_h) | FUNC_2(VAR_38->state->crtc_w);
 FUNC_17(VAR_44, VAR_47, VAR_20);

 FUNC_17(VAR_44, FUNC_22(VAR_46), VAR_10);
 FUNC_17(VAR_44, FUNC_11(VAR_46), VAR_9);

 VAR_47 = FUNC_7(VAR_43->pitches[0]);
 FUNC_17(VAR_44, VAR_47, VAR_21);

 VAR_47 = VAR_4 | VAR_30 | VAR_32;
 FUNC_17(VAR_44, VAR_47, VAR_24);

 VAR_47 = FUNC_5(VAR_38->state->src_y >> 16) |
  FUNC_6(VAR_38->state->src_x >> 16);
 FUNC_17(VAR_44, VAR_47, VAR_8);

 if (VAR_41->soc->supports_block_linear) {
  unsigned long VAR_48 = VAR_40->tiling.value;


  switch (VAR_40->tiling.mode) {
  case 129:
   VAR_47 = FUNC_0(0) |
    VAR_13;
   break;


  case 128:
   VAR_47 = VAR_14;
   break;

  case 130:
   VAR_47 = FUNC_0(VAR_48) |
    VAR_12;
   break;
  }

  FUNC_17(VAR_44, VAR_47, VAR_11);
 }


 VAR_47 = FUNC_16(VAR_44, VAR_28);
 VAR_47 &= ~VAR_6;
 FUNC_17(VAR_44, VAR_47, VAR_28);

 FUNC_13(VAR_41->dev);
}

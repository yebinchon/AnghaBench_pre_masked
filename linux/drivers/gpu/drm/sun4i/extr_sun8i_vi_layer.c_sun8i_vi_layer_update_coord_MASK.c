
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_12__ {int regs; } ;
struct sun8i_mixer {TYPE_5__ engine; TYPE_4__* cfg; int mod_clk; } ;
struct TYPE_13__ {int x1; int y1; } ;
struct drm_plane_state {TYPE_6__ dst; TYPE_3__* crtc; TYPE_6__ src; TYPE_1__* fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_format_info {int hsub; int vsub; } ;
struct drm_display_mode {int clock; int vtotal; int htotal; int vdisplay; } ;
struct TYPE_11__ {int scanline_yuv; } ;
struct TYPE_10__ {TYPE_2__* state; } ;
struct TYPE_9__ {struct drm_display_mode mode; } ;
struct TYPE_8__ {struct drm_format_info* format; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (struct sun8i_mixer*) ;
 int FUNC_20 (struct sun8i_mixer*,int) ;
 int FUNC_21 (struct sun8i_mixer*,int,int) ;
 int FUNC_22 (struct sun8i_mixer*,int,int,int,int,int,int,int,int,int,struct drm_format_info const*) ;

__attribute__((used)) static int FUNC_23(struct sun8i_mixer *VAR_0, int VAR_1,
           int VAR_2, struct drm_plane *VAR_3,
           unsigned int VAR_4)
{
 struct drm_plane_state *VAR_5 = VAR_3->state;
 const struct drm_format_info *VAR_6 = VAR_5->fb->format;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15, VAR_16;
 u32 VAR_17 = 0, VAR_18 = 0;
 u32 VAR_19 = 0, VAR_20 = 0;
 bool VAR_21;

 FUNC_0("Updating VI channel %d overlay %d\n",
    VAR_1, VAR_2);

 VAR_11 = FUNC_19(VAR_0);
 VAR_12 = FUNC_20(VAR_0, VAR_1);

 VAR_7 = FUNC_16(&VAR_5->src) >> 16;
 VAR_8 = FUNC_15(&VAR_5->src) >> 16;
 VAR_9 = FUNC_16(&VAR_5->dst);
 VAR_10 = FUNC_15(&VAR_5->dst);

 VAR_15 = VAR_5->src.x1 & 0xffff;
 VAR_16 = VAR_5->src.y1 & 0xffff;


 if (VAR_6->hsub > 1) {
  int VAR_22, VAR_23;

  VAR_22 = VAR_6->hsub - 1;
  VAR_23 = (VAR_5->src.x1 >> 16) & VAR_22;
  VAR_7 = (VAR_7 + VAR_23) & ~VAR_22;
  VAR_15 += VAR_23 << 16;
 }

 if (VAR_6->vsub > 1) {
  int VAR_24, VAR_25;

  VAR_24 = VAR_6->vsub - 1;
  VAR_25 = (VAR_5->src.y1 >> 16) & VAR_24;
  VAR_8 = (VAR_8 + VAR_25) & ~VAR_24;
  VAR_16 += VAR_25 << 16;
 }

 VAR_14 = FUNC_12(VAR_7, VAR_8);
 VAR_13 = FUNC_12(VAR_9, VAR_10);


 FUNC_0("Layer source offset X: %d Y: %d\n",
    (VAR_5->src.x1 >> 16) & ~(VAR_6->hsub - 1),
    (VAR_5->src.y1 >> 16) & ~(VAR_6->vsub - 1));
 FUNC_0("Layer source size W: %d H: %d\n", VAR_7, VAR_8);
 FUNC_18(VAR_0->engine.regs,
       FUNC_7(VAR_12, VAR_2),
       VAR_14);
 FUNC_18(VAR_0->engine.regs,
       FUNC_8(VAR_12),
       VAR_14);





 VAR_21 = VAR_6->hsub > 1 || VAR_6->vsub > 1;

 if (VAR_14 != VAR_13 || VAR_21 || VAR_15 || VAR_16) {
  unsigned int VAR_26, VAR_27;
  struct drm_display_mode *VAR_28;
  u32 VAR_29, VAR_30, VAR_31;
  u64 VAR_32;

  FUNC_0("HW scaling is enabled\n");

  VAR_28 = &VAR_3->state->crtc->state->mode;
  VAR_31 = (VAR_28->clock * 1000) / (VAR_28->vtotal * VAR_28->htotal);
  VAR_32 = FUNC_13(VAR_0->mod_clk);

  VAR_32 *= 80;
  FUNC_14(VAR_32, VAR_28->vdisplay * VAR_31 * FUNC_17(VAR_7, VAR_9));

  VAR_27 = VAR_8 * 100 / VAR_10;

  if (VAR_32 < VAR_27) {
   FUNC_0("Using vertical coarse scaling\n");
   VAR_20 = VAR_8;
   VAR_19 = (u32)VAR_32 * VAR_10 / 100;
   VAR_8 = VAR_19;
  }


  VAR_26 = VAR_21 ? VAR_0->cfg->scanline_yuv : 2048;

  if (VAR_7 > VAR_26) {
   FUNC_0("Using horizontal coarse scaling\n");
   VAR_18 = VAR_7;
   VAR_17 = VAR_26;
   VAR_7 = VAR_17;
  }

  VAR_29 = (VAR_7 << 16) / VAR_9;
  VAR_30 = (VAR_8 << 16) / VAR_10;

  FUNC_22(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9,
          VAR_10, VAR_29, VAR_30, VAR_15, VAR_16,
          VAR_6);
  FUNC_21(VAR_0, VAR_1, 1);
 } else {
  FUNC_0("HW scaling is not needed\n");
  FUNC_21(VAR_0, VAR_1, 0);
 }

 FUNC_18(VAR_0->engine.regs,
       FUNC_6(VAR_12),
       FUNC_4(VAR_17) |
       FUNC_3(VAR_18));
 FUNC_18(VAR_0->engine.regs,
       FUNC_5(VAR_12),
       FUNC_4(VAR_17) |
       FUNC_3(VAR_18));
 FUNC_18(VAR_0->engine.regs,
       FUNC_10(VAR_12),
       FUNC_4(VAR_19) |
       FUNC_3(VAR_20));
 FUNC_18(VAR_0->engine.regs,
       FUNC_9(VAR_12),
       FUNC_4(VAR_19) |
       FUNC_3(VAR_20));


 FUNC_0("Layer destination coordinates X: %d Y: %d\n",
    VAR_5->dst.x1, VAR_5->dst.y1);
 FUNC_0("Layer destination size W: %d H: %d\n", VAR_9, VAR_10);
 FUNC_18(VAR_0->engine.regs,
       FUNC_1(VAR_11, VAR_4),
       FUNC_11(VAR_5->dst.x1, VAR_5->dst.y1));
 FUNC_18(VAR_0->engine.regs,
       FUNC_2(VAR_11, VAR_4),
       VAR_13);

 return 0;
}

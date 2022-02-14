
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_10__ {int regs; } ;
struct sun8i_mixer {TYPE_4__ engine; } ;
struct TYPE_11__ {int x1; int y1; } ;
struct drm_plane_state {scalar_t__ src_w; scalar_t__ crtc_w; scalar_t__ src_h; scalar_t__ crtc_h; TYPE_5__ dst; TYPE_5__ src; TYPE_3__* crtc; } ;
struct drm_plane {scalar_t__ type; struct drm_plane_state* state; } ;
struct TYPE_9__ {TYPE_2__* state; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ adjusted_mode; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (struct sun8i_mixer*) ;
 scalar_t__ FUNC_14 (struct sun8i_mixer*,int) ;
 int FUNC_15 (struct sun8i_mixer*,int,int) ;
 int FUNC_16 (struct sun8i_mixer*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct sun8i_mixer *VAR_4, int VAR_5,
           int VAR_6, struct drm_plane *VAR_7,
           unsigned int VAR_8)
{
 struct drm_plane_state *VAR_9 = VAR_7->state;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 u32 VAR_18, VAR_19;

 FUNC_0("Updating UI channel %d overlay %d\n",
    VAR_5, VAR_6);

 VAR_14 = FUNC_13(VAR_4);
 VAR_15 = FUNC_14(VAR_4, VAR_5);

 VAR_10 = FUNC_10(&VAR_9->src) >> 16;
 VAR_11 = FUNC_9(&VAR_9->src) >> 16;
 VAR_12 = FUNC_10(&VAR_9->dst);
 VAR_13 = FUNC_9(&VAR_9->dst);

 VAR_18 = VAR_9->src.x1 & 0xffff;
 VAR_19 = VAR_9->src.y1 & 0xffff;

 VAR_17 = FUNC_8(VAR_10, VAR_11);
 VAR_16 = FUNC_8(VAR_12, VAR_13);

 if (VAR_7->type == VAR_1) {
  bool VAR_20 = 0;
  u32 VAR_21;

  FUNC_0("Primary layer, updating global size W: %u H: %u\n",
     VAR_12, VAR_13);
  FUNC_12(VAR_4->engine.regs,
        VAR_3,
        VAR_16);
  FUNC_12(VAR_4->engine.regs,
        FUNC_4(VAR_14), VAR_16);

  if (VAR_9->crtc)
   VAR_20 = VAR_9->crtc->state->adjusted_mode.flags
    & VAR_0;

  if (VAR_20)
   VAR_21 = VAR_2;
  else
   VAR_21 = 0;

  FUNC_11(VAR_4->engine.regs,
       FUNC_3(VAR_14),
       VAR_2,
       VAR_21);

  FUNC_0("Switching display mixer interlaced mode %s\n",
     VAR_20 ? "on" : "off");
 }


 FUNC_0("Layer source offset X: %d Y: %d\n",
    VAR_9->src.x1 >> 16, VAR_9->src.y1 >> 16);
 FUNC_0("Layer source size W: %d H: %d\n", VAR_10, VAR_11);
 FUNC_12(VAR_4->engine.regs,
       FUNC_5(VAR_15, VAR_6),
       VAR_17);
 FUNC_12(VAR_4->engine.regs,
       FUNC_6(VAR_15),
       VAR_17);

 if (VAR_17 != VAR_16 || VAR_18 || VAR_19) {
  u32 VAR_22, VAR_23;

  FUNC_0("HW scaling is enabled\n");

  VAR_22 = VAR_9->src_w / VAR_9->crtc_w;
  VAR_23 = VAR_9->src_h / VAR_9->crtc_h;

  FUNC_16(VAR_4, VAR_5, VAR_10, VAR_11, VAR_12,
          VAR_13, VAR_22, VAR_23, VAR_18, VAR_19);
  FUNC_15(VAR_4, VAR_5, 1);
 } else {
  FUNC_0("HW scaling is not needed\n");
  FUNC_15(VAR_4, VAR_5, 0);
 }


 FUNC_0("Layer destination coordinates X: %d Y: %d\n",
    VAR_9->dst.x1, VAR_9->dst.y1);
 FUNC_0("Layer destination size W: %d H: %d\n", VAR_12, VAR_13);
 FUNC_12(VAR_4->engine.regs,
       FUNC_1(VAR_14, VAR_8),
       FUNC_7(VAR_9->dst.x1, VAR_9->dst.y1));
 FUNC_12(VAR_4->engine.regs,
       FUNC_2(VAR_14, VAR_8),
       VAR_16);

 return 0;
}

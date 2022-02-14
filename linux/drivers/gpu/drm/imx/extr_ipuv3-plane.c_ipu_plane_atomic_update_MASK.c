
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ipu_plane_state {scalar_t__ use_pre; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct ipu_plane {int dp_flow; int ipu_ch; TYPE_2__ base; int alpha_ch; int dmfc; int dp; int dma; } ;
struct drm_rect {int x1; int y1; } ;
struct drm_plane_state {int normalized_zpos; struct drm_rect src; struct drm_framebuffer* fb; struct drm_rect dst; TYPE_3__* crtc; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_framebuffer {int * pitches; TYPE_4__* format; int modifier; } ;
struct drm_format_info {int * cpp; } ;
struct drm_crtc_state {int dummy; } ;
typedef enum ipu_color_space { ____Placeholder_ipu_color_space } ipu_color_space ;
struct TYPE_8__ {int const format; int has_alpha; } ;
struct TYPE_7__ {struct drm_crtc_state* state; } ;
struct TYPE_5__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,unsigned long,int,int,...) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 struct drm_format_info* FUNC_2 (int) ;
 unsigned long FUNC_3 (struct drm_plane_state*,int) ;
 unsigned long FUNC_4 (struct drm_plane_state*) ;
 unsigned long FUNC_5 (struct drm_plane_state*) ;
 int FUNC_6 (struct drm_rect*) ;
 int FUNC_7 (struct drm_rect*) ;
 int FUNC_8 (int,int ,int ,int*,int*) ;
 unsigned int FUNC_9 (int ) ;
 int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (int ,int,unsigned long) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,unsigned long,unsigned long) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int,int,int) ;
 int FUNC_22 (int ,int,int) ;
 int FUNC_23 (int ,int,int ) ;
 int FUNC_24 (int const) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ,int) ;
 int FUNC_28 (int ,int) ;
 int FUNC_29 (int ,int) ;
 int FUNC_30 (struct ipu_plane*) ;
 scalar_t__ FUNC_31 (struct ipu_plane*) ;
 int FUNC_32 (int ,unsigned int,int,int,int ,int const,int ,unsigned long*) ;
 int FUNC_33 (unsigned long,unsigned long) ;
 struct ipu_plane* FUNC_34 (struct drm_plane*) ;
 struct ipu_plane_state* FUNC_35 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_36(struct drm_plane *VAR_2,
        struct drm_plane_state *VAR_3)
{
 struct ipu_plane *VAR_4 = FUNC_34(VAR_2);
 struct drm_plane_state *VAR_5 = VAR_2->state;
 struct ipu_plane_state *VAR_6 = FUNC_35(VAR_5);
 struct drm_crtc_state *VAR_7 = VAR_5->crtc->state;
 struct drm_framebuffer *VAR_8 = VAR_5->fb;
 struct drm_rect *VAR_9 = &VAR_5->dst;
 unsigned long VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = 0;
 enum ipu_color_space VAR_14;
 unsigned int VAR_15 = 0;
 const struct drm_format_info *VAR_16;
 u8 VAR_17, VAR_18;
 u32 VAR_19, VAR_20;
 int VAR_21;

 if (VAR_4->dp_flow == 128)
  FUNC_22(VAR_4->dp, VAR_9->x1, VAR_9->y1);

 switch (VAR_4->dp_flow) {
 case 129:
  if (VAR_5->normalized_zpos == 1) {
   FUNC_21(VAR_4->dp,
      !VAR_8->format->has_alpha, 0xff,
      1);
  } else {
   FUNC_21(VAR_4->dp, 1, 0, 1);
  }
  break;
 case 128:
  if (VAR_5->normalized_zpos == 1) {
   FUNC_21(VAR_4->dp,
      !VAR_8->format->has_alpha, 0xff,
      0);
  }
  break;
 }

 VAR_10 = FUNC_3(VAR_5, 0);





 if (VAR_6->use_pre) {
  VAR_15 = FUNC_9(VAR_4->dma);
  FUNC_32(VAR_4->ipu_ch, VAR_15,
       FUNC_7(&VAR_5->src) >> 16,
       FUNC_6(&VAR_5->src) >> 16,
       VAR_8->pitches[0], VAR_8->format->format,
       VAR_8->modifier, &VAR_10);
 }

 if (VAR_3->fb && !FUNC_1(VAR_7)) {

  if (VAR_6->use_pre)
   return;
  VAR_21 = FUNC_26(VAR_4->ipu_ch);
  FUNC_11(VAR_4->ipu_ch, !VAR_21, VAR_10);
  FUNC_28(VAR_4->ipu_ch, !VAR_21);
  if (FUNC_31(VAR_4)) {
   VAR_21 = FUNC_26(VAR_4->alpha_ch);
   FUNC_11(VAR_4->alpha_ch, !VAR_21,
          VAR_13);
   FUNC_28(VAR_4->alpha_ch, !VAR_21);
  }
  return;
 }

 VAR_14 = FUNC_24(VAR_8->format->format);
 switch (VAR_4->dp_flow) {
 case 129:
  FUNC_23(VAR_4->dp, VAR_14, VAR_0);
  break;
 case 128:
  FUNC_23(VAR_4->dp, VAR_14,
     VAR_1);
  break;
 }

 FUNC_20(VAR_4->dmfc, FUNC_7(VAR_9));

 VAR_19 = FUNC_7(&VAR_5->src) >> 16;
 VAR_20 = FUNC_6(&VAR_5->src) >> 16;
 VAR_16 = FUNC_2(VAR_8->format->format);
 FUNC_8(VAR_19, VAR_16->cpp[0], VAR_8->pitches[0],
        &VAR_17, &VAR_18);

 FUNC_19(VAR_4->ipu_ch);
 FUNC_16(VAR_4->ipu_ch, VAR_19, VAR_20);
 FUNC_13(VAR_4->ipu_ch, VAR_8->format->format);
 FUNC_12(VAR_4->ipu_ch, VAR_17);
 FUNC_15(VAR_4->ipu_ch);
 FUNC_25(VAR_4->ipu_ch, 1);
 FUNC_29(VAR_4->ipu_ch, 1);
 FUNC_17(VAR_4->ipu_ch, VAR_8->pitches[0]);
 FUNC_10(VAR_4->ipu_ch, VAR_15);

 switch (VAR_8->format->format) {
 case 135:
 case 132:
 case 134:
 case 131:
 case 133:
 case 130:
  VAR_11 = FUNC_4(VAR_5);
  VAR_12 = FUNC_5(VAR_5);
  if (VAR_8->format->format == 132 ||
      VAR_8->format->format == 131 ||
      VAR_8->format->format == 130)
   FUNC_33(VAR_11, VAR_12);

  FUNC_18(VAR_4->ipu_ch,
           VAR_8->pitches[1], VAR_11, VAR_12);

  FUNC_0(VAR_4->base.dev->dev,
   "phy = %lu %lu %lu, x = %d, y = %d", VAR_10, VAR_11, VAR_12,
   VAR_5->src.x1 >> 16, VAR_5->src.y1 >> 16);
  break;
 case 140:
 case 139:
  VAR_11 = FUNC_4(VAR_5);

  FUNC_18(VAR_4->ipu_ch,
           VAR_8->pitches[1], VAR_11, VAR_11);

  FUNC_0(VAR_4->base.dev->dev,
   "phy = %lu %lu, x = %d, y = %d", VAR_10, VAR_11,
   VAR_5->src.x1 >> 16, VAR_5->src.y1 >> 16);
  break;
 case 138:
 case 143:
 case 137:
 case 142:
 case 136:
 case 141:
  VAR_13 = FUNC_3(VAR_5, 1);
  VAR_18 = 0;

  FUNC_0(VAR_4->base.dev->dev, "phys = %lu %lu, x = %d, y = %d",
   VAR_10, VAR_13, VAR_5->src.x1 >> 16, VAR_5->src.y1 >> 16);

  FUNC_12(VAR_4->ipu_ch, 16);

  FUNC_19(VAR_4->alpha_ch);
  FUNC_16(VAR_4->alpha_ch,
      FUNC_7(&VAR_5->src) >> 16,
      FUNC_6(&VAR_5->src) >> 16);
  FUNC_14(VAR_4->alpha_ch, 8);
  FUNC_15(VAR_4->alpha_ch);
  FUNC_29(VAR_4->alpha_ch, 1);
  FUNC_17(VAR_4->alpha_ch, VAR_8->pitches[1]);
  FUNC_12(VAR_4->alpha_ch, 16);
  FUNC_11(VAR_4->alpha_ch, 0, VAR_13);
  FUNC_11(VAR_4->alpha_ch, 1, VAR_13);
  break;
 default:
  FUNC_0(VAR_4->base.dev->dev, "phys = %lu, x = %d, y = %d",
   VAR_10, VAR_5->src.x1 >> 16, VAR_5->src.y1 >> 16);
  break;
 }
 FUNC_11(VAR_4->ipu_ch, 0, VAR_10);
 FUNC_11(VAR_4->ipu_ch, 1, VAR_10);
 FUNC_27(VAR_4->ipu_ch, VAR_18);
 FUNC_30(VAR_4);
}

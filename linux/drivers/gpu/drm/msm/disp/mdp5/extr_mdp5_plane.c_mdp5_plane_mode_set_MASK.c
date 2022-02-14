
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {int member_0; } ;
struct pixel_ext {int bottom; int top; int right; int left; TYPE_2__ member_0; } ;
struct TYPE_8__ {int member_0; } ;
struct phase_step {int y; int x; TYPE_1__ member_0; } ;
struct TYPE_11__ {scalar_t__ pixel_format; } ;
struct mdp_format {TYPE_4__ base; } ;
struct mdp5_kms {int dummy; } ;
struct mdp5_hw_pipe {int pipe; int caps; } ;
struct drm_rect {scalar_t__ x1; scalar_t__ y1; } ;
struct drm_plane_state {int rotation; } ;
struct drm_plane {int name; struct drm_plane_state* state; } ;
struct TYPE_12__ {int id; } ;
struct drm_framebuffer {TYPE_5__ base; int height; int width; TYPE_3__* format; } ;
struct TYPE_13__ {int id; } ;
struct drm_crtc {TYPE_6__ base; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;
struct TYPE_14__ {struct mdp5_hw_pipe* r_hwpipe; struct mdp5_hw_pipe* hwpipe; } ;
struct TYPE_10__ {scalar_t__ num_planes; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mdp_format const*,scalar_t__,unsigned int,int ,int ,int ,int) ;
 int FUNC_3 (struct drm_plane*,scalar_t__,scalar_t__,unsigned int,int ) ;
 int FUNC_4 (struct drm_plane*,scalar_t__,scalar_t__,unsigned int,int ) ;
 void* FUNC_5 (struct drm_rect*) ;
 void* FUNC_6 (struct drm_rect*) ;
 unsigned int FUNC_7 (int ,unsigned int) ;
 struct mdp5_kms* FUNC_8 (struct drm_plane*) ;
 scalar_t__ FUNC_9 (struct mdp_format const*,scalar_t__,unsigned int,int) ;
 int FUNC_10 (struct mdp5_kms*,struct mdp5_hw_pipe*,struct drm_framebuffer*,struct phase_step*,struct pixel_ext*,scalar_t__,scalar_t__,scalar_t__,int,int,int,int,unsigned int,unsigned int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (struct drm_framebuffer*) ;
 scalar_t__ FUNC_13 (int) ;
 TYPE_7__* FUNC_14 (struct drm_plane_state*) ;
 struct mdp_format* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct drm_plane *VAR_5,
  struct drm_crtc *VAR_6, struct drm_framebuffer *VAR_7,
  struct drm_rect *VAR_8, struct drm_rect *VAR_9)
{
 struct drm_plane_state *VAR_10 = VAR_5->state;
 struct mdp5_hw_pipe *VAR_11 = FUNC_14(VAR_10)->hwpipe;
 struct mdp5_kms *VAR_12 = FUNC_8(VAR_5);
 enum mdp5_pipe VAR_13 = VAR_11->pipe;
 struct mdp5_hw_pipe *VAR_14;
 const struct mdp_format *VAR_15;
 uint32_t VAR_16, VAR_17 = 0;
 struct phase_step VAR_18 = { 0 };
 struct pixel_ext VAR_19 = { 0 };
 uint32_t VAR_20 = 0, VAR_21 = 0;
 uint32_t VAR_22;
 unsigned int VAR_23;
 bool VAR_24, VAR_25;
 int VAR_26, VAR_27;
 unsigned int VAR_28, VAR_29;
 uint32_t VAR_30, VAR_31;
 uint32_t VAR_32, VAR_33;
 uint32_t VAR_34, VAR_35;
 int VAR_36;

 VAR_16 = VAR_7->format->num_planes;


 if (FUNC_1(VAR_16 > FUNC_13(VAR_13)))
  return -VAR_3;

 VAR_15 = FUNC_15(FUNC_12(VAR_7));
 VAR_22 = VAR_15->base.pixel_format;

 VAR_30 = VAR_8->x1;
 VAR_31 = VAR_8->y1;
 VAR_32 = FUNC_6(VAR_8);
 VAR_33 = FUNC_5(VAR_8);

 VAR_26 = VAR_9->x1;
 VAR_27 = VAR_9->y1;
 VAR_28 = FUNC_6(VAR_9);
 VAR_29 = FUNC_5(VAR_9);


 VAR_30 = VAR_30 >> 16;
 VAR_31 = VAR_31 >> 16;
 VAR_32 = VAR_32 >> 16;
 VAR_33 = VAR_33 >> 16;

 VAR_34 = FUNC_11(VAR_7->width, VAR_32);
 VAR_35 = FUNC_11(VAR_7->height, VAR_33);

 FUNC_0("%s: FB[%u] %u,%u,%u,%u -> CRTC[%u] %d,%d,%u,%u", VAR_5->name,
   VAR_7->base.id, VAR_30, VAR_31, VAR_32, VAR_33,
   VAR_6->base.id, VAR_26, VAR_27, VAR_28, VAR_29);

 VAR_14 = FUNC_14(VAR_10)->r_hwpipe;
 if (VAR_14) {





  VAR_28 /= 2;
  VAR_32 /= 2;
  VAR_34 /= 2;
 }

 VAR_36 = FUNC_3(VAR_5, VAR_22, VAR_32, VAR_28, VAR_18.x);
 if (VAR_36)
  return VAR_36;

 VAR_36 = FUNC_4(VAR_5, VAR_22, VAR_33, VAR_29, VAR_18.y);
 if (VAR_36)
  return VAR_36;

 if (VAR_11->caps & VAR_4) {
  FUNC_2(VAR_15, VAR_32, VAR_28, VAR_18.x,
          VAR_19.left, VAR_19.right, 1);
  FUNC_2(VAR_15, VAR_33, VAR_29, VAR_18.y,
          VAR_19.top, VAR_19.bottom, 0);
 }




 VAR_17 |= FUNC_9(VAR_15, VAR_32, VAR_28, 1);
 VAR_17 |= FUNC_9(VAR_15, VAR_33, VAR_29, 0);
 FUNC_0("scale config = %x", VAR_17);

 VAR_23 = FUNC_7(VAR_10->rotation,
      VAR_2 |
      VAR_0 |
      VAR_1);
 VAR_25 = !!(VAR_23 & VAR_0);
 VAR_24 = !!(VAR_23 & VAR_1);

 FUNC_10(VAR_12, VAR_11, VAR_7, &VAR_18, &VAR_19,
        VAR_17, VAR_20, VAR_21, VAR_25, VAR_24,
        VAR_26, VAR_27, VAR_28, VAR_29,
        VAR_34, VAR_35,
        VAR_30, VAR_31, VAR_32, VAR_33);
 if (VAR_14)
  FUNC_10(VAR_12, VAR_14, VAR_7, &VAR_18, &VAR_19,
         VAR_17, VAR_20, VAR_21, VAR_25, VAR_24,
         VAR_26 + VAR_28, VAR_27, VAR_28, VAR_29,
         VAR_34, VAR_35,
         VAR_30 + VAR_32, VAR_31, VAR_32, VAR_33);

 return VAR_36;
}

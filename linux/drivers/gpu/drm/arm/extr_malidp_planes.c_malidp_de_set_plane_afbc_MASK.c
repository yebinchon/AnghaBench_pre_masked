
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct malidp_plane {TYPE_2__* layer; int hwdev; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_framebuffer {int modifier; int width; int height; } ;
struct TYPE_4__ {scalar_t__ afbc_decoder_offset; } ;
struct TYPE_3__ {int src_w; int src_h; int src_x; int src_y; struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,scalar_t__) ;
 struct malidp_plane* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_9)
{
 struct malidp_plane *VAR_10;
 u32 VAR_11, VAR_12, VAR_13 = 0, VAR_14, VAR_15;
 struct drm_framebuffer *VAR_16 = VAR_9->state->fb;

 VAR_10 = FUNC_1(VAR_9);


 if (!VAR_10->layer->afbc_decoder_offset)
  return;

 if (!VAR_16->modifier) {
  FUNC_0(VAR_10->hwdev, 0, VAR_10->layer->afbc_decoder_offset);
  return;
 }


 VAR_11 = VAR_9->state->src_w >> 16;
 VAR_12 = VAR_9->state->src_h >> 16;
 VAR_14 = VAR_9->state->src_x >> 16;
 VAR_15 = VAR_9->state->src_y >> 16;

 VAR_13 = ((VAR_16->width - (VAR_14 + VAR_11)) << VAR_5) |
     VAR_14;
 FUNC_0(VAR_10->hwdev, VAR_13,
   VAR_10->layer->afbc_decoder_offset + VAR_4);

 VAR_13 = ((VAR_16->height - (VAR_15 + VAR_12)) << VAR_3) |
     VAR_15;
 FUNC_0(VAR_10->hwdev, VAR_13,
   VAR_10->layer->afbc_decoder_offset + VAR_6);

 VAR_13 = VAR_7;
 if (VAR_16->modifier & VAR_0)
  VAR_13 |= VAR_2;
 if (VAR_16->modifier & VAR_1)
  VAR_13 |= VAR_8;

 FUNC_0(VAR_10->hwdev, VAR_13, VAR_10->layer->afbc_decoder_offset);
}

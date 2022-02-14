
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_overlay {TYPE_1__* crtc; } ;
struct intel_crtc_state {scalar_t__ pipe_src_w; scalar_t__ pipe_src_h; } ;
struct drm_intel_overlay_put_image {scalar_t__ dst_x; scalar_t__ dst_width; scalar_t__ dst_y; scalar_t__ dst_height; } ;
struct TYPE_2__ {struct intel_crtc_state* config; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct intel_overlay *VAR_1,
        struct drm_intel_overlay_put_image *VAR_2)
{
 const struct intel_crtc_state *VAR_3 =
  VAR_1->crtc->config;

 if (VAR_2->dst_x < VAR_3->pipe_src_w &&
     VAR_2->dst_x + VAR_2->dst_width <= VAR_3->pipe_src_w &&
     VAR_2->dst_y < VAR_3->pipe_src_h &&
     VAR_2->dst_y + VAR_2->dst_height <= VAR_3->pipe_src_h)
  return 0;
 else
  return -VAR_0;
}

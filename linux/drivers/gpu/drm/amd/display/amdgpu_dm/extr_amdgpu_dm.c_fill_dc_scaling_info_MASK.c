
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {int src_x; int src_y; int src_w; int src_h; scalar_t__ crtc_w; scalar_t__ crtc_h; int crtc_y; int crtc_x; } ;
struct TYPE_4__ {int x; int y; int width; int height; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; int y; int x; } ;
struct dc_scaling_info {TYPE_2__ src_rect; TYPE_1__ dst_rect; TYPE_1__ clip_rect; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_scaling_info*,int ,int) ;

__attribute__((used)) static int FUNC_1(const struct drm_plane_state *VAR_1,
    struct dc_scaling_info *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));


 VAR_2->src_rect.x = VAR_1->src_x >> 16;
 VAR_2->src_rect.y = VAR_1->src_y >> 16;

 VAR_2->src_rect.width = VAR_1->src_w >> 16;
 if (VAR_2->src_rect.width == 0)
  return -VAR_0;

 VAR_2->src_rect.height = VAR_1->src_h >> 16;
 if (VAR_2->src_rect.height == 0)
  return -VAR_0;

 VAR_2->dst_rect.x = VAR_1->crtc_x;
 VAR_2->dst_rect.y = VAR_1->crtc_y;

 if (VAR_1->crtc_w == 0)
  return -VAR_0;

 VAR_2->dst_rect.width = VAR_1->crtc_w;

 if (VAR_1->crtc_h == 0)
  return -VAR_0;

 VAR_2->dst_rect.height = VAR_1->crtc_h;


 VAR_2->clip_rect = VAR_2->dst_rect;


 VAR_3 = VAR_2->dst_rect.width * 1000 /
    VAR_2->src_rect.width;

 if (VAR_3 < 250 || VAR_3 > 16000)
  return -VAR_0;

 VAR_4 = VAR_2->dst_rect.height * 1000 /
    VAR_2->src_rect.height;

 if (VAR_4 < 250 || VAR_4 > 16000)
  return -VAR_0;






 return 0;
}

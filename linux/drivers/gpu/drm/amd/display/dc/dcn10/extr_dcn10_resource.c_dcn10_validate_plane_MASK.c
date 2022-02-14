
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ width; } ;
struct dc_plane_state {scalar_t__ format; TYPE_1__ src_rect; } ;
struct dc_caps {scalar_t__ max_video_width; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static enum dc_status FUNC_0(const struct dc_plane_state *VAR_3, struct dc_caps *VAR_4)
{
 if (VAR_3->format >= VAR_2
   && VAR_4->max_video_width != 0
   && VAR_3->src_rect.width > VAR_4->max_video_width)
  return VAR_0;

 return VAR_1;
}

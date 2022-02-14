
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_3__ {int width; int height; } ;
struct dc_plane_state {TYPE_2__ src_rect; TYPE_1__ dst_rect; } ;
struct dc_caps {int dummy; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 int VAR_1 ;

enum dc_status FUNC_0(const struct dc_plane_state *VAR_2,
         struct dc_caps *VAR_3)
{
 if (((VAR_2->dst_rect.width * 2) < VAR_2->src_rect.width) ||
     ((VAR_2->dst_rect.height * 2) < VAR_2->src_rect.height))
  return VAR_0;

 return VAR_1;
}

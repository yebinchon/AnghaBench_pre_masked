
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int scaling_change; int bandwidth_change; int clock_change; int position_change; } ;
union surface_update_flags {TYPE_9__ bits; } ;
struct dc_surface_update {TYPE_8__* surface; TYPE_6__* scaling_info; } ;
typedef enum surface_update_type { ____Placeholder_surface_update_type } surface_update_type ;
struct TYPE_16__ {scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_13__ {scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_11__ {scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_17__ {TYPE_7__ dst_rect; TYPE_4__ clip_rect; TYPE_2__ src_rect; union surface_update_flags update_flags; } ;
struct TYPE_14__ {scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_12__ {scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_10__ {scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_15__ {TYPE_5__ dst_rect; TYPE_3__ clip_rect; TYPE_1__ src_rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum surface_update_type FUNC_0(
  const struct dc_surface_update *VAR_3)
{
 union surface_update_flags *VAR_4 = &VAR_3->surface->update_flags;

 if (!VAR_3->scaling_info)
  return VAR_0;

 if (VAR_3->scaling_info->clip_rect.width != VAR_3->surface->clip_rect.width
   || VAR_3->scaling_info->clip_rect.height != VAR_3->surface->clip_rect.height
   || VAR_3->scaling_info->dst_rect.width != VAR_3->surface->dst_rect.width
   || VAR_3->scaling_info->dst_rect.height != VAR_3->surface->dst_rect.height) {
  VAR_4->bits.scaling_change = 1;

  if ((VAR_3->scaling_info->dst_rect.width < VAR_3->surface->dst_rect.width
   || VAR_3->scaling_info->dst_rect.height < VAR_3->surface->dst_rect.height)
    && (VAR_3->scaling_info->dst_rect.width < VAR_3->surface->src_rect.width
     || VAR_3->scaling_info->dst_rect.height < VAR_3->surface->src_rect.height))

   VAR_4->bits.bandwidth_change = 1;
 }

 if (VAR_3->scaling_info->src_rect.width != VAR_3->surface->src_rect.width
  || VAR_3->scaling_info->src_rect.height != VAR_3->surface->src_rect.height) {

  VAR_4->bits.scaling_change = 1;
  if (VAR_3->scaling_info->src_rect.width > VAR_3->surface->src_rect.width
    && VAR_3->scaling_info->src_rect.height > VAR_3->surface->src_rect.height)

   VAR_4->bits.clock_change = 1;
 }

 if (VAR_3->scaling_info->src_rect.x != VAR_3->surface->src_rect.x
   || VAR_3->scaling_info->src_rect.y != VAR_3->surface->src_rect.y
   || VAR_3->scaling_info->clip_rect.x != VAR_3->surface->clip_rect.x
   || VAR_3->scaling_info->clip_rect.y != VAR_3->surface->clip_rect.y
   || VAR_3->scaling_info->dst_rect.x != VAR_3->surface->dst_rect.x
   || VAR_3->scaling_info->dst_rect.y != VAR_3->surface->dst_rect.y)
  VAR_4->bits.position_change = 1;

 if (VAR_4->bits.clock_change
   || VAR_4->bits.bandwidth_change)
  return VAR_1;

 if (VAR_4->bits.scaling_change
   || VAR_4->bits.position_change)
  return VAR_2;

 return VAR_0;
}

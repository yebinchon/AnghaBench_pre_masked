
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_surface_update {int dummy; } ;
struct TYPE_4__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ width; } ;
struct dc_stream_update {scalar_t__ wb_update; scalar_t__ dpms_off; scalar_t__ abm_level; scalar_t__ out_transfer_func; TYPE_2__ dst; TYPE_1__ src; } ;
struct dc_stream_status {int plane_count; } ;
struct dc {int dummy; } ;
typedef enum surface_update_type { ____Placeholder_surface_update_type } surface_update_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc*,struct dc_surface_update*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static enum surface_update_type FUNC_2(
  struct dc *VAR_2,
  struct dc_surface_update *VAR_3,
  int VAR_4,
  struct dc_stream_update *VAR_5,
  const struct dc_stream_status *VAR_6)
{
 int VAR_7;
 enum surface_update_type VAR_8 = VAR_0;

 if (VAR_6 == ((void*)0) || VAR_6->plane_count != VAR_4)
  return VAR_1;


 if (VAR_5) {
  if ((VAR_5->src.height != 0) &&
    (VAR_5->src.width != 0))
   return VAR_1;

  if ((VAR_5->dst.height != 0) &&
    (VAR_5->dst.width != 0))
   return VAR_1;

  if (VAR_5->out_transfer_func)
   return VAR_1;

  if (VAR_5->abm_level)
   return VAR_1;

  if (VAR_5->dpms_off)
   return VAR_1;





 }

 for (VAR_7 = 0 ; VAR_7 < VAR_4; VAR_7++) {
  enum surface_update_type VAR_9 =
    FUNC_0(VAR_2, &VAR_3[VAR_7]);

  if (VAR_9 == VAR_1)
   return VAR_9;

  FUNC_1(&VAR_8, VAR_9);
 }

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;
struct vmw_private {scalar_t__ active_display_unit; scalar_t__ stdu_max_width; scalar_t__ stdu_max_height; int prim_bb_mem; int capabilities; } ;
struct drm_rect {scalar_t__ x2; int y2; int member_0; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_rect*) ;
 scalar_t__ FUNC_2 (struct drm_rect*) ;
 scalar_t__ VAR_2 ;
 struct vmw_private* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3,
     uint32_t VAR_4,
     struct drm_rect *VAR_5)
{
 struct vmw_private *VAR_6 = FUNC_3(VAR_3);
 struct drm_rect VAR_7 = {0};
 u64 VAR_8 = 0, VAR_9, VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {




  if (VAR_6->active_display_unit == VAR_2 &&
      (FUNC_2(&VAR_5[VAR_11]) > VAR_6->stdu_max_width ||
       FUNC_1(&VAR_5[VAR_11]) > VAR_6->stdu_max_height)) {
   FUNC_0("Screen size not supported.\n");
   return -VAR_0;
  }


  if (VAR_5[VAR_11].x2 > VAR_7.x2)
   VAR_7.x2 = VAR_5[VAR_11].x2;

  if (VAR_5[VAR_11].y2 > VAR_7.y2)
   VAR_7.y2 = VAR_5[VAR_11].y2;

  VAR_8 += (u64) FUNC_2(&VAR_5[VAR_11]) *
   (u64) FUNC_1(&VAR_5[VAR_11]);
 }


 VAR_9 = VAR_8 * 4;






 if (VAR_9 > VAR_6->prim_bb_mem) {
  FUNC_0("Combined output size too large.\n");
  return -VAR_0;
 }


 if (VAR_6->active_display_unit != VAR_2 ||
     !(VAR_6->capabilities & VAR_1)) {
  VAR_10 = (u64) VAR_7.x2 * VAR_7.y2 * 4;

  if (VAR_10 > VAR_6->prim_bb_mem) {
   FUNC_0("Topology is beyond supported limits.\n");
   return -VAR_0;
  }
 }

 return 0;
}

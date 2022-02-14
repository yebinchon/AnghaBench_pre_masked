
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_rect {int x1; int y1; int x2; int y2; } ;
struct TYPE_2__ {int x1; int y1; int x2; int y2; } ;
struct drm_plane_state {TYPE_1__ src; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(struct drm_plane_state *VAR_0, struct drm_rect *VAR_1,
         int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{




 int VAR_6 = VAR_0->src.x1 >> 16;
 int VAR_7 = VAR_0->src.y1 >> 16;
 int VAR_8 = (VAR_0->src.x2 >> 16) + !!(VAR_0->src.x2 & 0xFFFF);
 int VAR_9 = (VAR_0->src.y2 >> 16) + !!(VAR_0->src.y2 & 0xFFFF);

 if (VAR_2 >= VAR_4 || VAR_3 >= VAR_5) {
  FUNC_0("Cannot have damage clip with no dimension.\n");
  return 0;
 }

 if (VAR_2 < VAR_6 || VAR_3 < VAR_7 || VAR_4 > VAR_8 || VAR_5 > VAR_9) {
  FUNC_0("Damage cannot be outside rounded plane src.\n");
  return 0;
 }

 if (VAR_1->x1 != VAR_2 || VAR_1->y1 != VAR_3 || VAR_1->x2 != VAR_4 || VAR_1->y2 != VAR_5) {
  FUNC_0("Damage = %d %d %d %d\n", VAR_1->x1, VAR_1->y1, VAR_1->x2, VAR_1->y2);
  return 0;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_mode_rect {int y2; int x2; int y1; int x1; } ;
struct drm_clip_rect {int y2; int x2; int y1; int x1; } ;



__attribute__((used)) static void FUNC_0(const struct drm_clip_rect *VAR_0,
          struct drm_mode_rect *VAR_1,
          uint32_t VAR_2, uint32_t VAR_3)
{
 while (VAR_2 > 0) {
  VAR_1->x1 = VAR_0->x1;
  VAR_1->y1 = VAR_0->y1;
  VAR_1->x2 = VAR_0->x2;
  VAR_1->y2 = VAR_0->y2;
  VAR_0 += VAR_3;
  VAR_1++;
  VAR_2--;
 }
}

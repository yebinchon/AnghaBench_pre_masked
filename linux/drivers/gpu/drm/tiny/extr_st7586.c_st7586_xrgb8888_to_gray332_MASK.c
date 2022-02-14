
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_rect {size_t x2; size_t x1; size_t y2; size_t y1; } ;
struct drm_framebuffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*,void*,struct drm_framebuffer*,struct drm_rect*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (size_t,int ) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_3(u8 *VAR_2, void *VAR_3,
           struct drm_framebuffer *VAR_4,
           struct drm_rect *VAR_5)
{
 size_t VAR_6 = (VAR_5->x2 - VAR_5->x1) * (VAR_5->y2 - VAR_5->y1);
 unsigned int VAR_7, VAR_8;
 u8 *VAR_9, *VAR_10, VAR_11;

 VAR_10 = FUNC_2(VAR_6, VAR_0);
 if (!VAR_10)
  return;

 FUNC_0(VAR_10, VAR_3, VAR_4, VAR_5);
 VAR_9 = VAR_10;

 for (VAR_8 = VAR_5->y1; VAR_8 < VAR_5->y2; VAR_8++) {
  for (VAR_7 = VAR_5->x1; VAR_7 < VAR_5->x2; VAR_7 += 3) {
   VAR_11 = VAR_1[*VAR_9++ >> 6] << 5;
   VAR_11 |= VAR_1[*VAR_9++ >> 6] << 2;
   VAR_11 |= VAR_1[*VAR_9++ >> 6] >> 1;
   *VAR_2++ = VAR_11;
  }
 }

 FUNC_1(VAR_10);
}

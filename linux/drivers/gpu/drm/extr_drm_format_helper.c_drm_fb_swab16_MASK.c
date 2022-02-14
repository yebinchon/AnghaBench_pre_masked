
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_rect {int x2; int x1; unsigned int y1; unsigned int y2; } ;
struct drm_framebuffer {unsigned int* pitches; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int ) ;

void FUNC_4(u16 *VAR_1, void *VAR_2, struct drm_framebuffer *VAR_3,
     struct drm_rect *VAR_4)
{
 size_t VAR_5 = (VAR_4->x2 - VAR_4->x1) * sizeof(u16);
 unsigned int VAR_6, VAR_7;
 u16 *VAR_8, *VAR_9;





 VAR_9 = FUNC_1(VAR_5, VAR_0);
 if (!VAR_9)
  return;

 for (VAR_7 = VAR_4->y1; VAR_7 < VAR_4->y2; VAR_7++) {
  VAR_8 = VAR_2 + (VAR_7 * VAR_3->pitches[0]);
  VAR_8 += VAR_4->x1;
  FUNC_2(VAR_9, VAR_8, VAR_5);
  VAR_8 = VAR_9;
  for (VAR_6 = VAR_4->x1; VAR_6 < VAR_4->x2; VAR_6++)
   *VAR_1++ = FUNC_3(*VAR_8++);
 }

 FUNC_0(VAR_9);
}

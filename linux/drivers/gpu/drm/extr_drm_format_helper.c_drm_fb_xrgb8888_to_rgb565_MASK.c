
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct drm_rect {size_t x2; size_t x1; unsigned int y2; unsigned int y1; } ;
struct drm_framebuffer {int * pitches; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_rect*,int ,int) ;
 int FUNC_1 (void*,void*,size_t,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t,int ) ;
 int FUNC_4 (void*,void*,size_t) ;

void FUNC_5(void *VAR_1, void *VAR_2,
          struct drm_framebuffer *VAR_3,
          struct drm_rect *VAR_4, bool VAR_5)
{
 size_t VAR_6 = VAR_4->x2 - VAR_4->x1;
 size_t VAR_7 = VAR_6 * sizeof(u32);
 size_t VAR_8 = VAR_6 * sizeof(u16);
 unsigned VAR_9, VAR_10 = VAR_4->y2 - VAR_4->y1;
 void *VAR_11;





 VAR_11 = FUNC_3(VAR_7, VAR_0);
 if (!VAR_11)
  return;

 VAR_2 += FUNC_0(VAR_4, VAR_3->pitches[0], sizeof(u32));
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  FUNC_4(VAR_11, VAR_2, VAR_7);
  FUNC_1(VAR_1, VAR_11, VAR_6, VAR_5);
  VAR_2 += VAR_3->pitches[0];
  VAR_1 += VAR_8;
 }

 FUNC_2(VAR_11);
}

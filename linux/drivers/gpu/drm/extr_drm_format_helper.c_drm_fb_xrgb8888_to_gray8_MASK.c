
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_rect {int x2; int x1; unsigned int y1; unsigned int y2; } ;
struct drm_framebuffer {unsigned int* pitches; TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (void*,int*,unsigned int) ;

void FUNC_4(u8 *VAR_2, void *VAR_3, struct drm_framebuffer *VAR_4,
          struct drm_rect *VAR_5)
{
 unsigned int VAR_6 = (VAR_5->x2 - VAR_5->x1) * sizeof(u32);
 unsigned int VAR_7, VAR_8;
 void *VAR_9;
 u32 *VAR_10;

 if (FUNC_0(VAR_4->format->format != VAR_0))
  return;




 VAR_9 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_9)
  return;

 for (VAR_8 = VAR_5->y1; VAR_8 < VAR_5->y2; VAR_8++) {
  VAR_10 = VAR_3 + (VAR_8 * VAR_4->pitches[0]);
  VAR_10 += VAR_5->x1;
  FUNC_3(VAR_9, VAR_10, VAR_6);
  VAR_10 = VAR_9;
  for (VAR_7 = VAR_5->x1; VAR_7 < VAR_5->x2; VAR_7++) {
   u8 VAR_11 = (*VAR_10 & 0x00ff0000) >> 16;
   u8 VAR_12 = (*VAR_10 & 0x0000ff00) >> 8;
   u8 VAR_13 = *VAR_10 & 0x000000ff;


   *VAR_2++ = (3 * VAR_11 + 6 * VAR_12 + VAR_13) / 10;
   VAR_10++;
  }
 }

 FUNC_1(VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int x1; int y1; } ;
struct drm_plane_state {TYPE_1__ src; struct drm_framebuffer* fb; } ;
struct drm_framebuffer {unsigned int* pitches; scalar_t__* offsets; struct drm_format_info* format; } ;
struct drm_format_info {unsigned int num_planes; int* cpp; unsigned int vsub; unsigned int hsub; } ;
struct TYPE_4__ {scalar_t__ dev_addr; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,int) ;
 TYPE_2__* FUNC_1 (struct drm_framebuffer*) ;

void FUNC_2(struct drm_plane_state *VAR_0, u32 VAR_1[2][3],
 u16 VAR_2[3], bool VAR_3)
{
 struct drm_framebuffer *VAR_4 = VAR_0->fb;
 const struct drm_format_info *VAR_5 = VAR_4->format;
 unsigned int VAR_6 = VAR_5->num_planes;
 unsigned int VAR_7 = VAR_0->src.x1 >> 16;
 unsigned int VAR_8 = VAR_0->src.y1 >> 16;
 u32 VAR_9 = FUNC_1(VAR_4)->dev_addr;
 int VAR_10;

 FUNC_0("pitch %u x %d y %d bpp %d\n",
        VAR_4->pitches[0], VAR_7, VAR_8, VAR_5->cpp[0] * 8);

 if (VAR_6 > 3)
  VAR_6 = 3;

 VAR_1[0][0] = VAR_9 + VAR_4->offsets[0] + VAR_8 * VAR_4->pitches[0] +
        VAR_7 * VAR_5->cpp[0];
 VAR_2[0] = VAR_4->pitches[0];

 VAR_8 /= VAR_5->vsub;
 VAR_7 /= VAR_5->hsub;

 for (VAR_10 = 1; VAR_10 < VAR_6; VAR_10++) {
  VAR_1[0][VAR_10] = VAR_9 + VAR_4->offsets[VAR_10] + VAR_8 * VAR_4->pitches[VAR_10] +
         VAR_7 * VAR_5->cpp[VAR_10];
  VAR_2[VAR_10] = VAR_4->pitches[VAR_10];
 }
 for (; VAR_10 < 3; VAR_10++) {
  VAR_1[0][VAR_10] = 0;
  VAR_2[VAR_10] = 0;
 }
 if (VAR_3) {
  for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
   VAR_1[1][VAR_10] = VAR_1[0][VAR_10] + VAR_2[VAR_10];
   VAR_2[VAR_10] *= 2;
  }
 } else {
  for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
   VAR_1[1][VAR_10] = VAR_1[0][VAR_10];
 }
}

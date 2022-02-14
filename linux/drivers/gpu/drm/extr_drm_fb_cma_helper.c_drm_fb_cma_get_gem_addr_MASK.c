
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_plane_state {int src_x; int src_y; } ;
struct drm_gem_cma_object {scalar_t__ paddr; } ;
struct drm_framebuffer {int* pitches; TYPE_1__* format; scalar_t__* offsets; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int* char_per_block; int hsub; int vsub; } ;


 struct drm_gem_cma_object* FUNC_0 (struct drm_framebuffer*,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;

dma_addr_t FUNC_3(struct drm_framebuffer *VAR_0,
       struct drm_plane_state *VAR_1,
       unsigned int VAR_2)
{
 struct drm_gem_cma_object *VAR_3;
 dma_addr_t VAR_4;
 u8 VAR_5 = 1, VAR_6 = 1;
 u32 VAR_7 = FUNC_2(VAR_0->format, VAR_2);
 u32 VAR_8 = FUNC_1(VAR_0->format, VAR_2);
 u32 VAR_9 = VAR_0->format->char_per_block[VAR_2];
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_3)
  return 0;

 VAR_4 = VAR_3->paddr + VAR_0->offsets[VAR_2];

 if (VAR_2 > 0) {
  VAR_5 = VAR_0->format->hsub;
  VAR_6 = VAR_0->format->vsub;
 }

 VAR_10 = (VAR_1->src_x >> 16) / VAR_5;
 VAR_11 = (VAR_1->src_y >> 16) / VAR_6;
 VAR_12 = (VAR_11 / VAR_8) * VAR_8;
 VAR_13 = VAR_10 / VAR_7;

 VAR_4 += VAR_0->pitches[VAR_2] * VAR_12;
 VAR_4 += VAR_9 * VAR_13;

 return VAR_4;
}

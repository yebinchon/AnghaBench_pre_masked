
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_framebuffer {int* offsets; int* pitches; TYPE_1__* format; int modifier; } ;
struct komeda_fb {struct drm_framebuffer base; } ;
struct drm_gem_cma_object {int paddr; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int num_planes; int* char_per_block; int hsub; int vsub; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct drm_gem_cma_object* FUNC_1 (struct drm_framebuffer*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

dma_addr_t
FUNC_3(struct komeda_fb *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct drm_framebuffer *VAR_5 = &VAR_1->base;
 const struct drm_gem_cma_object *VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_4 >= VAR_5->format->num_planes) {
  FUNC_0("Out of max plane num.\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_5, VAR_4);

 VAR_7 = VAR_5->offsets[VAR_4];
 if (!VAR_5->modifier) {
  VAR_10 = FUNC_2(VAR_5->format, VAR_4);
  VAR_11 = VAR_5->format->char_per_block[VAR_4];
  VAR_8 = VAR_2 / (VAR_4 ? VAR_5->format->hsub : 1);
  VAR_9 = VAR_3 / (VAR_4 ? VAR_5->format->vsub : 1);

  VAR_7 += (VAR_8 / VAR_10) * VAR_11
   + VAR_9 * VAR_5->pitches[VAR_4];
 }

 return VAR_6->paddr + VAR_7;
}

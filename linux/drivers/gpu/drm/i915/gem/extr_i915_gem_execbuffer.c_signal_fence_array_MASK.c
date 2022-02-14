
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_execbuffer {TYPE_2__* request; TYPE_1__* args; } ;
struct drm_syncobj {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_4__ {struct dma_fence fence; } ;
struct TYPE_3__ {unsigned int num_cliprects; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct drm_syncobj*,struct dma_fence* const) ;
 struct drm_syncobj* FUNC_1 (struct drm_syncobj*,unsigned int*,int) ;

__attribute__((used)) static void
FUNC_2(struct i915_execbuffer *VAR_1,
     struct drm_syncobj **VAR_2)
{
 const unsigned int VAR_3 = VAR_1->args->num_cliprects;
 struct dma_fence * const VAR_4 = &VAR_1->request->fence;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct drm_syncobj *VAR_6;
  unsigned int VAR_7;

  VAR_6 = FUNC_1(VAR_2[VAR_5], &VAR_7, 2);
  if (!(VAR_7 & VAR_0))
   continue;

  FUNC_0(VAR_6, VAR_4);
 }
}

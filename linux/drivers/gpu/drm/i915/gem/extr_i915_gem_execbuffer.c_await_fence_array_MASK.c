
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_execbuffer {int request; TYPE_1__* args; } ;
struct drm_syncobj {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {unsigned int num_cliprects; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct dma_fence*) ;
 struct dma_fence* FUNC_1 (struct drm_syncobj*) ;
 int FUNC_2 (int ,struct dma_fence*) ;
 struct drm_syncobj* FUNC_3 (struct drm_syncobj*,unsigned int*,int) ;

__attribute__((used)) static int
FUNC_4(struct i915_execbuffer *VAR_2,
    struct drm_syncobj **VAR_3)
{
 const unsigned int VAR_4 = VAR_2->args->num_cliprects;
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct drm_syncobj *VAR_7;
  struct dma_fence *VAR_8;
  unsigned int VAR_9;

  VAR_7 = FUNC_3(VAR_3[VAR_5], &VAR_9, 2);
  if (!(VAR_9 & VAR_1))
   continue;

  VAR_8 = FUNC_1(VAR_7);
  if (!VAR_8)
   return -VAR_0;

  VAR_6 = FUNC_2(VAR_2->request, VAR_8);
  FUNC_0(VAR_8);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}

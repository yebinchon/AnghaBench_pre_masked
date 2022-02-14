
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i915_request {int head; int tail; TYPE_3__* ring; TYPE_2__* batch; int postfix; } ;
struct drm_printer {int dummy; } ;
struct TYPE_6__ {unsigned int size; void* vaddr; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_5__ {TYPE_1__ node; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_printer*,char*,int,int ,int,unsigned int,unsigned int) ;
 int FUNC_1 (struct drm_printer*,void*,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (void*,void const*,int) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_printer *VAR_1, struct i915_request *VAR_2)
{
 void *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1,
     "[head %04x, postfix %04x, tail %04x, batch 0x%08x_%08x]:\n",
     VAR_2->head, VAR_2->postfix, VAR_2->tail,
     VAR_2->batch ? FUNC_6(VAR_2->batch->node.start) : ~0u,
     VAR_2->batch ? FUNC_4(VAR_2->batch->node.start) : ~0u);

 VAR_4 = VAR_2->tail - VAR_2->head;
 if (VAR_2->tail < VAR_2->head)
  VAR_4 += VAR_2->ring->size;

 VAR_3 = FUNC_3(VAR_4, VAR_0);
 if (VAR_3) {
  const void *VAR_5 = VAR_2->ring->vaddr;
  unsigned int VAR_6 = VAR_2->head;
  unsigned int VAR_7 = 0;

  if (VAR_2->tail < VAR_6) {
   VAR_7 = VAR_2->ring->size - VAR_6;
   FUNC_5(VAR_3, VAR_5 + VAR_6, VAR_7);
   VAR_6 = 0;
  }
  FUNC_5(VAR_3 + VAR_7, VAR_5 + VAR_6, VAR_4 - VAR_7);

  FUNC_1(VAR_1, VAR_3, VAR_4);
  FUNC_2(VAR_3);
 }
}

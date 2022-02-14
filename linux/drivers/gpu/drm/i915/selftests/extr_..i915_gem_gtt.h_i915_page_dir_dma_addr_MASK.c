
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t top; int * scratch; } ;
struct i915_ppgtt {TYPE_2__ vm; TYPE_1__* pd; } ;
struct i915_page_dma {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct i915_page_dma** entry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline dma_addr_t
FUNC_2(const struct i915_ppgtt *VAR_0, const unsigned int VAR_1)
{
 struct i915_page_dma *VAR_2 = VAR_0->pd->entry[VAR_1];

 return FUNC_1(VAR_2 ?: FUNC_0(&VAR_0->vm.scratch[VAR_0->vm.top]));
}

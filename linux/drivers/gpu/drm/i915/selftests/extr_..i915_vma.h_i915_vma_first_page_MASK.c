
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct i915_vma {TYPE_1__* pages; } ;
struct TYPE_2__ {int sgl; } ;


 int FUNC_0 (int) ;
 struct page* FUNC_1 (int ) ;

__attribute__((used)) static inline struct page *FUNC_2(struct i915_vma *VAR_0)
{
 FUNC_0(!VAR_0->pages);
 return FUNC_1(VAR_0->pages->sgl);
}

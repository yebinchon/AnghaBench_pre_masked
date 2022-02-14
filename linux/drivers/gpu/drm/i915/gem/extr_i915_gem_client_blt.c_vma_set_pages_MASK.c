
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int page_sizes; int pages; struct i915_sleeve* private; } ;
struct i915_sleeve {int page_sizes; int pages; } ;



__attribute__((used)) static int FUNC_0(struct i915_vma *VAR_0)
{
 struct i915_sleeve *VAR_1 = VAR_0->private;

 VAR_0->pages = VAR_1->pages;
 VAR_0->page_sizes = VAR_1->page_sizes;

 return 0;
}

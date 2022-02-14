
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_vma {TYPE_2__* obj; int page_sizes; int pages; } ;
struct TYPE_3__ {int page_sizes; int pages; } ;
struct TYPE_4__ {TYPE_1__ mm; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct i915_vma *VAR_0)
{
 FUNC_0(VAR_0->pages);

 VAR_0->pages = VAR_0->obj->mm.pages;

 VAR_0->page_sizes = VAR_0->obj->mm.page_sizes;

 return 0;
}

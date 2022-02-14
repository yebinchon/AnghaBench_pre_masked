
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_vma {int page_sizes; int * pages; TYPE_2__* obj; } ;
struct TYPE_3__ {int * pages; } ;
struct TYPE_4__ {TYPE_1__ mm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i915_vma *VAR_0)
{
 FUNC_0(!VAR_0->pages);

 if (VAR_0->pages != VAR_0->obj->mm.pages) {
  FUNC_3(VAR_0->pages);
  FUNC_1(VAR_0->pages);
 }
 VAR_0->pages = ((void*)0);

 FUNC_2(&VAR_0->page_sizes, 0, sizeof(VAR_0->page_sizes));
}

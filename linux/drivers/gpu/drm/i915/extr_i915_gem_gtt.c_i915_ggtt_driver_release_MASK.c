
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pagevec {scalar_t__ nr; int pages; } ;
struct TYPE_3__ {struct pagevec pvec; } ;
struct TYPE_4__ {TYPE_1__ wc_stash; } ;
struct drm_i915_private {TYPE_2__ mm; int ggtt; } ;


 int FUNC_0 (struct pagevec*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct drm_i915_private *VAR_0)
{
 struct pagevec *VAR_1;

 FUNC_1(&VAR_0->ggtt);

 FUNC_2(&VAR_0->ggtt);

 VAR_1 = &VAR_0->mm.wc_stash.pvec;
 if (VAR_1->nr) {
  FUNC_4(VAR_1->pages, VAR_1->nr);
  FUNC_0(VAR_1);
 }

 FUNC_3(VAR_0);
}

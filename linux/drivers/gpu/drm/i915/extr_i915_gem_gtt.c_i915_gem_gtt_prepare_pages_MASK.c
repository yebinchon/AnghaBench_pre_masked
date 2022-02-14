
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct TYPE_5__ {struct sg_table* pages; } ;
struct TYPE_7__ {int size; TYPE_4__* dev; } ;
struct drm_i915_gem_object {TYPE_1__ mm; TYPE_3__ base; } ;
struct TYPE_8__ {TYPE_2__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int,int *,int) ;
 int FUNC_3 (TYPE_4__*) ;

int FUNC_4(struct drm_i915_gem_object *VAR_6,
          struct sg_table *VAR_7)
{
 do {
  if (FUNC_1(&VAR_6->base.dev->pdev->dev,
         VAR_7->sgl, VAR_7->nents,
         VAR_5,
         VAR_0))
   return 0;
  FUNC_0(VAR_6->mm.pages == VAR_7);
 } while (FUNC_2(FUNC_3(VAR_6->base.dev),
     VAR_6->base.size >> VAR_4, ((void*)0),
     VAR_2 |
     VAR_3));

 return -VAR_1;
}

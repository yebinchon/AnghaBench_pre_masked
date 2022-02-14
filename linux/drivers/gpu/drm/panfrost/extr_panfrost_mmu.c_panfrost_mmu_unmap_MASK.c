
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_5__ {size_t start; size_t size; } ;
struct drm_gem_object {int dev; } ;
struct TYPE_4__ {struct drm_gem_object base; } ;
struct panfrost_gem_object {int is_mapped; TYPE_2__ node; TYPE_3__* mmu; TYPE_1__ base; } ;
struct panfrost_device {int dev; } ;
struct io_pgtable_ops {size_t (* unmap ) (struct io_pgtable_ops*,size_t,size_t,int *) ;scalar_t__ (* iova_to_phys ) (struct io_pgtable_ops*,size_t) ;} ;
struct TYPE_6__ {int as; struct io_pgtable_ops* pgtbl_ops; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,size_t,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct panfrost_device*,TYPE_3__*,size_t,size_t) ;
 scalar_t__ FUNC_4 (struct io_pgtable_ops*,size_t) ;
 size_t FUNC_5 (struct io_pgtable_ops*,size_t,size_t,int *) ;
 struct panfrost_device* FUNC_6 (int ) ;

void FUNC_7(struct panfrost_gem_object *VAR_1)
{
 struct drm_gem_object *VAR_2 = &VAR_1->base.base;
 struct panfrost_device *VAR_3 = FUNC_6(VAR_2->dev);
 struct io_pgtable_ops *VAR_4 = VAR_1->mmu->pgtbl_ops;
 u64 VAR_5 = VAR_1->node.start << VAR_0;
 size_t VAR_6 = VAR_1->node.size << VAR_0;
 size_t VAR_7 = 0;

 if (FUNC_0(!VAR_1->is_mapped))
  return;

 FUNC_1(VAR_3->dev, "unmap: as=%d, iova=%llx, len=%zx", VAR_1->mmu->as, VAR_5, VAR_6);

 while (VAR_7 < VAR_6) {
  size_t VAR_8;
  size_t VAR_9 = FUNC_2(VAR_5, VAR_6 - VAR_7);

  if (VAR_4->iova_to_phys(VAR_4, VAR_5)) {
   VAR_8 = VAR_4->unmap(VAR_4, VAR_5, VAR_9, ((void*)0));
   FUNC_0(VAR_8 != VAR_9);
  }
  VAR_5 += VAR_9;
  VAR_7 += VAR_9;
 }

 FUNC_3(VAR_3, VAR_1->mmu, VAR_1->node.start << VAR_0, VAR_6);
 VAR_1->is_mapped = 0;
}

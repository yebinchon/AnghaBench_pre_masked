
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct sg_table {int nents; int sgl; } ;
struct TYPE_10__ {int size; TYPE_2__* filp; } ;
struct TYPE_9__ {int pages_use_count; TYPE_5__ base; int pages_lock; struct page** pages; } ;
struct TYPE_6__ {int start; } ;
struct panfrost_gem_object {int is_mapped; TYPE_4__ base; TYPE_3__* mmu; struct sg_table* sgts; TYPE_1__ node; int is_heap; } ;
struct panfrost_device {int dev; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_8__ {int as; } ;
struct TYPE_7__ {struct address_space* f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct page*) ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 struct panfrost_gem_object* FUNC_3 (struct panfrost_device*,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct sg_table*) ;
 void* FUNC_10 (int,int,int) ;
 int FUNC_11 (struct address_space*) ;
 int FUNC_12 (struct panfrost_device*,TYPE_3__*,int,int,struct sg_table*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sg_table*,struct page**,int,int ,int,int) ;
 int FUNC_16 (struct sg_table*) ;
 struct page* FUNC_17 (struct address_space*,int) ;

__attribute__((used)) static int FUNC_18(struct panfrost_device *VAR_13, int VAR_14,
           u64 VAR_15)
{
 int VAR_16, VAR_17;
 struct panfrost_gem_object *VAR_18;
 struct address_space *VAR_19;
 pgoff_t VAR_20;
 struct sg_table *VAR_21;
 struct page **VAR_22;

 VAR_18 = FUNC_3(VAR_13, VAR_14, VAR_15);
 if (!VAR_18)
  return -VAR_2;

 if (!VAR_18->is_heap) {
  FUNC_4(VAR_13->dev, "matching BO is not heap type (GPU VA = %llx)",
    VAR_18->node.start << VAR_9);
  VAR_16 = -VAR_1;
  goto err_bo;
 }
 FUNC_2(VAR_18->mmu->as != VAR_14);


 VAR_15 &= ~((u64)VAR_11 - 1);
 VAR_20 = VAR_15 >> VAR_9;
 VAR_20 -= VAR_18->node.start;

 FUNC_13(&VAR_18->base.pages_lock);

 if (!VAR_18->base.pages) {
  VAR_18->sgts = FUNC_10(VAR_18->base.base.size / VAR_11,
         sizeof(struct sg_table), VAR_4 | VAR_12);
  if (!VAR_18->sgts) {
   FUNC_14(&VAR_18->base.pages_lock);
   VAR_16 = -VAR_3;
   goto err_bo;
  }

  VAR_22 = FUNC_10(VAR_18->base.base.size >> VAR_9,
           sizeof(struct page *), VAR_4 | VAR_12);
  if (!VAR_22) {
   FUNC_9(VAR_18->sgts);
   VAR_18->sgts = ((void*)0);
   FUNC_14(&VAR_18->base.pages_lock);
   VAR_16 = -VAR_3;
   goto err_bo;
  }
  VAR_18->base.pages = VAR_22;
  VAR_18->base.pages_use_count = 1;
 } else
  VAR_22 = VAR_18->base.pages;

 VAR_19 = VAR_18->base.base.filp->f_mapping;
 FUNC_11(VAR_19);

 for (VAR_17 = VAR_20; VAR_17 < VAR_20 + VAR_8; VAR_17++) {
  VAR_22[VAR_17] = FUNC_17(VAR_19, VAR_17);
  if (FUNC_0(VAR_22[VAR_17])) {
   FUNC_14(&VAR_18->base.pages_lock);
   VAR_16 = FUNC_1(VAR_22[VAR_17]);
   goto err_pages;
  }
 }

 FUNC_14(&VAR_18->base.pages_lock);

 VAR_21 = &VAR_18->sgts[VAR_20 / (VAR_11 / VAR_10)];
 VAR_16 = FUNC_15(VAR_21, VAR_22 + VAR_20,
     VAR_8, 0, VAR_11, VAR_4);
 if (VAR_16)
  goto err_pages;

 if (!FUNC_6(VAR_13->dev, VAR_21->sgl, VAR_21->nents, VAR_0)) {
  VAR_16 = -VAR_1;
  goto err_map;
 }

 FUNC_12(VAR_13, VAR_18->mmu, VAR_15, VAR_7 | VAR_6 | VAR_5, VAR_21);

 VAR_18->is_mapped = 1;

 FUNC_5(VAR_13->dev, "mapped page fault @ AS%d %llx", VAR_14, VAR_15);

 FUNC_7(&VAR_18->base.base);

 return 0;

err_map:
 FUNC_16(VAR_21);
err_pages:
 FUNC_8(&VAR_18->base);
err_bo:
 FUNC_7(&VAR_18->base.base);
 return VAR_16;
}

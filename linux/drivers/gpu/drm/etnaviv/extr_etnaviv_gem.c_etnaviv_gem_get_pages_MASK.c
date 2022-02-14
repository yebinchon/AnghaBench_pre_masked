
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int size; struct drm_device* dev; } ;
struct etnaviv_gem_object {struct page** pages; struct sg_table* sgt; TYPE_2__ base; TYPE_1__* ops; int lock; } ;
struct drm_device {int dev; } ;
struct TYPE_3__ {int (* get_pages ) (struct etnaviv_gem_object*) ;} ;


 struct page** FUNC_0 (struct sg_table*) ;
 struct page** FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sg_table*) ;
 int VAR_0 ;
 int FUNC_3 (struct sg_table*) ;
 int FUNC_4 (int ,char*,int ) ;
 struct sg_table* FUNC_5 (struct page**,int) ;
 int FUNC_6 (struct etnaviv_gem_object*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct etnaviv_gem_object*) ;

struct page **FUNC_9(struct etnaviv_gem_object *VAR_1)
{
 int VAR_2;

 FUNC_7(&VAR_1->lock);

 if (!VAR_1->pages) {
  VAR_2 = VAR_1->ops->get_pages(VAR_1);
  if (VAR_2 < 0)
   return FUNC_1(VAR_2);
 }

 if (!VAR_1->sgt) {
  struct drm_device *VAR_3 = VAR_1->base.dev;
  int VAR_4 = VAR_1->base.size >> VAR_0;
  struct sg_table *VAR_5;

  VAR_5 = FUNC_5(VAR_1->pages, VAR_4);
  if (FUNC_2(VAR_5)) {
   FUNC_4(VAR_3->dev, "failed to allocate sgt: %ld\n",
    FUNC_3(VAR_5));
   return FUNC_0(VAR_5);
  }

  VAR_1->sgt = VAR_5;

  FUNC_6(VAR_1);
 }

 return VAR_1->pages;
}

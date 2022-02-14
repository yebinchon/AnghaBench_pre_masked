
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct msm_gem_object {unsigned int madv; void* vaddr; int lock; int vmap_count; } ;
struct drm_gem_object {int size; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct page**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct page**) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 struct page** FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct msm_gem_object* FUNC_9 (struct drm_gem_object*) ;
 void* FUNC_10 (struct page**,int,int ,int ) ;

__attribute__((used)) static void *FUNC_11(struct drm_gem_object *VAR_5, unsigned VAR_6)
{
 struct msm_gem_object *VAR_7 = FUNC_9(VAR_5);
 int VAR_8 = 0;

 FUNC_6(&VAR_7->lock);

 if (FUNC_4(VAR_7->madv > VAR_6)) {
  FUNC_0(VAR_5->dev->dev, "Invalid madv state: %u vs %u\n",
   VAR_7->madv, VAR_6);
  FUNC_7(&VAR_7->lock);
  return FUNC_1(-VAR_0);
 }







 VAR_7->vmap_count++;

 if (!VAR_7->vaddr) {
  struct page **VAR_9 = FUNC_5(VAR_5);
  if (FUNC_2(VAR_9)) {
   VAR_8 = FUNC_3(VAR_9);
   goto fail;
  }
  VAR_7->vaddr = FUNC_10(VAR_9, VAR_5->size >> VAR_3,
    VAR_4, FUNC_8(VAR_2));
  if (VAR_7->vaddr == ((void*)0)) {
   VAR_8 = -VAR_1;
   goto fail;
  }
 }

 FUNC_7(&VAR_7->lock);
 return VAR_7->vaddr;

fail:
 VAR_7->vmap_count--;
 FUNC_7(&VAR_7->lock);
 return FUNC_1(VAR_8);
}

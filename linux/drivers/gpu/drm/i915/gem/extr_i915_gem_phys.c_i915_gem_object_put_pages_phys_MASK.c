
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_7__ {int size; int dev; TYPE_1__* filp; } ;
struct TYPE_6__ {int dirty; scalar_t__ madv; } ;
struct drm_i915_gem_object {TYPE_4__* phys_handle; TYPE_3__ base; TYPE_2__ mm; } ;
struct address_space {int dummy; } ;
struct TYPE_8__ {char* vaddr; } ;
struct TYPE_5__ {struct address_space* f_mapping; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_gem_object*,struct sg_table*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (struct sg_table*) ;
 char* FUNC_5 (struct page*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct sg_table*) ;
 struct page* FUNC_12 (struct address_space*,int) ;

__attribute__((used)) static void
FUNC_13(struct drm_i915_gem_object *VAR_2,
          struct sg_table *VAR_3)
{
 FUNC_1(VAR_2, VAR_3, 0);

 if (VAR_2->mm.dirty) {
  struct address_space *VAR_4 = VAR_2->base.filp->f_mapping;
  char *VAR_5 = VAR_2->phys_handle->vaddr;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_2->base.size / VAR_1; VAR_6++) {
   struct page *VAR_7;
   char *VAR_8;

   VAR_7 = FUNC_12(VAR_4, VAR_6);
   if (FUNC_0(VAR_7))
    continue;

   VAR_8 = FUNC_5(VAR_7);
   FUNC_2(VAR_5, VAR_1);
   FUNC_8(VAR_8, VAR_5, VAR_1);
   FUNC_6(VAR_8);

   FUNC_10(VAR_7);
   if (VAR_2->mm.madv == VAR_0)
    FUNC_7(VAR_7);
   FUNC_9(VAR_7);
   VAR_5 += VAR_1;
  }
  VAR_2->mm.dirty = 0;
 }

 FUNC_11(VAR_3);
 FUNC_4(VAR_3);

 FUNC_3(VAR_2->base.dev, VAR_2->phys_handle);
}

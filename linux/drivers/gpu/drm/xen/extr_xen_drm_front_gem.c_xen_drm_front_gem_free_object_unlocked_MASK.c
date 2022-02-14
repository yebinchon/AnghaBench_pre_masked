
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ import_attach; } ;
struct xen_gem_object {scalar_t__ pages; TYPE_1__ base; int num_pages; scalar_t__ be_alloc; int sgt_imported; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct xen_gem_object*) ;
 int FUNC_5 (struct xen_gem_object*) ;
 struct xen_gem_object* FUNC_6 (struct drm_gem_object*) ;

void FUNC_7(struct drm_gem_object *VAR_0)
{
 struct xen_gem_object *VAR_1 = FUNC_6(VAR_0);

 if (VAR_1->base.import_attach) {
  FUNC_2(&VAR_1->base, VAR_1->sgt_imported);
  FUNC_4(VAR_1);
 } else {
  if (VAR_1->pages) {
   if (VAR_1->be_alloc) {
    FUNC_3(VAR_1->num_pages,
       VAR_1->pages);
    FUNC_4(VAR_1);
   } else {
    FUNC_1(&VAR_1->base,
        VAR_1->pages, 1, 0);
   }
  }
 }
 FUNC_0(VAR_0);
 FUNC_5(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xen_gem_object {int be_alloc; struct xen_gem_object* pages; int base; int num_pages; } ;
struct xen_drm_front_drm_info {TYPE_2__* front_info; } ;
struct drm_device {struct xen_drm_front_drm_info* dev_private; } ;
struct TYPE_3__ {scalar_t__ be_alloc; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,size_t,...) ;
 struct xen_gem_object* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct xen_gem_object*) ;
 int VAR_0 ;
 int FUNC_4 (struct xen_gem_object*) ;
 int FUNC_5 (int ,struct xen_gem_object*) ;
 struct xen_gem_object* FUNC_6 (int *) ;
 int FUNC_7 (struct xen_gem_object*,size_t) ;
 struct xen_gem_object* FUNC_8 (struct drm_device*,size_t) ;
 int FUNC_9 (struct xen_gem_object*) ;
 size_t FUNC_10 (size_t,int ) ;

__attribute__((used)) static struct xen_gem_object *FUNC_11(struct drm_device *VAR_1, size_t VAR_2)
{
 struct xen_drm_front_drm_info *VAR_3 = VAR_1->dev_private;
 struct xen_gem_object *VAR_4;
 int VAR_5;

 VAR_2 = FUNC_10(VAR_2, VAR_0);
 VAR_4 = FUNC_8(VAR_1, VAR_2);
 if (FUNC_3(VAR_4))
  return VAR_4;

 if (VAR_3->front_info->cfg.be_alloc) {




  VAR_5 = FUNC_7(VAR_4, VAR_2);
  if (VAR_5 < 0)
   goto fail;





  VAR_5 = FUNC_5(VAR_4->num_pages,
            VAR_4->pages);
  if (VAR_5 < 0) {
   FUNC_1("Cannot allocate %zu ballooned pages: %d\n",
      VAR_4->num_pages, VAR_5);
   FUNC_9(VAR_4);
   goto fail;
  }

  VAR_4->be_alloc = 1;
  return VAR_4;
 }




 VAR_4->num_pages = FUNC_0(VAR_2, VAR_0);
 VAR_4->pages = FUNC_6(&VAR_4->base);
 if (FUNC_3(VAR_4->pages)) {
  VAR_5 = FUNC_4(VAR_4->pages);
  VAR_4->pages = ((void*)0);
  goto fail;
 }

 return VAR_4;

fail:
 FUNC_1("Failed to allocate buffer with size %zu\n", VAR_2);
 return FUNC_2(VAR_5);
}

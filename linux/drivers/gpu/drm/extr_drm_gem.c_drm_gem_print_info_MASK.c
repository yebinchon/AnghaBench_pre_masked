
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_printer {int dummy; } ;
struct drm_gem_object {char* name; char* size; TYPE_3__* dev; TYPE_1__* funcs; scalar_t__ import_attach; int vma_node; int refcount; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {int (* gem_print_info ) (struct drm_printer*,unsigned int,struct drm_gem_object const*) ;} ;
struct TYPE_4__ {int (* print_info ) (struct drm_printer*,unsigned int,struct drm_gem_object const*) ;} ;


 int FUNC_0 (struct drm_printer*,unsigned int,char*,char*) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (struct drm_printer*,unsigned int,struct drm_gem_object const*) ;
 int FUNC_4 (struct drm_printer*,unsigned int,struct drm_gem_object const*) ;

void FUNC_5(struct drm_printer *VAR_0, unsigned int VAR_1,
   const struct drm_gem_object *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, "name=%d\n", VAR_2->name);
 FUNC_0(VAR_0, VAR_1, "refcount=%u\n",
     FUNC_2(&VAR_2->refcount));
 FUNC_0(VAR_0, VAR_1, "start=%08lx\n",
     FUNC_1(&VAR_2->vma_node));
 FUNC_0(VAR_0, VAR_1, "size=%zu\n", VAR_2->size);
 FUNC_0(VAR_0, VAR_1, "imported=%s\n",
     VAR_2->import_attach ? "yes" : "no");

 if (VAR_2->funcs && VAR_2->funcs->print_info)
  VAR_2->funcs->print_info(VAR_0, VAR_1, VAR_2);
 else if (VAR_2->dev->driver->gem_print_info)
  VAR_2->dev->driver->gem_print_info(VAR_0, VAR_1, VAR_2);
}

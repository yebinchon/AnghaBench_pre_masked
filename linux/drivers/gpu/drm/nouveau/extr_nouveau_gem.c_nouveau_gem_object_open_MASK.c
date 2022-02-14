
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ oclass; } ;
struct TYPE_8__ {TYPE_2__ object; } ;
struct nouveau_vmm {TYPE_3__ vmm; int cli; } ;
struct nouveau_vma {int dummy; } ;
struct nouveau_drm {TYPE_1__* dev; } ;
struct nouveau_cli {struct nouveau_vmm vmm; struct nouveau_vmm svm; } ;
struct TYPE_9__ {int bdev; } ;
struct nouveau_bo {TYPE_4__ bo; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_cli* FUNC_1 (struct drm_file*) ;
 struct nouveau_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct nouveau_bo*,struct nouveau_vmm*,struct nouveau_vma**) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (TYPE_4__*,int,int,int *) ;
 int FUNC_8 (TYPE_4__*) ;

int
FUNC_9(struct drm_gem_object *VAR_2, struct drm_file *VAR_3)
{
 struct nouveau_cli *VAR_4 = FUNC_1(VAR_3);
 struct nouveau_bo *VAR_5 = FUNC_2(VAR_2);
 struct nouveau_drm *VAR_6 = FUNC_0(VAR_5->bo.bdev);
 struct device *VAR_7 = VAR_6->dev->dev;
 struct nouveau_vmm *VAR_8 = VAR_4->svm.cli ? &VAR_4->svm : &VAR_4->vmm;
 struct nouveau_vma *VAR_9;
 int VAR_10;

 if (VAR_8->vmm.object.oclass < VAR_1)
  return 0;

 VAR_10 = FUNC_7(&VAR_5->bo, 0, 0, ((void*)0));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10 < 0 && VAR_10 != -VAR_0)
  goto out;

 VAR_10 = FUNC_3(VAR_5, VAR_8, &VAR_9);
 FUNC_5(VAR_7);
 FUNC_6(VAR_7);
out:
 FUNC_8(&VAR_5->bo);
 return VAR_10;
}

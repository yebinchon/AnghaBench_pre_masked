
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_fault_t ;
struct vm_fault {scalar_t__ address; int vma; int page; } ;
struct nouveau_fence {int dummy; } ;
struct nouveau_drm {TYPE_2__* dev; } ;
struct TYPE_3__ {int chan; } ;
struct nouveau_dmem {TYPE_1__ migrate; struct nouveau_drm* drm; } ;
struct migrate_vma {unsigned long* src; unsigned long* dst; int cpages; scalar_t__ end; scalar_t__ start; int vma; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct migrate_vma*) ;
 int FUNC_2 (struct migrate_vma*) ;
 scalar_t__ FUNC_3 (struct migrate_vma*) ;
 scalar_t__ FUNC_4 (struct nouveau_drm*,struct vm_fault*,struct migrate_vma*,int *) ;
 int FUNC_5 (struct nouveau_fence**) ;
 int FUNC_6 (int ,int,struct nouveau_fence**) ;
 struct nouveau_dmem* FUNC_7 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_8(struct vm_fault *VAR_3)
{
 struct nouveau_dmem *VAR_4 = FUNC_7(VAR_3->page);
 struct nouveau_drm *VAR_5 = VAR_4->drm;
 struct nouveau_fence *VAR_6;
 unsigned long VAR_7 = 0, VAR_8 = 0;
 dma_addr_t VAR_9 = 0;
 vm_fault_t VAR_10;
 struct migrate_vma VAR_11 = {
  .vma = VAR_3->vma,
  .start = VAR_3->address,
  .end = VAR_3->address + VAR_1,
  .src = &VAR_7,
  .dst = &VAR_8,
 };






 if (FUNC_3(&VAR_11) < 0)
  return VAR_2;
 if (!VAR_11.cpages)
  return 0;

 VAR_10 = FUNC_4(VAR_5, VAR_3, &VAR_11, &VAR_9);
 if (VAR_10 || VAR_8 == 0)
  goto done;

 FUNC_6(VAR_4->migrate.chan, 0, &VAR_6);
 FUNC_2(&VAR_11);
 FUNC_5(&VAR_6);
 FUNC_0(VAR_5->dev->dev, VAR_9, VAR_1, VAR_0);
done:
 FUNC_1(&VAR_11);
 return VAR_10;
}

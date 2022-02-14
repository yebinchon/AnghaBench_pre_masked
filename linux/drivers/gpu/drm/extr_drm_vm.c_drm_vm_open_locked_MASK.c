
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct drm_vma_entry {int head; int pid; struct vm_area_struct* vma; } ;
struct drm_device {int vmalist; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct drm_vma_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_2,
          struct vm_area_struct *VAR_3)
{
 struct drm_vma_entry *VAR_4;

 FUNC_0("0x%08lx,0x%08lx\n",
    VAR_3->vm_start, VAR_3->vm_end - VAR_3->vm_start);

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (VAR_4) {
  VAR_4->vma = VAR_3;
  VAR_4->pid = VAR_1->pid;
  FUNC_2(&VAR_4->head, &VAR_2->vmalist);
 }
}

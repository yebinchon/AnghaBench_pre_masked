
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long address; struct page* page; struct vm_area_struct* vma; } ;
struct vm_area_struct {unsigned long vm_start; TYPE_2__* vm_file; } ;
struct page {int dummy; } ;
struct drm_file {TYPE_1__* minor; } ;
struct drm_device_dma {scalar_t__* pagelist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct TYPE_4__ {struct drm_file* private_data; } ;
struct TYPE_3__ {struct drm_device* dev; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (void*) ;

__attribute__((used)) static vm_fault_t FUNC_3(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct drm_file *VAR_4 = VAR_3->vm_file->private_data;
 struct drm_device *VAR_5 = VAR_4->minor->dev;
 struct drm_device_dma *VAR_6 = VAR_5->dma;
 unsigned long VAR_7;
 unsigned long VAR_8;
 struct page *VAR_9;

 if (!VAR_6)
  return VAR_1;
 if (!VAR_6->pagelist)
  return VAR_1;

 VAR_7 = VAR_2->address - VAR_3->vm_start;

 VAR_8 = VAR_7 >> VAR_0;
 VAR_9 = FUNC_2((void *)VAR_6->pagelist[VAR_8]);

 FUNC_1(VAR_9);
 VAR_2->page = VAR_9;

 FUNC_0("dma_fault 0x%lx (page %lu)\n", VAR_7, VAR_8);
 return 0;
}

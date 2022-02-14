
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long address; struct page* page; struct vm_area_struct* vma; } ;
struct vm_area_struct {unsigned long vm_start; TYPE_1__* vm_file; struct drm_local_map* vm_private_data; } ;
struct page {int dummy; } ;
struct drm_sg_mem {struct page** pagelist; scalar_t__ virtual; } ;
struct drm_local_map {unsigned long offset; } ;
struct drm_file {TYPE_2__* minor; } ;
struct drm_device {struct drm_sg_mem* sg; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_3__ {struct drm_file* private_data; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;

__attribute__((used)) static vm_fault_t FUNC_1(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct drm_local_map *VAR_4 = VAR_3->vm_private_data;
 struct drm_file *VAR_5 = VAR_3->vm_file->private_data;
 struct drm_device *VAR_6 = VAR_5->minor->dev;
 struct drm_sg_mem *VAR_7 = VAR_6->sg;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 struct page *VAR_11;

 if (!VAR_7)
  return VAR_1;
 if (!VAR_7->pagelist)
  return VAR_1;

 VAR_8 = VAR_2->address - VAR_3->vm_start;
 VAR_9 = VAR_4->offset - (unsigned long)VAR_6->sg->virtual;
 VAR_10 = (VAR_8 >> VAR_0) + (VAR_9 >> VAR_0);
 VAR_11 = VAR_7->pagelist[VAR_10];
 FUNC_0(VAR_11);
 VAR_2->page = VAR_11;

 return 0;
}

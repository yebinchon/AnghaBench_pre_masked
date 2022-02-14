
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct file {int dummy; } ;
struct drm_gem_object {int dma_buf; scalar_t__ import_attach; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct vm_area_struct*,int ) ;
 int FUNC_2 (struct file*,struct vm_area_struct*) ;
 int FUNC_3 (struct drm_gem_object*,struct vm_area_struct*) ;

int FUNC_4(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct drm_gem_object *VAR_2;
 int VAR_3;


 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0("failed to mmap.\n");
  return VAR_3;
 }

 VAR_2 = VAR_1->vm_private_data;

 if (VAR_2->import_attach)
  return FUNC_1(VAR_2->dma_buf, VAR_1, 0);

 return FUNC_3(VAR_2, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct file {int dummy; } ;
struct drm_vram_mm {int bdev; } ;


 int FUNC_0 (struct file*,struct vm_area_struct*,int *) ;

int FUNC_1(struct file *VAR_0, struct vm_area_struct *VAR_1,
       struct drm_vram_mm *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, &VAR_2->bdev);
}

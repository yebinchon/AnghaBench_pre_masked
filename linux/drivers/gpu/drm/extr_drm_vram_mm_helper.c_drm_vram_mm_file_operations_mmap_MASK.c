
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
struct drm_device {int vram_mm; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct file*,struct vm_area_struct*,int ) ;

int FUNC_2(
 struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct drm_file *VAR_3 = VAR_1->private_data;
 struct drm_device *VAR_4 = VAR_3->minor->dev;

 if (FUNC_0(!VAR_4->vram_mm, "VRAM MM not initialized"))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_4->vram_mm);
}

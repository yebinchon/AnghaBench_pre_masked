
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
struct drm_device {int struct_mutex; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct drm_file *VAR_3 = VAR_1->private_data;
 struct drm_device *VAR_4 = VAR_3->minor->dev;
 int VAR_5;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 FUNC_2(&VAR_4->struct_mutex);
 VAR_5 = FUNC_1(VAR_1, VAR_2);
 FUNC_3(&VAR_4->struct_mutex);

 return VAR_5;
}

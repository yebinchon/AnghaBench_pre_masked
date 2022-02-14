
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; } ;
struct drm_file {TYPE_2__* minor; } ;
struct drm_device {int struct_mutex; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_3__ {struct drm_file* private_data; } ;


 int FUNC_0 (struct drm_device*,struct vm_area_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_0)
{
 struct drm_file *VAR_1 = VAR_0->vm_file->private_data;
 struct drm_device *VAR_2 = VAR_1->minor->dev;

 FUNC_1(&VAR_2->struct_mutex);
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(&VAR_2->struct_mutex);
}

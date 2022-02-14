
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct drm_file* private_data; } ;
struct drm_file {int lhead; TYPE_1__* minor; } ;
struct drm_device {int filelist_mutex; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int FUNC_0 (struct drm_file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct file *VAR_0)
{
 struct drm_file *VAR_1 = VAR_0->private_data;
 struct drm_device *VAR_2 = VAR_1->minor->dev;

 FUNC_2(&VAR_2->filelist_mutex);
 FUNC_1(&VAR_1->lhead);
 FUNC_3(&VAR_2->filelist_mutex);

 FUNC_0(VAR_1);
}

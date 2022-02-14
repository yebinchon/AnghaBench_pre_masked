
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct drm_file* private_data; } ;
struct drm_minor {struct drm_device* dev; } ;
struct drm_file {struct drm_minor* minor; } ;
struct drm_device {int open_count; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct file*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_minor*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct inode *VAR_1, struct file *VAR_2)
{
 struct drm_file *VAR_3 = VAR_2->private_data;
 struct drm_minor *VAR_4 = VAR_3->minor;
 struct drm_device *VAR_5 = VAR_4->dev;

 FUNC_4(&VAR_0);

 FUNC_0("open_count = %d\n", VAR_5->open_count);

 FUNC_1(VAR_2);

 if (!--VAR_5->open_count)
  FUNC_2(VAR_5);

 FUNC_5(&VAR_0);

 FUNC_3(VAR_4);

 return 0;
}

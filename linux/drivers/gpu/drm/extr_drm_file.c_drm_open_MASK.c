
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mapping; } ;
struct drm_minor {struct drm_device* dev; } ;
struct drm_device {int open_count; TYPE_1__* anon_inode; } ;
struct TYPE_2__ {int i_mapping; } ;


 scalar_t__ FUNC_0 (struct drm_minor*) ;
 int FUNC_1 (struct drm_minor*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct drm_device*) ;
 struct drm_minor* FUNC_4 (int ) ;
 int FUNC_5 (struct drm_minor*) ;
 int FUNC_6 (struct file*,struct drm_minor*) ;
 int FUNC_7 (struct inode*) ;

int FUNC_8(struct inode *VAR_0, struct file *VAR_1)
{
 struct drm_device *VAR_2;
 struct drm_minor *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_4(FUNC_7(VAR_0));
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2 = VAR_3->dev;
 if (!VAR_2->open_count++)
  VAR_5 = 1;


 VAR_1->f_mapping = VAR_2->anon_inode->i_mapping;

 VAR_4 = FUNC_6(VAR_1, VAR_3);
 if (VAR_4)
  goto err_undo;
 if (VAR_5) {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4) {
   FUNC_2(VAR_1);
   goto err_undo;
  }
 }
 return 0;

err_undo:
 VAR_2->open_count--;
 FUNC_5(VAR_3);
 return VAR_4;
}

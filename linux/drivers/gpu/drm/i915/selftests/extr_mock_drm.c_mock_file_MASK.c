
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {struct drm_file* private_data; int i_rdev; } ;
struct file {struct drm_file* private_data; int i_rdev; } ;
struct TYPE_4__ {TYPE_1__* primary; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct drm_file {int authenticated; int filp; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 struct drm_file* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int) ;

struct drm_file *FUNC_5(struct drm_i915_private *VAR_3)
{
 struct file *VAR_4;
 struct inode *VAR_5;
 struct drm_file *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_5->i_rdev = VAR_3->drm.primary->index;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_7 = -VAR_0;
  goto err_inode;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_4);
 if (VAR_7)
  goto err_filp;

 VAR_6 = VAR_4->private_data;
 FUNC_4(&VAR_6->filp, VAR_2, sizeof(VAR_6->filp));
 VAR_6->authenticated = 1;

 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
 return VAR_6;

err_filp:
 FUNC_2(VAR_4);
err_inode:
 FUNC_2(VAR_5);
err:
 return FUNC_0(VAR_7);
}

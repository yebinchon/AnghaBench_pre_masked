
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct drm_file* private_data; int * f_op; } ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct amdgpu_fpriv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct file *VAR_2, struct amdgpu_fpriv **VAR_3)
{
        struct drm_file *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->f_op != &VAR_1) {
  return -VAR_0;
 }

 VAR_4 = VAR_2->private_data;
 *VAR_3 = VAR_4->driver_priv;
 return 0;
}

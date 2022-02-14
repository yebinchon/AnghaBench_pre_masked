
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct drm_file* private_data; } ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct amdgpu_fpriv {int vm; int ctx_mgr; } ;
typedef int fl_owner_t ;


 long VAR_0 ;
 long FUNC_0 (int *,long) ;
 long FUNC_1 (int *,long) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct drm_file *VAR_3 = VAR_1->private_data;
 struct amdgpu_fpriv *VAR_4 = VAR_3->driver_priv;
 long VAR_5 = VAR_0;

 VAR_5 = FUNC_0(&VAR_4->ctx_mgr, VAR_5);
 VAR_5 = FUNC_1(&VAR_4->vm, VAR_5);

 return VAR_5 >= 0 ? 0 : VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_dev {int dummy; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_vm {scalar_t__ process_info; } ;
struct amdgpu_fpriv {struct amdgpu_vm vm; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_vm*,unsigned int) ;
 struct amdgpu_device* FUNC_1 (struct kgd_dev*) ;
 int FUNC_2 (struct amdgpu_vm*,void**,struct dma_fence**) ;

int FUNC_3(struct kgd_dev *VAR_1,
        struct file *VAR_2, unsigned int VAR_3,
        void **VAR_4, void **VAR_5,
        struct dma_fence **VAR_6)
{
 struct amdgpu_device *VAR_7 = FUNC_1(VAR_1);
 struct drm_file *VAR_8 = VAR_2->private_data;
 struct amdgpu_fpriv *VAR_9 = VAR_8->driver_priv;
 struct amdgpu_vm *VAR_10 = &VAR_9->vm;
 int VAR_11;


 if (VAR_10->process_info)
  return -VAR_0;


 VAR_11 = FUNC_0(VAR_7, VAR_10, VAR_3);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_2(VAR_10, VAR_5, VAR_6);
 if (VAR_11)
  return VAR_11;

 *VAR_4 = (void *)VAR_10;

 return 0;
}

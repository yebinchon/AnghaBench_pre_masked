
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct kgd_mem {int mapping_flags; int domain; int sync; int process_info; scalar_t__ mapped_to_gpu_memory; int va; int bo; int lock; int bo_va_list; } ;
struct kgd_dev {int dummy; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct dma_buf {struct drm_gem_object* priv; int * ops; } ;
struct amdgpu_vm {int process_info; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo {int preferred_domains; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kgd_mem*,int ,int) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int VAR_9 ;
 int FUNC_5 (int *) ;
 struct amdgpu_bo* FUNC_6 (struct drm_gem_object*) ;
 struct kgd_mem* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct kgd_dev *VAR_10,
          struct dma_buf *VAR_11,
          uint64_t VAR_12, void *VAR_13,
          struct kgd_mem **VAR_14, uint64_t *VAR_15,
          uint64_t *VAR_16)
{
 struct amdgpu_device *VAR_17 = (struct amdgpu_device *)VAR_10;
 struct drm_gem_object *VAR_18;
 struct amdgpu_bo *VAR_19;
 struct amdgpu_vm *VAR_20 = (struct amdgpu_vm *)VAR_13;

 if (VAR_11->ops != &VAR_9)

  return -VAR_6;

 VAR_18 = VAR_11->priv;
 if (VAR_18->dev->dev_private != VAR_17)

  return -VAR_6;

 VAR_19 = FUNC_6(VAR_18);
 if (!(VAR_19->preferred_domains & (VAR_1 |
        VAR_0)))

  return -VAR_6;

 *VAR_14 = FUNC_7(sizeof(struct kgd_mem), VAR_8);
 if (!*VAR_14)
  return -VAR_7;

 if (VAR_15)
  *VAR_15 = FUNC_4(VAR_19);

 if (VAR_16)
  *VAR_16 = FUNC_2(VAR_19);

 FUNC_0(&(*VAR_14)->bo_va_list);
 FUNC_8(&(*VAR_14)->lock);
 (*VAR_14)->mapping_flags =
  VAR_4 | VAR_5 |
  VAR_3 | VAR_2;

 (*VAR_14)->bo = FUNC_3(VAR_19);
 (*VAR_14)->va = VAR_12;
 (*VAR_14)->domain = (VAR_19->preferred_domains & VAR_1) ?
  VAR_1 : VAR_0;
 (*VAR_14)->mapped_to_gpu_memory = 0;
 (*VAR_14)->process_info = VAR_20->process_info;
 FUNC_1(*VAR_14, VAR_20->process_info, 0);
 FUNC_5(&(*VAR_14)->sync);

 return 0;
}

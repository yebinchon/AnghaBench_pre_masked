
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct drm_gem_object {TYPE_2__* dev; } ;
struct dma_buf {struct drm_gem_object* priv; int * ops; } ;
struct amdgpu_device {TYPE_1__* ddev; } ;
struct amdgpu_bo {int preferred_domains; int flags; int metadata_size; } ;
struct TYPE_4__ {scalar_t__ driver; struct amdgpu_device* dev_private; } ;
struct TYPE_3__ {scalar_t__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct dma_buf*) ;
 int FUNC_1 (struct dma_buf*) ;
 int FUNC_2 (struct amdgpu_bo*,void*,size_t,int *,int *) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 int VAR_7 ;
 struct dma_buf* FUNC_4 (int) ;
 int FUNC_5 (struct dma_buf*) ;
 struct amdgpu_bo* FUNC_6 (struct drm_gem_object*) ;

int FUNC_7(struct kgd_dev *VAR_8, int VAR_9,
      struct kgd_dev **VAR_10,
      uint64_t *VAR_11, void *VAR_12,
      size_t VAR_13, uint32_t *VAR_14,
      uint32_t *VAR_15)
{
 struct amdgpu_device *VAR_16 = (struct amdgpu_device *)VAR_8;
 struct dma_buf *VAR_17;
 struct drm_gem_object *VAR_18;
 struct amdgpu_bo *VAR_19;
 uint64_t VAR_20;
 int VAR_21 = -VAR_6;

 VAR_17 = FUNC_4(VAR_9);
 if (FUNC_0(VAR_17))
  return FUNC_1(VAR_17);

 if (VAR_17->ops != &VAR_7)

  goto out_put;

 VAR_18 = VAR_17->priv;
 if (VAR_18->dev->driver != VAR_16->ddev->driver)

  goto out_put;

 VAR_16 = VAR_18->dev->dev_private;
 VAR_19 = FUNC_6(VAR_18);
 if (!(VAR_19->preferred_domains & (VAR_5 |
        VAR_4)))

  goto out_put;

 VAR_21 = 0;
 if (VAR_10)
  *VAR_10 = (struct kgd_dev *)VAR_16;
 if (VAR_11)
  *VAR_11 = FUNC_3(VAR_19);
 if (VAR_14)
  *VAR_14 = VAR_19->metadata_size;
 if (VAR_12)
  VAR_21 = FUNC_2(VAR_19, VAR_12, VAR_13,
        VAR_14, &VAR_20);
 if (VAR_15) {
  *VAR_15 = (VAR_19->preferred_domains & VAR_5) ?
   VAR_2 : VAR_0;

  if (VAR_19->flags & VAR_3)
   *VAR_15 |= VAR_1;
 }

out_put:
 FUNC_5(VAR_17);
 return VAR_21;
}

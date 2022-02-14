
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct panfrost_perfcnt {struct drm_gem_shmem_object* buf; TYPE_2__* bo; struct panfrost_file_priv* user; int dump_comp; int bosize; } ;
struct panfrost_file_priv {int dummy; } ;
struct panfrost_device {struct panfrost_perfcnt* perfcnt; int ddev; int dev; } ;
struct drm_gem_shmem_object {int base; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct drm_gem_shmem_object*) ;
 int FUNC_4 (struct drm_gem_shmem_object*) ;
 int FUNC_5 (int *) ;
 struct drm_gem_shmem_object* FUNC_6 (int ,int ) ;
 struct drm_gem_shmem_object* FUNC_7 (int *) ;
 int FUNC_8 (int *,struct drm_gem_shmem_object*) ;
 int FUNC_9 (struct panfrost_device*,int ,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct panfrost_device*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (struct panfrost_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 TYPE_2__* FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static int FUNC_18(struct panfrost_device *VAR_15,
       struct panfrost_file_priv *VAR_16,
       unsigned int VAR_17)
{
 struct panfrost_perfcnt *VAR_18 = VAR_15->perfcnt;
 struct drm_gem_shmem_object *VAR_19;
 u32 VAR_20;
 int VAR_21;

 if (VAR_16 == VAR_18->user)
  return 0;
 else if (VAR_18->user)
  return -VAR_0;

 VAR_21 = FUNC_14(VAR_15->dev);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_19 = FUNC_6(VAR_15->ddev, VAR_18->bosize);
 if (FUNC_3(VAR_19))
  return FUNC_4(VAR_19);

 VAR_18->bo = FUNC_16(&VAR_19->base);


 VAR_21 = FUNC_12(VAR_18->bo);
 if (VAR_21)
  goto err_put_bo;

 VAR_18->buf = FUNC_7(&VAR_19->base);
 if (FUNC_3(VAR_18->buf)) {
  VAR_21 = FUNC_4(VAR_18->buf);
  goto err_put_bo;
 }





 FUNC_15(&VAR_15->perfcnt->dump_comp);
 FUNC_9(VAR_15, VAR_5,
    VAR_6 |
    VAR_7);
 FUNC_9(VAR_15, VAR_2, VAR_4);
 FUNC_9(VAR_15, VAR_2, VAR_3);
 VAR_21 = FUNC_17(&VAR_15->perfcnt->dump_comp,
       FUNC_10(1000));
 if (!VAR_21) {
  VAR_21 = -VAR_1;
  goto err_vunmap;
 }

 VAR_18->user = VAR_16;






 VAR_20 = FUNC_0(0) |
       FUNC_1(VAR_9);





 if (FUNC_13(VAR_15))
  VAR_20 |= FUNC_2(VAR_17);

 FUNC_9(VAR_15, VAR_10, 0xffffffff);
 FUNC_9(VAR_15, VAR_12, 0xffffffff);
 FUNC_9(VAR_15, VAR_11, 0xffffffff);





 if (FUNC_11(VAR_15, VAR_14))
  FUNC_9(VAR_15, VAR_13, 0);
 else
  FUNC_9(VAR_15, VAR_13, 0xffffffff);

 FUNC_9(VAR_15, VAR_8, VAR_20);

 if (FUNC_11(VAR_15, VAR_14))
  FUNC_9(VAR_15, VAR_13, 0xffffffff);

 return 0;

err_vunmap:
 FUNC_8(&VAR_18->bo->base.base, VAR_18->buf);
err_put_bo:
 FUNC_5(&VAR_19->base);
 return VAR_21;
}

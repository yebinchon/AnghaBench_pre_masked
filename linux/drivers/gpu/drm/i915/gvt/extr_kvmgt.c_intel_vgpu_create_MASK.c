
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct kobject {int dummy; } ;
struct intel_vgpu_type {int dummy; } ;
struct TYPE_4__ {struct mdev_device* mdev; int release_work; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct intel_vgpu* (* vgpu_create ) (void*,struct intel_vgpu_type*) ;struct intel_vgpu_type* (* gvt_find_vgpu_type ) (void*,int ) ;} ;
struct TYPE_5__ {void* gvt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct intel_vgpu*) ;
 int FUNC_2 (struct intel_vgpu*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int ) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_7 (struct device*) ;
 int FUNC_8 (struct kobject*) ;
 int FUNC_9 (struct mdev_device*) ;
 struct device* FUNC_10 (struct mdev_device*) ;
 int FUNC_11 (struct mdev_device*,struct intel_vgpu*) ;
 struct intel_vgpu_type* FUNC_12 (void*,int ) ;
 struct intel_vgpu* FUNC_13 (void*,struct intel_vgpu_type*) ;

__attribute__((used)) static int FUNC_14(struct kobject *VAR_4, struct mdev_device *VAR_5)
{
 struct intel_vgpu *VAR_6 = ((void*)0);
 struct intel_vgpu_type *VAR_7;
 struct device *VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_10(VAR_5);
 VAR_9 = FUNC_7(VAR_8)->gvt;

 VAR_7 = VAR_2->gvt_find_vgpu_type(VAR_9, FUNC_8(VAR_4));
 if (!VAR_7) {
  FUNC_6("failed to find type %s to create\n",
      FUNC_8(VAR_4));
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_6 = VAR_2->vgpu_create(VAR_9, VAR_7);
 if (FUNC_1(VAR_6)) {
  VAR_10 = VAR_6 == ((void*)0) ? -VAR_0 : FUNC_2(VAR_6);
  FUNC_5("failed to create intel vgpu: %d\n", VAR_10);
  goto out;
 }

 FUNC_0(&VAR_6->vdev.release_work, VAR_3);

 VAR_6->vdev.mdev = VAR_5;
 FUNC_11(VAR_5, VAR_6);

 FUNC_4("intel_vgpu_create succeeded for mdev: %s\n",
       FUNC_3(FUNC_9(VAR_5)));
 VAR_10 = 0;

out:
 return VAR_10;
}

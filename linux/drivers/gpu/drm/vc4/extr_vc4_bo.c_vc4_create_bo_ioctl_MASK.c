
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_file {int dummy; } ;
struct vc4_dev {int dummy; } ;
struct TYPE_2__ {int base; } ;
struct vc4_bo {TYPE_1__ base; int madv; } ;
struct drm_vc4_create_bo {int handle; int size; } ;
struct drm_file {struct vc4_file* driver_priv; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct vc4_bo*) ;
 int FUNC_1 (struct vc4_bo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_file*,int *,int *) ;
 int FUNC_3 (int *) ;
 struct vc4_dev* FUNC_4 (struct drm_device*) ;
 struct vc4_bo* FUNC_5 (struct drm_device*,int ,int,int ) ;
 int FUNC_6 (struct vc4_dev*,struct vc4_file*) ;

int FUNC_7(struct drm_device *VAR_2, void *VAR_3,
   struct drm_file *VAR_4)
{
 struct drm_vc4_create_bo *VAR_5 = VAR_3;
 struct vc4_file *VAR_6 = VAR_4->driver_priv;
 struct vc4_dev *VAR_7 = FUNC_4(VAR_2);
 struct vc4_bo *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_9 = FUNC_6(VAR_7, VAR_6);
 if (VAR_9)
  return VAR_9;





 VAR_8 = FUNC_5(VAR_2, VAR_5->size, 0, VAR_0);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_8->madv = VAR_1;

 VAR_9 = FUNC_2(VAR_4, &VAR_8->base.base, &VAR_5->handle);
 FUNC_3(&VAR_8->base.base);

 return VAR_9;
}

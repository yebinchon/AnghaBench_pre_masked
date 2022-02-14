
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {uintptr_t ptr; int ro; int mm; } ;
struct etnaviv_gem_object {int base; TYPE_1__ userptr; int lock; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct drm_file*,int *,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int,int ,int *,struct etnaviv_gem_object**) ;
 int FUNC_3 (struct drm_device*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(struct drm_device *VAR_5, struct drm_file *VAR_6,
 uintptr_t VAR_7, u32 VAR_8, u32 VAR_9, u32 *VAR_10)
{
 struct etnaviv_gem_object *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_5, VAR_8, VAR_0,
          &VAR_3, &VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_4(&VAR_11->lock, &VAR_4);

 VAR_11->userptr.ptr = VAR_7;
 VAR_11->userptr.mm = VAR_2->mm;
 VAR_11->userptr.ro = !(VAR_9 & VAR_1);

 FUNC_3(VAR_5, &VAR_11->base);

 VAR_12 = FUNC_0(VAR_6, &VAR_11->base, VAR_10);


 FUNC_1(&VAR_11->base);
 return VAR_12;
}

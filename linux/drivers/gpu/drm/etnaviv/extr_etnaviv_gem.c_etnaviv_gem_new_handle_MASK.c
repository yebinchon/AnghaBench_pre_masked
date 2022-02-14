
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_gem_object {TYPE_1__* filp; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int f_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_gem_object*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_device*,int ,int ,int *,struct drm_gem_object**) ;
 int FUNC_5 (struct drm_device*,struct drm_gem_object*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int) ;
 TYPE_2__* FUNC_8 (struct drm_gem_object*) ;

int FUNC_9(struct drm_device *VAR_5, struct drm_file *VAR_6,
 u32 VAR_7, u32 VAR_8, u32 *VAR_9)
{
 struct drm_gem_object *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_7 = FUNC_0(VAR_7);

 VAR_11 = FUNC_4(VAR_5, VAR_7, VAR_8,
       &VAR_3, &VAR_10);
 if (VAR_11)
  goto fail;

 FUNC_6(&FUNC_8(VAR_10)->lock, &VAR_4);

 VAR_11 = FUNC_2(VAR_5, VAR_10, VAR_7);
 if (VAR_11)
  goto fail;







 FUNC_7(VAR_10->filp->f_mapping, VAR_0 |
        VAR_2 | VAR_1);

 FUNC_5(VAR_5, VAR_10);

 VAR_11 = FUNC_1(VAR_6, VAR_10, VAR_9);


fail:
 FUNC_3(VAR_10);

 return VAR_11;
}

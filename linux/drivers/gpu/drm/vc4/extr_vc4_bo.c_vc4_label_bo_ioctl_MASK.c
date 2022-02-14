
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int bo_lock; } ;
struct drm_vc4_label_bo {int handle; scalar_t__ len; int name; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int ,scalar_t__) ;
 struct vc4_dev* FUNC_9 (struct drm_device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct drm_gem_object*,int) ;
 int FUNC_12 (struct vc4_dev*,char*) ;

int FUNC_13(struct drm_device *VAR_3, void *VAR_4,
         struct drm_file *VAR_5)
{
 struct vc4_dev *VAR_6 = FUNC_9(VAR_3);
 struct drm_vc4_label_bo *VAR_7 = VAR_4;
 char *VAR_8;
 struct drm_gem_object *VAR_9;
 int VAR_10 = 0, VAR_11;

 if (!VAR_7->len)
  return -VAR_0;

 VAR_8 = FUNC_8(FUNC_10(VAR_7->name), VAR_7->len + 1);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_9 = FUNC_3(VAR_5, VAR_7->handle);
 if (!VAR_9) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_7->handle);
  FUNC_5(VAR_8);
  return -VAR_1;
 }

 FUNC_6(&VAR_6->bo_lock);
 VAR_11 = FUNC_12(VAR_6, VAR_8);
 if (VAR_11 != -1)
  FUNC_11(VAR_9, VAR_11);
 else
  VAR_10 = -VAR_2;
 FUNC_7(&VAR_6->bo_lock);

 FUNC_4(VAR_9);

 return VAR_10;
}

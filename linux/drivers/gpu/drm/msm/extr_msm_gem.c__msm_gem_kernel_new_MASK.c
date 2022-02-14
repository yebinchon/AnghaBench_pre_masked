
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct msm_gem_address_space {int dummy; } ;
typedef void drm_gem_object ;
struct drm_device {int dummy; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (struct drm_device*,int ,int ,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,struct msm_gem_address_space*,int *) ;
 void* FUNC_8 (void*) ;
 int FUNC_9 (void*,struct msm_gem_address_space*) ;

__attribute__((used)) static void *FUNC_10(struct drm_device *VAR_0, uint32_t VAR_1,
  uint32_t VAR_2, struct msm_gem_address_space *VAR_3,
  struct drm_gem_object **VAR_4, uint64_t *VAR_5, bool VAR_6)
{
 void *VAR_7;
 struct drm_gem_object *VAR_8 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_6);
 int VAR_9;

 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);

 if (VAR_5) {
  VAR_9 = FUNC_7(VAR_8, VAR_3, VAR_5);
  if (VAR_9)
   goto err;
 }

 VAR_7 = FUNC_8(VAR_8);
 if (FUNC_2(VAR_7)) {
  FUNC_9(VAR_8, VAR_3);
  VAR_9 = FUNC_3(VAR_7);
  goto err;
 }

 if (VAR_4)
  *VAR_4 = VAR_8;

 return VAR_7;
err:
 if (VAR_6)
  FUNC_5(VAR_8);
 else
  FUNC_6(VAR_8);

 return FUNC_1(VAR_9);

}

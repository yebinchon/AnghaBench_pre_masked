
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vkms_gem_object {int pages_lock; int gem; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct vkms_gem_object* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,int *,int ) ;
 int FUNC_2 (struct vkms_gem_object*) ;
 struct vkms_gem_object* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct vkms_gem_object *FUNC_6(struct drm_device *VAR_3,
       u64 VAR_4)
{
 struct vkms_gem_object *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_5(VAR_4, VAR_2);
 VAR_6 = FUNC_1(VAR_3, &VAR_5->gem, VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_5);
  return FUNC_0(VAR_6);
 }

 FUNC_4(&VAR_5->pages_lock);

 return VAR_5;
}

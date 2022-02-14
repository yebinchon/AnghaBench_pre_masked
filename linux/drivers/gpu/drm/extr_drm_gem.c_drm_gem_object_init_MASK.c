
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct drm_gem_object {struct file* filp; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*,struct drm_gem_object*,size_t) ;
 struct file* FUNC_3 (char*,size_t,int ) ;

int FUNC_4(struct drm_device *VAR_1,
   struct drm_gem_object *VAR_2, size_t VAR_3)
{
 struct file *VAR_4;

 FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_3("drm mm object", VAR_3, VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_2->filp = VAR_4;

 return 0;
}

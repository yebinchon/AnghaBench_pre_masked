
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dev; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct drm_file*,struct drm_gem_object*,unsigned int*) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct drm_gem_object *VAR_0,
     struct drm_file *VAR_1,
     unsigned int *VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(FUNC_3(VAR_0->dev), "gem handle = 0x%x\n", *VAR_2);


 FUNC_2(VAR_0);

 return 0;
}

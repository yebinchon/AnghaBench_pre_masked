
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_gem_obj {int base; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct mtk_drm_gem_obj* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_device*,int *,unsigned long) ;
 int FUNC_3 (struct mtk_drm_gem_obj*) ;
 struct mtk_drm_gem_obj* FUNC_4 (int,int ) ;
 unsigned long FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static struct mtk_drm_gem_obj *FUNC_6(struct drm_device *VAR_3,
      unsigned long VAR_4)
{
 struct mtk_drm_gem_obj *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_4, VAR_2);

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_2(VAR_3, &VAR_5->base, VAR_4);
 if (VAR_6 < 0) {
  FUNC_0("failed to initialize gem object\n");
  FUNC_3(VAR_5);
  return FUNC_1(VAR_6);
 }

 return VAR_5;
}

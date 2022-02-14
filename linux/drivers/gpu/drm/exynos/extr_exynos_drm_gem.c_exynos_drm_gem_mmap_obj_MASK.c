
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; } ;
struct exynos_drm_gem {int flags; } ;
struct drm_gem_object {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct exynos_drm_gem*,struct vm_area_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct exynos_drm_gem* FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct drm_gem_object *VAR_2,
       struct vm_area_struct *VAR_3)
{
 struct exynos_drm_gem *VAR_4 = FUNC_6(VAR_2);
 int VAR_5;

 FUNC_0(FUNC_5(VAR_2->dev), "flags = 0x%x\n",
     VAR_4->flags);


 if (VAR_4->flags & VAR_0)
  VAR_3->vm_page_prot = FUNC_7(VAR_3->vm_flags);
 else if (VAR_4->flags & VAR_1)
  VAR_3->vm_page_prot =
   FUNC_4(FUNC_7(VAR_3->vm_flags));
 else
  VAR_3->vm_page_prot =
   FUNC_3(FUNC_7(VAR_3->vm_flags));

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  goto err_close_vm;

 return VAR_5;

err_close_vm:
 FUNC_1(VAR_3);

 return VAR_5;
}

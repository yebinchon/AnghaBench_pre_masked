
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; int vm_file; scalar_t__ vm_pgoff; } ;
struct msm_gem_object {int flags; } ;
struct drm_gem_object {int filp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct msm_gem_object* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct drm_gem_object *VAR_4,
  struct vm_area_struct *VAR_5)
{
 struct msm_gem_object *VAR_6 = FUNC_4(VAR_4);

 VAR_5->vm_flags &= ~VAR_3;
 VAR_5->vm_flags |= VAR_2;

 if (VAR_6->flags & VAR_1) {
  VAR_5->vm_page_prot = FUNC_3(FUNC_5(VAR_5->vm_flags));
 } else if (VAR_6->flags & VAR_0) {
  VAR_5->vm_page_prot = FUNC_2(FUNC_5(VAR_5->vm_flags));
 } else {





  FUNC_0(VAR_5->vm_file);
  FUNC_1(VAR_4->filp);
  VAR_5->vm_pgoff = 0;
  VAR_5->vm_file = VAR_4->filp;

  VAR_5->vm_page_prot = FUNC_5(VAR_5->vm_flags);
 }

 return 0;
}

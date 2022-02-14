
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; int vm_file; scalar_t__ vm_pgoff; } ;
struct omap_gem_object {int flags; } ;
struct drm_gem_object {int filp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct omap_gem_object* FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct drm_gem_object *VAR_5,
  struct vm_area_struct *VAR_6)
{
 struct omap_gem_object *VAR_7 = FUNC_5(VAR_5);

 VAR_6->vm_flags &= ~VAR_4;
 VAR_6->vm_flags |= VAR_3;

 if (VAR_7->flags & VAR_2) {
  VAR_6->vm_page_prot = FUNC_4(FUNC_6(VAR_6->vm_flags));
 } else if (VAR_7->flags & VAR_1) {
  VAR_6->vm_page_prot = FUNC_3(FUNC_6(VAR_6->vm_flags));
 } else {





  if (FUNC_0(!VAR_5->filp))
   return -VAR_0;






  FUNC_1(VAR_6->vm_file);
  VAR_6->vm_pgoff = 0;
  VAR_6->vm_file = FUNC_2(VAR_5->filp);

  VAR_6->vm_page_prot = FUNC_6(VAR_6->vm_flags);
 }

 return 0;
}

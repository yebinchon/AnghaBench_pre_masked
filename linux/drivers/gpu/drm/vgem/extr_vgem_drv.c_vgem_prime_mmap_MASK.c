
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_page_prot; int vm_file; } ;
struct drm_gem_object {scalar_t__ size; int filp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct vm_area_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct drm_gem_object *VAR_4,
      struct vm_area_struct *VAR_5)
{
 int VAR_6;

 if (VAR_4->size < VAR_5->vm_end - VAR_5->vm_start)
  return -VAR_0;

 if (!VAR_4->filp)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_4->filp, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_5->vm_file);
 VAR_5->vm_file = FUNC_2(VAR_4->filp);
 VAR_5->vm_flags |= VAR_3 | VAR_2;
 VAR_5->vm_page_prot = FUNC_3(FUNC_4(VAR_5->vm_flags));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; } ;
struct udl_gem_object {int flags; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct udl_gem_object *VAR_2,
     struct vm_area_struct *VAR_3)
{
 FUNC_0("flags = 0x%x\n", VAR_2->flags);


 if (VAR_2->flags & VAR_0) {
  VAR_3->vm_page_prot = FUNC_3(VAR_3->vm_flags);
 } else if (VAR_2->flags & VAR_1) {
  VAR_3->vm_page_prot =
   FUNC_2(FUNC_3(VAR_3->vm_flags));
 } else {
  VAR_3->vm_page_prot =
   FUNC_1(FUNC_3(VAR_3->vm_flags));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_hvm_pagetable_dying {int gpa; int domid; } ;
struct mm_struct {int pgd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct xen_hvm_pagetable_dying*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_2)
{
 struct xen_hvm_pagetable_dying VAR_3;
 int VAR_4;

 VAR_3.domid = VAR_0;
 VAR_3.gpa = FUNC_2(VAR_2->pgd);
 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 FUNC_1(VAR_4 < 0);
}

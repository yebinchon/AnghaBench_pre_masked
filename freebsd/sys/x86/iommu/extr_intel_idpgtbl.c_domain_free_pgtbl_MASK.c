
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int * vm_object_t ;
struct dmar_domain {int flags; int * pgtbl_obj; TYPE_1__* dmar; } ;
struct TYPE_7__ {scalar_t__ ref_count; } ;
struct TYPE_6__ {int hw_ecap; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;

void
FUNC_8(struct dmar_domain *VAR_2)
{
 vm_object_t VAR_3;
 vm_page_t VAR_4;

 VAR_3 = VAR_2->pgtbl_obj;
 if (VAR_3 == ((void*)0)) {
  FUNC_1((VAR_2->dmar->hw_ecap & VAR_1) != 0 &&
      (VAR_2->flags & VAR_0) != 0,
      ("lost pagetable object domain %p", VAR_2));
  return;
 }
 FUNC_0(VAR_2);
 VAR_2->pgtbl_obj = ((void*)0);

 if ((VAR_2->flags & VAR_0) != 0) {
  FUNC_4(VAR_3);
  VAR_2->flags &= ~VAR_0;
  return;
 }


 FUNC_2(VAR_3);
 for (VAR_4 = FUNC_6(VAR_3, 0); VAR_4 != ((void*)0); VAR_4 = FUNC_7(VAR_4))
  VAR_4->ref_count = 0;
 FUNC_3(VAR_3);
 FUNC_5(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pte_list_desc {scalar_t__ more; int ** sptes; } ;
struct kvm_rmap_head {unsigned long val; } ;


 int VAR_0 ;
 int FUNC_0 (struct pte_list_desc*) ;

__attribute__((used)) static void
FUNC_1(struct kvm_rmap_head *VAR_1,
      struct pte_list_desc *VAR_2, int VAR_3,
      struct pte_list_desc *VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_0 - 1; !VAR_2->sptes[VAR_5] && VAR_5 > VAR_3; --VAR_5)
  ;
 VAR_2->sptes[VAR_3] = VAR_2->sptes[VAR_5];
 VAR_2->sptes[VAR_5] = ((void*)0);
 if (VAR_5 != 0)
  return;
 if (!VAR_4 && !VAR_2->more)
  VAR_1->val = (unsigned long)VAR_2->sptes[0];
 else
  if (VAR_4)
   VAR_4->more = VAR_2->more;
  else
   VAR_1->val = (unsigned long)VAR_2->more | 1;
 FUNC_0(VAR_2);
}

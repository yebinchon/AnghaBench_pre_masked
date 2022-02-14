
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
struct vm_radix_node {struct vm_radix_node** rn_child; int rn_clev; } ;
struct vm_radix {int dummy; } ;
struct TYPE_4__ {int pindex; } ;


 struct vm_radix_node* FUNC_0 (struct vm_radix*) ;
 scalar_t__ FUNC_1 (struct vm_radix_node*) ;
 scalar_t__ FUNC_2 (struct vm_radix_node*,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (struct vm_radix_node*) ;

vm_page_t
FUNC_5(struct vm_radix *VAR_0, vm_pindex_t VAR_1)
{
 struct vm_radix_node *VAR_2;
 vm_page_t VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 while (VAR_2 != ((void*)0)) {
  if (FUNC_1(VAR_2)) {
   VAR_3 = FUNC_4(VAR_2);
   if (VAR_3->pindex == VAR_1)
    return (VAR_3);
   else
    break;
  } else if (FUNC_2(VAR_2, VAR_1))
   break;
  VAR_4 = FUNC_3(VAR_1, VAR_2->rn_clev);
  VAR_2 = VAR_2->rn_child[VAR_4];
 }
 return (((void*)0));
}

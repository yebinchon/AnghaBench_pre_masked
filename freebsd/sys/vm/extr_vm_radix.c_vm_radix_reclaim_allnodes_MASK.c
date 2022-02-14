
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_radix_node {int dummy; } ;
struct vm_radix {int dummy; } ;


 struct vm_radix_node* FUNC_0 (struct vm_radix*) ;
 int FUNC_1 (struct vm_radix_node*) ;
 int FUNC_2 (struct vm_radix_node*) ;
 int FUNC_3 (struct vm_radix*,int *) ;

void
FUNC_4(struct vm_radix *VAR_0)
{
 struct vm_radix_node *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return;
 FUNC_3(VAR_0, ((void*)0));
 if (!FUNC_1(VAR_1))
  FUNC_2(VAR_1);
}

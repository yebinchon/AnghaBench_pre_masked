
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_radix_node {int dummy; } ;
struct vm_radix {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 struct vm_radix_node* FUNC_0 (struct vm_radix*) ;
 int FUNC_1 (struct vm_radix_node*) ;

boolean_t
FUNC_2(struct vm_radix *VAR_1)
{
 struct vm_radix_node *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 return (FUNC_1(VAR_2));
}

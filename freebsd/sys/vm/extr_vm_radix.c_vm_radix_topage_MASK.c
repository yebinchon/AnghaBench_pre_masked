
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct vm_radix_node {int dummy; } ;


 uintptr_t VAR_0 ;

__attribute__((used)) static __inline vm_page_t
FUNC_0(struct vm_radix_node *VAR_1)
{

 return ((vm_page_t)((uintptr_t)VAR_1 & ~VAR_0));
}

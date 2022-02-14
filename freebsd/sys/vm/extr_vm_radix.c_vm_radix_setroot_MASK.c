
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_radix_node {int dummy; } ;
struct vm_radix {uintptr_t rt_root; } ;



__attribute__((used)) static __inline void
FUNC_0(struct vm_radix *VAR_0, struct vm_radix_node *VAR_1)
{

 VAR_0->rt_root = (uintptr_t)VAR_1;
}

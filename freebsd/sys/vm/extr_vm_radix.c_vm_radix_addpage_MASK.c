
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef scalar_t__ vm_page_t ;
typedef int uint16_t ;
struct vm_radix_node {void** rn_child; } ;


 uintptr_t VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static __inline void
FUNC_1(struct vm_radix_node *VAR_1, vm_pindex_t VAR_2, uint16_t VAR_3,
    vm_page_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 VAR_1->rn_child[VAR_5] = (void *)((uintptr_t)VAR_4 | VAR_0);
}

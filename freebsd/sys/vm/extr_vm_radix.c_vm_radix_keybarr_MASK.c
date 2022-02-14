
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_pindex_t ;
struct vm_radix_node {scalar_t__ rn_clev; scalar_t__ rn_owner; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline boolean_t
FUNC_1(struct vm_radix_node *VAR_2, vm_pindex_t VAR_3)
{

 if (VAR_2->rn_clev < VAR_1) {
  VAR_3 = FUNC_0(VAR_3, VAR_2->rn_clev + 1);
  return (VAR_3 != VAR_2->rn_owner);
 }
 return (VAR_0);
}

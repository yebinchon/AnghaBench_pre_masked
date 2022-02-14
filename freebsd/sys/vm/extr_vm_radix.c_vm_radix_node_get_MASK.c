
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef void* uint16_t ;
struct vm_radix_node {void* rn_clev; void* rn_count; int rn_owner; } ;


 int VAR_0 ;
 struct vm_radix_node* FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static __inline struct vm_radix_node *
FUNC_1(vm_pindex_t VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 struct vm_radix_node *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_5->rn_owner = VAR_2;
 VAR_5->rn_count = VAR_3;
 VAR_5->rn_clev = VAR_4;
 return (VAR_5);
}

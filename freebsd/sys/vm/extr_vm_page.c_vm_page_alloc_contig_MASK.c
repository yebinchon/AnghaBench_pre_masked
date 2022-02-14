
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_object_t ;
typedef int vm_memattr_t ;
typedef int u_long ;
struct vm_domainset_iter {int dummy; } ;


 scalar_t__ FUNC_0 (struct vm_domainset_iter*,int ,int*) ;
 int FUNC_1 (struct vm_domainset_iter*,int ,int ,int*,int*) ;
 int * FUNC_2 (int ,int ,int,int,int ,int ,int ,int ,int ,int ) ;

vm_page_t
FUNC_3(vm_object_t VAR_0, vm_pindex_t VAR_1, int VAR_2,
    u_long VAR_3, vm_paddr_t VAR_4, vm_paddr_t VAR_5, u_long VAR_6,
    vm_paddr_t VAR_7, vm_memattr_t VAR_8)
{
 struct vm_domainset_iter VAR_9;
 vm_page_t VAR_10;
 int VAR_11;

 FUNC_1(&VAR_9, VAR_0, VAR_1, &VAR_11, &VAR_2);
 do {
  VAR_10 = FUNC_2(VAR_0, VAR_1, VAR_11, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_10 != ((void*)0))
   break;
 } while (FUNC_0(&VAR_9, VAR_0, &VAR_11) == 0);

 return (VAR_10);
}

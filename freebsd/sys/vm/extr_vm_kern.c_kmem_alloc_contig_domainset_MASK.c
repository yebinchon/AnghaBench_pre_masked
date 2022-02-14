
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_memattr_t ;
typedef int u_long ;
struct vm_domainset_iter {int dummy; } ;
struct domainset {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct vm_domainset_iter*,int*) ;
 int FUNC_2 (struct vm_domainset_iter*,struct domainset*,int*,int*) ;

vm_offset_t
FUNC_3(struct domainset *VAR_0, vm_size_t VAR_1, int VAR_2,
    vm_paddr_t VAR_3, vm_paddr_t VAR_4, u_long VAR_5, vm_paddr_t VAR_6,
    vm_memattr_t VAR_7)
{
 struct vm_domainset_iter VAR_8;
 vm_offset_t VAR_9;
 int VAR_10;

 FUNC_2(&VAR_8, VAR_0, &VAR_10, &VAR_2);
 do {
  VAR_9 = FUNC_0(VAR_10, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);
  if (VAR_9 != 0)
   break;
 } while (FUNC_1(&VAR_8, &VAR_10) == 0);

 return (VAR_9);
}

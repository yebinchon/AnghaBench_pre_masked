
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_memattr_t ;
struct vm_domainset_iter {int dummy; } ;
struct domainset {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ,int,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct vm_domainset_iter*,int*) ;
 int FUNC_2 (struct vm_domainset_iter*,struct domainset*,int*,int*) ;

vm_offset_t
FUNC_3(struct domainset *VAR_0, vm_size_t VAR_1, int VAR_2,
    vm_paddr_t VAR_3, vm_paddr_t VAR_4, vm_memattr_t VAR_5)
{
 struct vm_domainset_iter VAR_6;
 vm_offset_t VAR_7;
 int VAR_8;

 FUNC_2(&VAR_6, VAR_0, &VAR_8, &VAR_2);
 do {
  VAR_7 = FUNC_0(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5);
  if (VAR_7 != 0)
   break;
 } while (FUNC_1(&VAR_6, &VAR_8) == 0);

 return (VAR_7);
}

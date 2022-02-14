
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct vm_domainset_iter {int dummy; } ;
struct domainset {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ,int) ;
 scalar_t__ FUNC_1 (struct vm_domainset_iter*,int*) ;
 int FUNC_2 (struct vm_domainset_iter*,struct domainset*,int*,int*) ;

vm_offset_t
FUNC_3(struct domainset *VAR_0, vm_size_t VAR_1, int VAR_2)
{
 struct vm_domainset_iter VAR_3;
 vm_offset_t VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3, VAR_0, &VAR_5, &VAR_2);
 do {
  VAR_4 = FUNC_0(VAR_5, VAR_1, VAR_2);
  if (VAR_4 != 0)
   break;
 } while (FUNC_1(&VAR_3, &VAR_5) == 0);

 return (VAR_4);
}

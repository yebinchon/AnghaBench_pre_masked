
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int u_long ;
struct vm_domainset_iter {int dummy; } ;


 scalar_t__ FUNC_0 (struct vm_domainset_iter*,int *,int*) ;
 int FUNC_1 (struct vm_domainset_iter*,int *,int ,int*,int*) ;
 int FUNC_2 (int,int,int ,int ,int ,int ,int ) ;

bool
FUNC_3(int VAR_0, u_long VAR_1, vm_paddr_t VAR_2, vm_paddr_t VAR_3,
    u_long VAR_4, vm_paddr_t VAR_5)
{
 struct vm_domainset_iter VAR_6;
 int VAR_7;
 bool VAR_8;

 FUNC_1(&VAR_6, ((void*)0), 0, &VAR_7, &VAR_0);
 do {
  VAR_8 = FUNC_2(VAR_7, VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5);
  if (VAR_8)
   break;
 } while (FUNC_0(&VAR_6, ((void*)0), &VAR_7) == 0);

 return (VAR_8);
}

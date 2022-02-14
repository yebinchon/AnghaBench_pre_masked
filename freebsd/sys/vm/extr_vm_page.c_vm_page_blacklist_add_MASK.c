
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int uintmax_t ;
struct vm_domain {int dummy; } ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct vm_domain*) ;
 int FUNC_3 (struct vm_domain*) ;
 int FUNC_4 (struct vm_domain*,int) ;
 struct vm_domain* FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;

bool
FUNC_8(vm_paddr_t VAR_2, bool VAR_3)
{
 struct vm_domain *VAR_4;
 vm_page_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5 == ((void*)0))
  return (1);

 VAR_4 = FUNC_5(VAR_5);
 FUNC_2(VAR_4);
 VAR_6 = FUNC_7(VAR_5);
 FUNC_3(VAR_4);
 if (VAR_6 != 0) {
  FUNC_4(VAR_4, -1);
  FUNC_0(&VAR_0, VAR_5, VAR_1);
  if (VAR_3)
   FUNC_1("Skipping page with pa 0x%jx\n", (uintmax_t)VAR_2);
 }
 return (VAR_6);
}

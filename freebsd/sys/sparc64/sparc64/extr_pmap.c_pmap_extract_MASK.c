
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct tte {int dummy; } ;
typedef scalar_t__ pmap_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tte*) ;
 int FUNC_3 (struct tte*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int) ;
 struct tte* FUNC_5 (scalar_t__,int) ;

vm_paddr_t
FUNC_6(pmap_t VAR_1, vm_offset_t VAR_2)
{
 struct tte *VAR_3;
 vm_paddr_t VAR_4;

 if (VAR_1 == VAR_0)
  return (FUNC_4(VAR_2));
 FUNC_0(VAR_1);
 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  VAR_4 = 0;
 else
  VAR_4 = FUNC_2(VAR_3) | (VAR_2 & FUNC_3(VAR_3));
 FUNC_1(VAR_1);
 return (VAR_4);
}

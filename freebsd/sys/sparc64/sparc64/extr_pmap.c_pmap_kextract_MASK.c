
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct tte {int tte_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tte*) ;
 int FUNC_2 (struct tte*) ;
 int VAR_1 ;
 struct tte* FUNC_3 (int) ;

vm_paddr_t
FUNC_4(vm_offset_t VAR_2)
{
 struct tte *VAR_3;

 if (VAR_2 >= VAR_1)
  return (FUNC_0(VAR_2));
 VAR_3 = FUNC_3(VAR_2);
 if ((VAR_3->tte_data & VAR_0) == 0)
  return (0);
 return (FUNC_1(VAR_3) | (VAR_2 & FUNC_2(VAR_3)));
}

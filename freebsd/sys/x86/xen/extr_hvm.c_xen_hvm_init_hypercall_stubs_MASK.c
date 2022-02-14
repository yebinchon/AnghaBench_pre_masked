
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int uint32_t ;
typedef enum xen_hvm_init_type { ____Placeholder_xen_hvm_init_type } xen_hvm_init_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,int*) ;
 int VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

int
FUNC_6(enum xen_hvm_init_type VAR_7)
{
 uint32_t VAR_8[4];


 if (VAR_5 == 0)
  VAR_5 = FUNC_5();
 if (VAR_5 == 0)
  return (VAR_1);

 if (FUNC_4() && VAR_7 == VAR_4) {





  FUNC_1();
  return 0;
 }

 if (VAR_7 == VAR_4)
  FUNC_1();




 FUNC_0(VAR_5 + 2, VAR_8);
 if (VAR_8[0] != 1)
  return (VAR_0);

 FUNC_3(VAR_8[1], (VAR_7 == VAR_3)
     ? ((vm_paddr_t)&VAR_6 - VAR_2)
     : FUNC_2(&VAR_6));

 return (0);
}

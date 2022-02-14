
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_paddr_t ;
typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

vm_paddr_t
FUNC_2(int *VAR_5)
{
 vm_paddr_t VAR_6;
 u_long VAR_7;

 if (!FUNC_1())
  return (0);

 VAR_6 = FUNC_0(VAR_0, VAR_1);
 VAR_7 = FUNC_0(0, VAR_2);
 *VAR_5 = (VAR_7 & VAR_3) >> VAR_4;

 return (VAR_6);
}

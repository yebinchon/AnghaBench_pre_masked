
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,int,int,int ,int) ;

__attribute__((used)) static vm_paddr_t
FUNC_2(int VAR_3, int VAR_4, int VAR_5)
{
 uint32_t VAR_6;
 vm_paddr_t VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2, 2);
 VAR_7 = (VAR_6 >> VAR_1) & VAR_0;



 if (VAR_7 < 0xF0)
  return (VAR_7 * FUNC_0(32));
 return ((VAR_7 - 0xF0) * FUNC_0(4) + FUNC_0(4));
}

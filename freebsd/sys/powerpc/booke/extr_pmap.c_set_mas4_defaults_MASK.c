
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 uint32_t VAR_6;


 VAR_6 = VAR_1;
 VAR_6 |= (VAR_5 << VAR_3) & VAR_2;



 FUNC_0(VAR_4, VAR_6);
 __asm __volatile("isync");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 uint32_t VAR_5 = FUNC_0(VAR_0);
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_5 + VAR_1);
 VAR_6 &= ~(3 << VAR_4);
 VAR_6 |= (2 << VAR_4);
 FUNC_4(VAR_6, VAR_5 + VAR_1);
 FUNC_3(100);

 FUNC_4(VAR_3, VAR_5 + VAR_2);

 VAR_6 |= (3 << VAR_4);
 FUNC_4(VAR_6, VAR_5 + VAR_1);
 FUNC_3(100);

 VAR_6 &= ~(3 << VAR_4);
 FUNC_4(VAR_6, VAR_5 + VAR_1);
 FUNC_3(100);

 FUNC_1("ar71xx: pll_reg %#x: %#x\n", (unsigned int)(VAR_5 + VAR_2),
       FUNC_2(VAR_5 + VAR_2));
}

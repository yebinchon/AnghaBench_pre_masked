
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 u32 VAR_3 = *(volatile u32 *)VAR_1;
 int VAR_4;

 FUNC_0(VAR_0);
 VAR_4 = FUNC_2((VAR_3 >> 16) & 0x3f);

 if (FUNC_3(VAR_4 > 0))
  FUNC_1(VAR_4 + VAR_2 - 1);
 FUNC_4(VAR_0);
}

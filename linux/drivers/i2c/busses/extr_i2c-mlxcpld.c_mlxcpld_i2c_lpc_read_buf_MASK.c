
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_0, u8 VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1 - VAR_1 % 4; VAR_3 += 4)
  *(u32 *)(VAR_0 + VAR_3) = FUNC_1(VAR_2 + VAR_3);
 for (; VAR_3 < VAR_1; ++VAR_3)
  *(VAR_0 + VAR_3) = FUNC_0(VAR_2 + VAR_3);
}

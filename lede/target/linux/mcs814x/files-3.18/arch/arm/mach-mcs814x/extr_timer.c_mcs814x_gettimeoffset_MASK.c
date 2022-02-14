
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(void)
{
 u32 VAR_3 = FUNC_0(VAR_2 + VAR_0);

 if (VAR_3 < VAR_1)
  return FUNC_1(VAR_3 + (u32)(0xffffffff - VAR_1));
 else
  return FUNC_1(VAR_3 - VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_3)
{
 u32 VAR_4 = VAR_3 >> VAR_1;

 if (VAR_4 == VAR_2)
  return 0x3F;
 else if (VAR_4 == VAR_0)
  return 0xFF;

 FUNC_0("CMD: Abnormal blt cmd length! 0x%08X\n", VAR_3);
 return 0;
}

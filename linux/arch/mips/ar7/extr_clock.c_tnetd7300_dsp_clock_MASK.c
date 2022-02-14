
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(void)
{
 u32 VAR_1, VAR_2;
 u8 VAR_3 = FUNC_1();
 VAR_1 = FUNC_2((void *)FUNC_0(VAR_0 + 0x18));
 VAR_2 = FUNC_2((void *)FUNC_0(VAR_0 + 0x1c));
 if (VAR_2 & (1 << 23))
  return 0;
 if ((VAR_3 >= 0x23) && (VAR_3 != 0x57))
  return 250000000;
 if ((((VAR_2 & 0x1fff) << 10) | ((VAR_1 & 0xffc00000) >> 22))
     > 4208000)
  return 250000000;
 return 0;
}

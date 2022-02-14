
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void)
{
 u32 VAR_0 = FUNC_0(0xa0000000);
 if (VAR_0 & 0x08000000)
  return (VAR_0 >> 16) & 0xff;
 else
  return -1;
}

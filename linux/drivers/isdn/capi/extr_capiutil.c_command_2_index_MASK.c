
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static unsigned FUNC_0(u8 VAR_0, u8 VAR_1)
{
 if (VAR_0 & 0x80)
  VAR_0 = 0x9 + (VAR_0 & 0x0f);
 else if (VAR_0 == 0x41)
  VAR_0 = 0x9 + 0x1;
 if (VAR_0 > 0x18)
  VAR_0 = 0x00;
 return (VAR_1 & 3) * (0x9 + 0x9) + VAR_0;
}

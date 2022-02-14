
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0, bool VAR_1, uint32_t VAR_2)
{
 bool VAR_3 = (VAR_0 == 0x680508);

 if (VAR_1)
  VAR_2 |= VAR_3 ? 0x00000100 : 0x10000000;
 else
  VAR_2 &= VAR_3 ? 0xfffffeff : 0xefffffff;

 return VAR_2;
}

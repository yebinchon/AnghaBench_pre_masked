
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef unsigned long u64 ;
typedef int u32 ;
typedef int u16 ;
int FUNC_0(int VAR_0, void *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 switch (VAR_0) {
 case 134:
  break;
 case 136:
  *(u8 *)VAR_1 = VAR_2;
  break;
 case 141:
  *(u16 *)VAR_1 &= 0xf000;
  *(u16 *)VAR_1 |= VAR_2 & 0xfff;
  break;
 case 140:
  *(u16 *)VAR_1 = VAR_2;
  break;
 case 139:
  *(u32 *)VAR_1 &= 0xf00000ff;
  *(u32 *)VAR_1 |= (VAR_2 & 0xfff) << 16;
  *(u32 *)VAR_1 |= (VAR_2 & 0xff000) >> 4;
  break;
 case 138:
  *(u32 *)VAR_1 = VAR_2;
  break;
 case 137:
 case 135:
  *(u64 *)VAR_1 = VAR_2;
  break;
 case 133:
  *(u16 *)VAR_1 = (VAR_2 - VAR_3);
  break;
 case 132:
  *(u16 *)VAR_1 = (VAR_2 - VAR_3) >> 1;
  break;
 case 130:
  *(u32 *)VAR_1 = (VAR_2 - VAR_3) >> 1;
  break;
 case 131:
  *(u32 *)VAR_1 = (VAR_2 - VAR_3);
  break;
 case 129:
  *(u64 *)VAR_1 = (VAR_2 - VAR_3);
  break;
 case 128:
  *(unsigned long *) VAR_1 = VAR_2;
  break;
 default:
  return 1;
 }
 return 0;
}

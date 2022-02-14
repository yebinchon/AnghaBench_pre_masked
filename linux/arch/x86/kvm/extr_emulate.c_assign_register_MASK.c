
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long u64 ;
typedef unsigned long u32 ;
typedef int u16 ;



__attribute__((used)) static void FUNC_0(unsigned long *VAR_0, u64 VAR_1, int VAR_2)
{

 switch (VAR_2) {
 case 1:
  *(u8 *)VAR_0 = (u8)VAR_1;
  break;
 case 2:
  *(u16 *)VAR_0 = (u16)VAR_1;
  break;
 case 4:
  *VAR_0 = (u32)VAR_1;
  break;
 case 8:
  *VAR_0 = VAR_1;
  break;
 }
}

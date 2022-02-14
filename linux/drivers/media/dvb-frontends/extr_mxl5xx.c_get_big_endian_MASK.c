
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u8 VAR_0, const u8 VAR_1[])
{
 u32 VAR_2 = 0;

 switch (VAR_0) {
 case 24:
  VAR_2 = (((u32) VAR_1[0]) << 16) |
   (((u32) VAR_1[1]) << 8) | VAR_1[2];
  break;
 case 32:
  VAR_2 = (((u32) VAR_1[0]) << 24) |
   (((u32) VAR_1[1]) << 16) |
   (((u32) VAR_1[2]) << 8) | VAR_1[3];
  break;
 default:
  break;
 }

 return VAR_2;
}

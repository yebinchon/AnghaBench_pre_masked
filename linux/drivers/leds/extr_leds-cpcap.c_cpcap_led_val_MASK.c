
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u8 VAR_0, u8 VAR_1)
{
 VAR_0 &= 0x1f;
 VAR_1 &= 0x0f;

 return VAR_0 << 4 | VAR_1;
}

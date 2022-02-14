
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0)
{
 VAR_0 ^= VAR_0 >> 4;
 VAR_0 &= 0xf;

 return (0x9669 >> VAR_0) & 1;
}

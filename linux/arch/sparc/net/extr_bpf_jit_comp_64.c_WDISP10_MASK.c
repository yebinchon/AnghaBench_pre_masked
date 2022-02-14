
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 u32 VAR_1 = ((VAR_0 >> 2) & 0xff) << 5;

 VAR_1 |= ((VAR_0 >> (2 + 8)) & 0x03) << 19;

 return VAR_1;
}

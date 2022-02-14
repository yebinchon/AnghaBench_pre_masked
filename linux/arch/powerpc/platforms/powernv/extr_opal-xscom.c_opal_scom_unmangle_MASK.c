
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static u64 FUNC_0(u64 VAR_0)
{
 u64 VAR_1;
 VAR_1 = VAR_0;
 VAR_1 &= 0x0f00000000000000;
 VAR_0 &= 0xf0ffffffffffffff;
 VAR_0 |= VAR_1 << 4;

 return VAR_0;
}

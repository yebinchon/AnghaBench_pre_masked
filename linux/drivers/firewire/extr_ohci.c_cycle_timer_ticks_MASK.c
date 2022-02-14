
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 u32 VAR_1;

 VAR_1 = VAR_0 & 0xfff;
 VAR_1 += 3072 * ((VAR_0 >> 12) & 0x1fff);
 VAR_1 += (3072 * 8000) * (VAR_0 >> 25);

 return VAR_1;
}

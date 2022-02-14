
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, const u8 *VAR_1, int VAR_2)
{
 while (VAR_2--) {
  VAR_0 += *VAR_1++;
  VAR_0 += (VAR_0 << 10);
  VAR_0 ^= (VAR_0 >> 6);
 }

 return VAR_0;
}

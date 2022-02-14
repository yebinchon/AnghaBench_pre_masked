
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_2 == 0x0000ffff) {
  VAR_0 &= ~(VAR_1 >> 16);
  VAR_0 |= VAR_1 & (VAR_1 >> 16);
 } else {
  VAR_0 &= ~VAR_2;
  VAR_0 |= VAR_1 & VAR_2;
 }

 return VAR_0;
}

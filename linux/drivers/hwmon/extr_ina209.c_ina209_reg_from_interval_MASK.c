
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u16 VAR_0, long VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1 <= 0) {
  VAR_3 = 8;
 } else {
  VAR_3 = 15;
  for (VAR_2 = 34 + 34 / 2; VAR_2; VAR_2 >>= 1) {
   if (VAR_2 < VAR_1)
    break;
   VAR_3--;
  }
 }
 return (VAR_0 & 0xf807) | (VAR_3 << 3) | (VAR_3 << 7);
}

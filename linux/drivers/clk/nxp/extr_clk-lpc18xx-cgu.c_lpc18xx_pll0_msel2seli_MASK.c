
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 u32 VAR_1;

 if (VAR_0 > 16384) return 1;
 if (VAR_0 > 8192) return 2;
 if (VAR_0 > 2048) return 4;
 if (VAR_0 >= 501) return 8;
 if (VAR_0 >= 60) {
  VAR_1 = 1024 / (VAR_0 + 9);
  return ((1024 == (VAR_1 * (VAR_0 + 9))) == 0) ? VAR_1 * 4 : (VAR_1 + 1) * 4;
 }

 return (VAR_0 & 0x3c) + 4;
}

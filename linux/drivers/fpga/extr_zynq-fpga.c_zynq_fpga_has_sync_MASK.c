
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static bool FUNC_0(const u8 *VAR_0, size_t VAR_1)
{
 for (; VAR_1 >= 4; VAR_0 += 4, VAR_1 -= 4)
  if (VAR_0[0] == 0x66 && VAR_0[1] == 0x55 && VAR_0[2] == 0x99 &&
      VAR_0[3] == 0xaa)
   return 1;
 return 0;
}

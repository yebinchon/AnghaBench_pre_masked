
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (int const) ;

u32 FUNC_1 (const u8 VAR_0[8])
{
  u32 VAR_1 = 0;

  VAR_1 |= ((u32) FUNC_0 (VAR_0[1]) << 0);
  VAR_1 |= ((u32) FUNC_0 (VAR_0[0]) << 4);
  VAR_1 |= ((u32) FUNC_0 (VAR_0[3]) << 8);
  VAR_1 |= ((u32) FUNC_0 (VAR_0[2]) << 12);
  VAR_1 |= ((u32) FUNC_0 (VAR_0[5]) << 16);
  VAR_1 |= ((u32) FUNC_0 (VAR_0[4]) << 20);
  VAR_1 |= ((u32) FUNC_0 (VAR_0[7]) << 24);
  VAR_1 |= ((u32) FUNC_0 (VAR_0[6]) << 28);

  return (VAR_1);
}

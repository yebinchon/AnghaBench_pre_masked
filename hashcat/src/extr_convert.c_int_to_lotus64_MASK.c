
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



u8 FUNC_0 (const u8 VAR_0)
{
  if (VAR_0 < 10) return '0' + VAR_0;
  if (VAR_0 < 36) return 'A' + VAR_0 - 10;
  if (VAR_0 < 62) return 'a' + VAR_0 - 36;
  if (VAR_0 == 62) return '+';
  if (VAR_0 == 63) return '/';

  return 0;
}

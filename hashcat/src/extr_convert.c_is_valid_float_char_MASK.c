
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;



bool FUNC_0 (const u8 VAR_0)
{
  if ((VAR_0 >= '0') && (VAR_0 <= '9')) return 1;

  if (VAR_0 == '.') return 1;

  return 0;
}

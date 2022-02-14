
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



int FUNC_0 (const u8 VAR_0)
{
  if (VAR_0 < 10) return VAR_0 + '0';
  if (VAR_0 < 37) return VAR_0 + 'A' - 10;

  return -1;
}

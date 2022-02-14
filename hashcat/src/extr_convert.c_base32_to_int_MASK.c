
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;



u8 FUNC_0 (const u8 VAR_0)
{
  if ((VAR_0 >= 'A') && (VAR_0 <= 'Z')) return VAR_0 - 'A';
  if ((VAR_0 >= '2') && (VAR_0 <= '7')) return VAR_0 - '2' + 26;

  return 0;
}

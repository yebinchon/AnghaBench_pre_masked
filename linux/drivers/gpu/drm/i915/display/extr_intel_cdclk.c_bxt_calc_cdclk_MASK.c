
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 if (VAR_0 > 576000)
  return 624000;
 else if (VAR_0 > 384000)
  return 576000;
 else if (VAR_0 > 288000)
  return 384000;
 else if (VAR_0 > 144000)
  return 288000;
 else
  return 144000;
}

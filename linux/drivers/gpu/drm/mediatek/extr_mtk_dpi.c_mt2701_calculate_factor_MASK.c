
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(int VAR_0)
{
 if (VAR_0 <= 64000)
  return 4;
 else if (VAR_0 <= 128000)
  return 2;
 else
  return 1;
}

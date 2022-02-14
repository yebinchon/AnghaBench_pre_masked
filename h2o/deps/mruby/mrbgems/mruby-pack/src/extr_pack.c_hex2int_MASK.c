
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int
FUNC_0(unsigned char VAR_0)
{
  if (VAR_0 >= '0' && VAR_0 <= '9')
    return VAR_0 - '0';
  else if (VAR_0 >= 'A' && VAR_0 <= 'F')
    return 10 + (VAR_0 - 'A');
  else if (VAR_0 >= 'a' && VAR_0 <= 'f')
    return 10 + (VAR_0 - 'a');
  else
    return 0;
}

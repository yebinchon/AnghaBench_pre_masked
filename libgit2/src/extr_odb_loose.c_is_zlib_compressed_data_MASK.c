
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, size_t VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1 < 2)
  return 0;

 VAR_2 = ((unsigned int)(VAR_0[0]) << 8) + VAR_0[1];
 return (VAR_0[0] & 0x8F) == 0x08 && !(VAR_2 % 31);
}

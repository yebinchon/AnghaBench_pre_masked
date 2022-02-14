
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(unsigned char VAR_0[])
{
 if (VAR_0[0] == 0x73)
  return 1;

 if (VAR_0[0] == 0x88 &&
     (VAR_0[1] == 0x07 ||
      VAR_0[1] == 0x08 ||
      (VAR_0[1] & 0xf0) == 0xb0 ||
      (VAR_0[1] & 0xf0) == 0xc0)) {
  return 1;
 }

 return 0;
}

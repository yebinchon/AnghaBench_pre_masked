
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;



__attribute__((used)) static int
FUNC_0(unsigned VAR_0, u_int32_t VAR_1, u_int32_t VAR_2)
{
  u_int32_t VAR_3 = (VAR_0 ? 0xfff : 0xffffff) - 0x200;

  if (VAR_1 > VAR_3) {
    if (VAR_2 < 0x200 || VAR_2 > VAR_1)
      return 1;
  } else if ((VAR_1 > 0x200 || VAR_2 <= VAR_3) && VAR_1 < VAR_2)
    return 1;

  return 0;
}

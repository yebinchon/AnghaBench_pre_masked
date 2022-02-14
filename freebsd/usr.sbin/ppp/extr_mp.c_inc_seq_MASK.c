
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;



__attribute__((used)) static u_int32_t
FUNC_0(unsigned VAR_0, u_int32_t VAR_1)
{
  VAR_1++;
  if (VAR_0) {
    if (VAR_1 & 0xfffff000)
      VAR_1 = 0;
  } else if (VAR_1 & 0xff000000)
    VAR_1 = 0;
  return VAR_1;
}

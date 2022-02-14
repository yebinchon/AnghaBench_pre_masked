
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const** VAR_0 ;

const char *
FUNC_0(unsigned VAR_1)
{
  if (VAR_1 >= sizeof VAR_0 / sizeof VAR_0[0])
    return "unknown";
  return VAR_0[VAR_1];

}

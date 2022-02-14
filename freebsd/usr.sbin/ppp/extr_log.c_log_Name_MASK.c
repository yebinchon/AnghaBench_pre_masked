
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;

const char *
FUNC_0(int VAR_4)
{
  if (VAR_4 == VAR_0)
    return "LOG";
  return VAR_4 < VAR_2 || VAR_4 > VAR_1 ? "Unknown" : VAR_3[VAR_4 - 1];
}

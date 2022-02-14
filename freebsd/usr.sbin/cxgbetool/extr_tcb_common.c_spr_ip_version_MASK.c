
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(unsigned VAR_0)
{
  char *VAR_1="UNKNOWN";

  if ( 0 == VAR_0) {VAR_1 = "IPv4";}
  else if ( 1 == VAR_0) {VAR_1 = "IPv6";}

  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 129:
  return("transfer or callback timed out");
 case 128:
  return("failed to contact ypserv");
 case 131:
  return("no such host");
 case 130:
  return("portmapper failure");
 default:
  return("unknown error code");
 }
}

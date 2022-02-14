
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* FUNC_0 (int ) ;

const char *
FUNC_1(int VAR_1)
{
 switch(VAR_1) {
 case 128:
  return "unresolved tc= expansion";
 case 130:
  return "no error";
 case 132:
  return "printer not found";
 case 131:
  return FUNC_0(VAR_0);
 case 129:
  return "loop detected in tc= expansion";
 default:
  return "unknown printcap error";
 }
}

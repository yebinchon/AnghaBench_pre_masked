
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;







 int FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(u8 VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "invalid";
 case 128:
  return "string";
 case 130:
  return "interface";
 case 131:
  return "cport";
 case 132:
  return "bundle";
 default:
  FUNC_0(1);
  return "unknown";
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum symbol_type { ____Placeholder_symbol_type } symbol_type ;
const char *FUNC_0(enum symbol_type VAR_0)
{
 switch (VAR_0) {
 case 134:
  return "boolean";
 case 129:
  return "tristate";
 case 132:
  return "integer";
 case 133:
  return "hex";
 case 130:
  return "string";
 case 128:
  return "unknown";
 case 131:
  break;
 }
 return "???";
}

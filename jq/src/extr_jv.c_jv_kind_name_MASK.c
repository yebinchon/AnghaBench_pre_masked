
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv_kind ;
 int FUNC_0 (int) ;

const char* FUNC_1(jv_kind VAR_0) {
  switch (VAR_0) {
  case 133: return "<invalid>";
  case 132: return "null";
  case 134: return "boolean";
  case 128: return "boolean";
  case 131: return "number";
  case 129: return "string";
  case 135: return "array";
  case 130: return "object";
  }
  FUNC_0(0 && "invalid kind");
  return "<unknown>";
}

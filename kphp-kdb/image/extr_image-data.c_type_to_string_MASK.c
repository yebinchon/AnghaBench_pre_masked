
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum forth_literal_type { ____Placeholder_forth_literal_type } forth_literal_type ;






__attribute__((used)) static const char *FUNC_0 (enum forth_literal_type VAR_0) {
  switch (VAR_0) {
  case 129:
    return "int";
  case 128:
    return "str";
  case 130:
    return "image";
  default:
    return "unknown";
  }
}

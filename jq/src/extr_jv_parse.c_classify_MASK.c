
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chclass ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static chclass FUNC_0(char VAR_4) {
  switch (VAR_4) {
  case ' ':
  case '\t':
  case '\r':
  case '\n':
    return VAR_3;
  case '"':
    return VAR_1;
  case '[':
  case ',':
  case ']':
  case '{':
  case ':':
  case '}':
    return VAR_2;
  default:
    return VAR_0;
  }
}

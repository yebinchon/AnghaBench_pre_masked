
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protocol { ____Placeholder_protocol } protocol ;







__attribute__((used)) static const char *FUNC_0(enum protocol VAR_0)
{
 switch (VAR_0) {
  case 129:
  case 131:
   return "file";
  case 128:
   return "ssh";
  case 130:
   return "git";
  default:
   return "unknown protocol";
 }
}

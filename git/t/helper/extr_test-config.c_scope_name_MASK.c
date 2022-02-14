
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum config_scope { ____Placeholder_config_scope } config_scope ;







__attribute__((used)) static const char *FUNC_0(enum config_scope VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "system";
 case 130:
  return "global";
 case 129:
  return "repo";
 case 131:
  return "cmdline";
 default:
  return "unknown";
 }
}

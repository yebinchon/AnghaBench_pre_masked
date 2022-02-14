
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ color_parse (char const*,int ) ;
 int config_error_nonbool (char const*) ;
 int get_color_found ;
 int get_color_slot ;
 int parsed_color ;
 int strcmp (char const*,int ) ;

__attribute__((used)) static int git_get_color_config(const char *var, const char *value, void *cb)
{
 if (!strcmp(var, get_color_slot)) {
  if (!value)
   config_error_nonbool(var);
  if (color_parse(value, parsed_color) < 0)
   return -1;
  get_color_found = 1;
 }
 return 0;
}

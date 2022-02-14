
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {char const* remote_name; } ;



const char *FUNC_0(struct branch *VAR_0, int *VAR_1)
{
 if (VAR_0 && VAR_0->remote_name) {
  if (VAR_1)
   *VAR_1 = 1;
  return VAR_0->remote_name;
 }
 if (VAR_1)
  *VAR_1 = 0;
 return "origin";
}

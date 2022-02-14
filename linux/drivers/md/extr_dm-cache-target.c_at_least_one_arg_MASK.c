
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_arg_set {int argc; } ;



__attribute__((used)) static bool FUNC_0(struct dm_arg_set *VAR_0, char **VAR_1)
{
 if (!VAR_0->argc) {
  *VAR_1 = "Insufficient args";
  return 0;
 }

 return 1;
}

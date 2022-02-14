
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_arg_set {char** argv; scalar_t__ argc; } ;



const char *FUNC_0(struct dm_arg_set *VAR_0)
{
 char *VAR_1;

 if (VAR_0->argc) {
  VAR_0->argc--;
  VAR_1 = *VAR_0->argv;
  VAR_0->argv++;
  return VAR_1;
 }

 return ((void*)0);
}

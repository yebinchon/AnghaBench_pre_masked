
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int argc; int ** argv; } ;


 int FUNC_0 (char*) ;

void FUNC_1(struct argv_array *VAR_0)
{
 if (!VAR_0->argc)
  return;
 FUNC_0((char *)VAR_0->argv[VAR_0->argc - 1]);
 VAR_0->argv[VAR_0->argc - 1] = ((void*)0);
 VAR_0->argc--;
}

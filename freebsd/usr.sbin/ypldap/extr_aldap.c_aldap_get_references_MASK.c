
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aldap_message {int * references; } ;


 char** FUNC_0 (int *) ;

char **
FUNC_1(struct aldap_message *VAR_0)
{
 if (VAR_0->references == ((void*)0))
  return ((void*)0);
 return FUNC_0(VAR_0->references);
}

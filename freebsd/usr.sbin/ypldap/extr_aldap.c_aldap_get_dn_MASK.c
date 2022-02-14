
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aldap_message {int * dn; } ;


 int FUNC_0 (int *,char**) ;
 char* FUNC_1 (char*) ;

char *
FUNC_2(struct aldap_message *VAR_0)
{
 char *VAR_1;

 if (VAR_0->dn == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_0->dn, &VAR_1) == -1)
  return ((void*)0);

 return FUNC_1(VAR_1);
}

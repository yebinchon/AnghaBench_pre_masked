
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gpointer ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(gpointer VAR_0, gpointer VAR_1)
{
 char **VAR_2 = (char **) VAR_1;
 char *VAR_3;

 if (*VAR_2 == ((void*)0))
  *VAR_2 = FUNC_2("");
 VAR_3 = FUNC_2("%s%p %s\n", *VAR_2, VAR_0, *FUNC_0(VAR_0));
 FUNC_1(*VAR_2);
 *VAR_2 = VAR_3;
}

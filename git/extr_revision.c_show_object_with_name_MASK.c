
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int oid; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char const,int *) ;
 char* FUNC_2 (int *) ;

void FUNC_3(FILE *VAR_0, struct object *VAR_1, const char *VAR_2)
{
 const char *VAR_3;

 FUNC_0(VAR_0, "%s ", FUNC_2(&VAR_1->oid));
 for (VAR_3 = VAR_2; *VAR_3 && *VAR_3 != '\n'; VAR_3++)
  FUNC_1(*VAR_3, VAR_0);
 FUNC_1('\n', VAR_0);
}

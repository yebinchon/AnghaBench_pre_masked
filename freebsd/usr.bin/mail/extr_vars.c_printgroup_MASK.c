
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grouphead {char* g_name; struct group* g_list; } ;
struct group {char* ge_name; struct group* ge_link; } ;


 struct grouphead* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(char VAR_0[])
{
 struct grouphead *VAR_1;
 struct group *VAR_2;

 if ((VAR_1 = FUNC_0(VAR_0)) == ((void*)0)) {
  FUNC_1("\"%s\": not a group\n", VAR_0);
  return;
 }
 FUNC_1("%s\t", VAR_1->g_name);
 for (VAR_2 = VAR_1->g_list; VAR_2 != ((void*)0); VAR_2 = VAR_2->ge_link)
  FUNC_1(" %s", VAR_2->ge_name);
 FUNC_1("\n");
}

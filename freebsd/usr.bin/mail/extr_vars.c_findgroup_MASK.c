
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grouphead {char* g_name; struct grouphead* g_link; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 struct grouphead** VAR_0 ;
 size_t FUNC_1 (char*) ;

struct grouphead *
FUNC_2(char VAR_1[])
{
 struct grouphead *VAR_2;

 for (VAR_2 = VAR_0[FUNC_1(VAR_1)]; VAR_2 != ((void*)0); VAR_2 = VAR_2->g_link)
  if (*VAR_2->g_name == *VAR_1 && FUNC_0(VAR_2->g_name, VAR_1))
   return (VAR_2);
 return (((void*)0));
}

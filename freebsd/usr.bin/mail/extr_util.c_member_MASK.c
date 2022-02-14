
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ignoretab {struct ignore** i_head; } ;
struct ignore {char* i_field; struct ignore* i_link; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;

int
FUNC_2(char *VAR_0, struct ignoretab *VAR_1)
{
 struct ignore *VAR_2;

 for (VAR_2 = VAR_1->i_head[FUNC_1(VAR_0)]; VAR_2 != ((void*)0); VAR_2 = VAR_2->i_link)
  if (*VAR_2->i_field == *VAR_0 &&
      FUNC_0(VAR_2->i_field, VAR_0))
   return (1);
 return (0);
}

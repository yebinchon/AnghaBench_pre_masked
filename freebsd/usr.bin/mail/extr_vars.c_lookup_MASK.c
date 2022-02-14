
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var {char const* v_name; struct var* v_link; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;
 struct var** VAR_0 ;

struct var *
FUNC_2(const char *VAR_1)
{
 struct var *VAR_2;

 for (VAR_2 = VAR_0[FUNC_1(VAR_1)]; VAR_2 != ((void*)0); VAR_2 = VAR_2->v_link)
  if (*VAR_2->v_name == *VAR_1 && FUNC_0(VAR_2->v_name, VAR_1))
   return (VAR_2);
 return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psycho_desc {int * pd_string; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static const struct psycho_desc *
FUNC_1(const struct psycho_desc *VAR_0, const char *VAR_1)
{
 const struct psycho_desc *VAR_2;

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 for (VAR_2 = VAR_0; VAR_2->pd_string != ((void*)0); VAR_2++)
  if (FUNC_0(VAR_2->pd_string, VAR_1) == 0)
   return (VAR_2);
 return (((void*)0));
}

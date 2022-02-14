
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int ** gr_mem; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static bool
FUNC_1(struct group *VAR_0, const char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0->gr_mem != ((void*)0) && VAR_0->gr_mem[VAR_2] != ((void*)0); VAR_2++)
  if (FUNC_0(VAR_0->gr_mem[VAR_2], VAR_1) == 0)
   return (1);
 return (0);
}

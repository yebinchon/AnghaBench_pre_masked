
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int ** gr_mem; } ;


 scalar_t__ FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct group *VAR_0, char *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 if (VAR_0->gr_mem == ((void*)0))
  return;

 for (VAR_2 = FUNC_1(VAR_1, ", \t"); VAR_2 != ((void*)0); VAR_2 = FUNC_1(((void*)0), ", \t")) {
  for (VAR_3 = 0; VAR_0->gr_mem[VAR_3] != ((void*)0); VAR_3++) {
   if (FUNC_0(VAR_0->gr_mem[VAR_3], VAR_2) == 0)
    break;
  }
  if (VAR_0->gr_mem[VAR_3] == ((void*)0))
   continue;

  for (; VAR_0->gr_mem[VAR_3] != ((void*)0); VAR_3++)
   VAR_0->gr_mem[VAR_3] = VAR_0->gr_mem[VAR_3+1];
 }
}

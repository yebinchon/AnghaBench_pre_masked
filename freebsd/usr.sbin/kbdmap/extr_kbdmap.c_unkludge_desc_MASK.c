
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keymap {char* desc; } ;


 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct keymap **VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2<VAR_1; VAR_2++) {
  char *VAR_3;
  char *VAR_4 = VAR_0[VAR_2]->desc;
  if ((VAR_3 = FUNC_1(VAR_4, "8x08")) != ((void*)0)) {
   VAR_3 += 2;
   while (*VAR_3++)
    VAR_3[-1] = VAR_3[0];

   VAR_4 = FUNC_0(VAR_4, VAR_3 - VAR_4 - 1);
   VAR_0[VAR_2]->desc = VAR_4;
  }
 }
}

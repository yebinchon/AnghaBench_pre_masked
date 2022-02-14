
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keymap {char* desc; } ;


 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct keymap **VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2<VAR_1; VAR_2++) {
  char *VAR_3;
  char *VAR_4 = VAR_0[VAR_2]->desc;
  if ((VAR_3 = FUNC_2(VAR_4, "8x8")) != ((void*)0)) {
   int VAR_5;
   int VAR_6;
   int VAR_7;

   VAR_7 = VAR_3 - VAR_4;


   VAR_5 = FUNC_1(VAR_4);
   VAR_4 = FUNC_0(VAR_4, VAR_5 + 2);

   for (VAR_6=VAR_5; VAR_6!=VAR_7+1; VAR_6--)
    VAR_4[VAR_6 + 1] = VAR_4[VAR_6];

   VAR_4[VAR_7+2] = '0';

   VAR_0[VAR_2]->desc = VAR_4;
  }
 }
}

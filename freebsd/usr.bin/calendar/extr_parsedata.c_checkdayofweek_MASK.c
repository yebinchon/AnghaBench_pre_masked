
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixs {char* name; int len; } ;


 char** VAR_0 ;
 char** VAR_1 ;
 struct fixs* VAR_2 ;
 struct fixs* VAR_3 ;
 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_4, size_t *VAR_5, size_t *VAR_6, const char **VAR_7)
{
 struct fixs *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_2[VAR_9].name != ((void*)0); VAR_9++) {
  VAR_8 = VAR_2 + VAR_9;
  if (FUNC_1(VAR_4, VAR_8->name, VAR_8->len) == 0) {
   *VAR_5 = VAR_8->len;
   *VAR_7 = VAR_8->name;
   *VAR_6 = VAR_9;
   return (1);
  }
 }
 for (VAR_9 = 0; VAR_3[VAR_9].name != ((void*)0); VAR_9++) {
  VAR_8 = VAR_3 + VAR_9;
  if (FUNC_1(VAR_4, VAR_8->name, VAR_8->len) == 0) {
   *VAR_5 = VAR_8->len;
   *VAR_7 = VAR_8->name;
   *VAR_6 = VAR_9;
   return (1);
  }
 }
 for (VAR_9 = 0; VAR_1[VAR_9] != ((void*)0); VAR_9++) {
  *VAR_5 = FUNC_0(VAR_1[VAR_9]);
  if (FUNC_1(VAR_4, VAR_1[VAR_9], *VAR_5) == 0) {
   *VAR_7 = VAR_1[VAR_9];
   *VAR_6 = VAR_9;
   return (1);
  }
 }
 for (VAR_9 = 0; VAR_0[VAR_9] != ((void*)0); VAR_9++) {
  if (FUNC_1(VAR_4, VAR_0[VAR_9], 3) == 0) {
   *VAR_5 = 3;
   *VAR_7 = VAR_0[VAR_9];
   *VAR_6 = VAR_9;
   return (1);
  }
 }
 return (0);
}

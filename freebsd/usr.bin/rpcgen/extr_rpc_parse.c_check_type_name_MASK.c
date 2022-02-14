
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int ** VAR_0 ;
 int ** VAR_1 ;
 int FUNC_1 (char*,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3)
{
 int VAR_4;
 char VAR_5[100];

 for (VAR_4 = 0; VAR_1[VAR_4] != ((void*)0); VAR_4++) {
  if (FUNC_2(VAR_2, VAR_1[VAR_4]) == 0) {
   FUNC_1(VAR_5,
    "illegal (reserved) name :\'%s\' in type definition",
    VAR_2);
   FUNC_0(VAR_5);
  }
 }
 if (VAR_3) {
  for (VAR_4 = 0; VAR_0[VAR_4] != ((void*)0); VAR_4++) {
   if (FUNC_2(VAR_2, VAR_0[VAR_4]) == 0) {
    FUNC_1(VAR_5,
     "illegal (reserved) name :\'%s\' in type definition",
     VAR_2);
    FUNC_0(VAR_5);
   }
  }
 }
}

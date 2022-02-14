
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shellpath ;
typedef int paths ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static char *
FUNC_5(char const * VAR_5, char *VAR_6[], char *VAR_7)
{
 if (VAR_7 != ((void*)0) && (*VAR_7 == '/' || *VAR_7 == '\0'))
  return VAR_7;
 else {
  char *VAR_8;
  char VAR_9[VAR_3];




  FUNC_3(VAR_9, VAR_5, sizeof(VAR_9));
  for (VAR_8 = FUNC_4(VAR_9, ": \t\r\n"); VAR_8 != ((void*)0); VAR_8 = FUNC_4(((void*)0), ": \t\r\n")) {
   int VAR_10;
   static char VAR_11[256];

   if (VAR_7 != ((void*)0)) {
    FUNC_2(VAR_11, sizeof(VAR_11), "%s/%s", VAR_8, VAR_7);
    if (FUNC_0(VAR_11, VAR_2) == 0)
     return VAR_11;
   } else
    for (VAR_10 = 0; VAR_10 < VAR_4 && VAR_6[VAR_10] != ((void*)0); VAR_10++) {
     FUNC_2(VAR_11, sizeof(VAR_11), "%s/%s", VAR_8, VAR_6[VAR_10]);
     if (FUNC_0(VAR_11, VAR_2) == 0)
      return VAR_11;
    }
  }
  if (VAR_7 == ((void*)0))
   FUNC_1(VAR_1, "can't find shell `%s' in shell paths", VAR_7);
  FUNC_1(VAR_0, "no default shell available or defined");
  return ((void*)0);
 }
}

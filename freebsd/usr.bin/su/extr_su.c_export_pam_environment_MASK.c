
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void
FUNC_4(void)
{
 char **VAR_1;
 char *VAR_2;

 for (VAR_1 = VAR_0; *VAR_1 != ((void*)0); VAR_1++) {
  if (FUNC_1(*VAR_1)) {
   VAR_2 = FUNC_3(*VAR_1, '=');
   *VAR_2 = '\0';
   FUNC_2(*VAR_1, VAR_2 + 1, 1);
  }
  FUNC_0(*VAR_1);
 }
}

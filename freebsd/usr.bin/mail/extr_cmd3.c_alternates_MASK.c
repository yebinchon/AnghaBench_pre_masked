
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char**) ;
 void* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

int
FUNC_7(char **VAR_1)
{
 int VAR_2;
 char **VAR_3, **VAR_4, *VAR_5;

 VAR_2 = FUNC_0(VAR_1) + 1;
 if (VAR_2 == 1) {
  if (VAR_0 == 0)
   return (0);
  for (VAR_3 = VAR_0; *VAR_3 != ((void*)0); VAR_3++)
   FUNC_4("%s ", *VAR_3);
  FUNC_4("\n");
  return (0);
 }
 if (VAR_0 != 0)
  (void)FUNC_3(VAR_0);
 if ((VAR_0 = FUNC_1((unsigned)VAR_2, sizeof(char *))) == ((void*)0))
  FUNC_2(1, "Out of memory");
 for (VAR_3 = VAR_1, VAR_4 = VAR_0; *VAR_3 != ((void*)0); VAR_3++, VAR_4++) {
  VAR_5 = FUNC_1((unsigned)FUNC_6(*VAR_3) + 1, sizeof(char));
  FUNC_5(VAR_5, *VAR_3);
  *VAR_4 = VAR_5;
 }
 *VAR_4 = 0;
 return (0);
}

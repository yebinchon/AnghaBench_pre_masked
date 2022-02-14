
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int dummy; } ;


 char* FUNC_0 (char*,struct message*) ;
 struct message* VAR_0 ;
 int * FUNC_1 (char*,char*) ;
 char** VAR_1 ;

__attribute__((used)) static int
FUNC_2(char *VAR_2, int VAR_3)
{
 struct message *VAR_4;
 char *VAR_5, **VAR_6;

 VAR_2++;


 if (*VAR_2 == '\0')
  return (0);

 VAR_4 = &VAR_0[VAR_3 - 1];

 for (VAR_6 = VAR_1; *VAR_6 != ((void*)0); VAR_6++) {
  VAR_5 = FUNC_0(*VAR_6, VAR_4);
  if (VAR_5 != ((void*)0) && FUNC_1(VAR_5, VAR_2) != ((void*)0))
   return (1);
 }
 return (0);
}

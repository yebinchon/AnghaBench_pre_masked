
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_name; } ;
typedef int StringList ;


 struct group* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(StringList **VAR_0, char *VAR_1)
{
 struct group *VAR_2;
 char *VAR_3;
 char VAR_4[] = ", \t";

 if (*VAR_0 == ((void*)0))
  *VAR_0 = FUNC_3();
 for (VAR_3 = FUNC_4(VAR_1, VAR_4); VAR_3 != ((void*)0); VAR_3 = FUNC_4(((void*)0), VAR_4)) {
  VAR_2 = FUNC_0(VAR_3);
  FUNC_2(*VAR_0, FUNC_1(VAR_2->gr_name));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void
FUNC_5(char *VAR_1, nvlist_t *VAR_2)
{
 char VAR_3[VAR_0], *VAR_4;

 if (FUNC_3(VAR_1, VAR_3)) {
  VAR_4 = FUNC_4(VAR_3, '=');
  *VAR_4 = '\0';
  if (FUNC_1(VAR_2, VAR_3))
   FUNC_2(VAR_2, VAR_3);
  FUNC_0(VAR_2, VAR_3, VAR_4 + 1);
 }
}

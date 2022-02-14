
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int ,int ,int ) ;
 char** VAR_2 ;
 char** VAR_3 ;
 int FUNC_4 (char const*) ;

void FUNC_5(void)
{
 size_t VAR_4;

 FUNC_1(1, FUNC_3(".gitmodules", FUNC_4(".gitmodules"), VAR_1, VAR_0));
 FUNC_1(1, FUNC_3(".git\xe2\x80\x8cmodules", FUNC_4(".git\xe2\x80\x8cmodules"), VAR_1, VAR_0));

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  const char *VAR_5 = VAR_2[VAR_4];
  if (!FUNC_3(VAR_5, FUNC_4(VAR_5), VAR_1, VAR_0))
   FUNC_2(VAR_5);
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  const char *VAR_6 = VAR_3[VAR_4];
  if (FUNC_3(VAR_6, FUNC_4(VAR_6), VAR_1, VAR_0))
   FUNC_2(VAR_6);
 }
}

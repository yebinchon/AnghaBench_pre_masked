
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modes {int * m_name; int m_mode; } ;


 char* VAR_0 ;
 struct modes* VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, char *VAR_3[])
{
 struct modes *VAR_4;
 const char *VAR_5;

 if (VAR_2 < 2) {
  FUNC_0("Using %s mode to transfer files.\n", VAR_0);
  return;
 }
 if (VAR_2 == 2) {
  for (VAR_4 = VAR_1; VAR_4->m_name; VAR_4++)
   if (FUNC_2(VAR_3[1], VAR_4->m_name) == 0)
    break;
  if (VAR_4->m_name) {
   FUNC_1(VAR_4->m_mode);
   return;
  }
  FUNC_0("%s: unknown mode\n", VAR_3[1]);

 }

 FUNC_0("usage: %s [", VAR_3[0]);
 VAR_5 = " ";
 for (VAR_4 = VAR_1; VAR_4->m_name != ((void*)0); VAR_4++) {
  FUNC_0("%s%s", VAR_5, VAR_4->m_name);
  if (*VAR_5 == ' ')
   VAR_5 = " | ";
 }
 FUNC_0(" ]\n");
 return;
}

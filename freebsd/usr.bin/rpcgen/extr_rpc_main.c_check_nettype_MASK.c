
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char *VAR_1[])
{
 int VAR_2;
 for (VAR_2 = 0; VAR_1[VAR_2] != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_0, VAR_1[VAR_2]) == 0) {
   return (1);
  }
 }
 FUNC_1("illegal nettype :\'%s\'", VAR_0);
 return (0);
}

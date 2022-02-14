
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngcmd {int dummy; } ;


 scalar_t__ FUNC_0 (struct ngcmd const*,char const*) ;
 struct ngcmd const** VAR_0 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static const struct ngcmd *
FUNC_2(const char *VAR_1)
{
 int VAR_2, VAR_3 = -1;

 for (VAR_2 = 0; VAR_0[VAR_2] != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_0[VAR_2], VAR_1)) {
   if (VAR_3 != -1) {
    FUNC_1("\"%s\": ambiguous command", VAR_1);
    return (((void*)0));
   }
   VAR_3 = VAR_2;
  }
 }
 if (VAR_3 == -1) {
  FUNC_1("\"%s\": unknown command", VAR_1);
  return (((void*)0));
 }
 return (VAR_0[VAR_3]);
}

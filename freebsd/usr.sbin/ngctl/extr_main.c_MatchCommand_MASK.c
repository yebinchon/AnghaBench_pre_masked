
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngcmd {char const* cmd; char const** aliases; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(const struct ngcmd *VAR_2, const char *VAR_3)
{
 int VAR_4;


 if (FUNC_1(VAR_3) <= FUNC_0(VAR_2->cmd, VAR_1)) {
  if (FUNC_2(VAR_3, VAR_2->cmd, FUNC_1(VAR_3)) == 0)
   return (1);
 }


 for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_2->aliases[VAR_4] != ((void*)0); VAR_4++) {
  if (FUNC_1(VAR_2->aliases[VAR_4]) >= FUNC_1(VAR_3)) {
   if (FUNC_2(VAR_3, VAR_2->aliases[VAR_4], FUNC_1(VAR_3)) == 0)
    return (1);
  }
 }


 return (0);
}

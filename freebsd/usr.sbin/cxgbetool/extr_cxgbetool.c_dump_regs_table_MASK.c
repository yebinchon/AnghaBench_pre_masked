
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mod_regs {char* name; int ri; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, const char *VAR_3[], const uint32_t *VAR_4,
    const struct mod_regs *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
   if (!FUNC_2(VAR_3[VAR_7], VAR_5[VAR_8].name))
    break;
  }

  if (VAR_8 == VAR_6) {
   FUNC_3("invalid register block \"%s\"", VAR_3[VAR_7]);
   FUNC_1(VAR_1, "\nAvailable blocks:");
   for ( ; VAR_6; VAR_6--, VAR_5++)
    FUNC_1(VAR_1, " %s", VAR_5->name);
   FUNC_1(VAR_1, "\n");
   return (VAR_0);
  }
 }

 for ( ; VAR_6; VAR_6--, VAR_5++) {

  VAR_9 = VAR_2 == 0 ? 1 : 0;
  for (VAR_7 = 0; !VAR_9 && VAR_7 < VAR_2; VAR_7++) {
   if (!FUNC_2(VAR_3[VAR_7], VAR_5->name))
    VAR_9 = 1;
  }

  if (VAR_9)
   FUNC_0(VAR_5->ri, VAR_4);
 }

 return (0);
}

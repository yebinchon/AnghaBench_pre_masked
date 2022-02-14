
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n_accs; TYPE_1__* acc; } ;
typedef TYPE_2__ accentmap_t ;
struct TYPE_4__ {int accchar; int** map; } ;


 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(char *VAR_3, accentmap_t *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;

 FUNC_2("static accentmap_t accentmap_%s = { %d",
  VAR_3, VAR_4->n_accs);
 if (VAR_4->n_accs <= 0) {
  FUNC_2(" };\n\n");
  return;
 }
 FUNC_2(", {\n");
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_2("    /* %s=%d */\n    {", VAR_2[VAR_5], VAR_5);
  VAR_7 = VAR_4->acc[VAR_5].accchar;
  if (VAR_7 == '\'')
   FUNC_2(" '\\'', {");
  else if (VAR_7 == '\\')
   FUNC_2(" '\\\\', {");
  else if (FUNC_0(VAR_7) && FUNC_1(VAR_7))
   FUNC_2("  '%c', {", VAR_7);
  else if (VAR_7 == 0) {
   FUNC_2(" 0x00 }, \n");
   continue;
  } else
   FUNC_2(" 0x%02x, {", VAR_7);
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_7 = VAR_4->acc[VAR_5].map[VAR_6][0];
   if (VAR_7 == 0)
    break;
   if ((VAR_6 > 0) && ((VAR_6 % 4) == 0))
    FUNC_2("\n\t     ");
   if (FUNC_0(VAR_7) && FUNC_1(VAR_7))
    FUNC_2(" {  '%c',", VAR_7);
   else
    FUNC_2(" { 0x%02x,", VAR_7);
   FUNC_2("0x%02x },", VAR_4->acc[VAR_5].map[VAR_6][1]);
  }
  FUNC_2(" }, },\n");
 }
 FUNC_2("} };\n\n");
}

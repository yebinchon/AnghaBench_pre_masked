
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* type; int rel; int name; int array_max; int prefix; } ;
typedef TYPE_1__ declaration ;






 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ,int) ;

void
FUNC_5(const char *VAR_1, declaration *VAR_2, int VAR_3, const char *VAR_4)
{
 char VAR_5[8];
 const char *VAR_6;
 const char *VAR_7;

 if (FUNC_3(VAR_2->type, "void")) {
  return;
 }
 FUNC_4(VAR_0, VAR_3);
 if (FUNC_3(VAR_2->type, VAR_1) && !VAR_2->prefix) {
  FUNC_0(VAR_0, "struct ");
 }
 if (FUNC_3(VAR_2->type, "string")) {
  FUNC_0(VAR_0, "char *%s", VAR_2->name);
 } else {
  VAR_6 = "";
  if (FUNC_3(VAR_2->type, "bool")) {
   VAR_7 = "bool_t";
  } else if (FUNC_3(VAR_2->type, "opaque")) {
   VAR_7 = "char";
  } else {
   if (VAR_2->prefix) {
    FUNC_2(VAR_5, "%s ", VAR_2->prefix);
    VAR_6 = VAR_5;
   }
   VAR_7 = VAR_2->type;
  }
  switch (VAR_2->rel) {
  case 131:
   FUNC_0(VAR_0, "%s%s %s", VAR_6, VAR_7, VAR_2->name);
   break;
  case 128:
   FUNC_0(VAR_0, "%s%s %s[%s]", VAR_6, VAR_7, VAR_2->name,
    VAR_2->array_max);
   break;
  case 129:
   FUNC_0(VAR_0, "%s%s *%s", VAR_6, VAR_7, VAR_2->name);
   break;
  case 130:
   FUNC_0(VAR_0, "struct {\n");
   FUNC_4(VAR_0, VAR_3);
   FUNC_0(VAR_0, "\tu_int %s_len;\n", VAR_2->name);
   FUNC_4(VAR_0, VAR_3);
   FUNC_0(VAR_0,
    "\t%s%s *%s_val;\n", VAR_6, VAR_7, VAR_2->name);
   FUNC_4(VAR_0, VAR_3);
   FUNC_0(VAR_0, "} %s", VAR_2->name);
   break;
  }
 }
 FUNC_1(VAR_4, VAR_0);
}

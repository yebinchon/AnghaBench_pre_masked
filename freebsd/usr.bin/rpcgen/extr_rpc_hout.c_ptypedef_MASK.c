
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int relation ;
struct TYPE_5__ {char* old_type; int rel; int array_max; scalar_t__ old_prefix; } ;
struct TYPE_6__ {TYPE_1__ ty; } ;
struct TYPE_7__ {char* def_name; TYPE_2__ def; } ;
typedef TYPE_3__ definition ;






 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_4(definition *VAR_1)
{
 const char *VAR_2 = VAR_1->def_name;
 const char *VAR_3 = VAR_1->def.ty.old_type;
 char VAR_4[8];
 relation VAR_5 = VAR_1->def.ty.rel;


 if (!FUNC_2(VAR_2, VAR_3)) {
  if (FUNC_2(VAR_3, "string")) {
   VAR_3 = "char";
   VAR_5 = 129;
  } else if (FUNC_2(VAR_3, "opaque")) {
   VAR_3 = "char";
  } else if (FUNC_2(VAR_3, "bool")) {
   VAR_3 = "bool_t";
  }
  if (FUNC_3(VAR_3, VAR_2) && VAR_1->def.ty.old_prefix) {
   FUNC_1(VAR_4, "%s ", VAR_1->def.ty.old_prefix);
  } else {
   VAR_4[0] = 0;
  }
  FUNC_0(VAR_0, "typedef ");
  switch (VAR_5) {
  case 130:
   FUNC_0(VAR_0, "struct {\n");
   FUNC_0(VAR_0, "\tu_int %s_len;\n", VAR_2);
   FUNC_0(VAR_0, "\t%s%s *%s_val;\n", VAR_4, VAR_3, VAR_2);
   FUNC_0(VAR_0, "} %s", VAR_2);
   break;
  case 129:
   FUNC_0(VAR_0, "%s%s *%s", VAR_4, VAR_3, VAR_2);
   break;
  case 128:
   FUNC_0(VAR_0, "%s%s %s[%s]", VAR_4, VAR_3, VAR_2,
    VAR_1->def.ty.array_max);
   break;
  case 131:
   FUNC_0(VAR_0, "%s%s %s", VAR_4, VAR_3, VAR_2);
   break;
  }
  FUNC_0(VAR_0, ";\n");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_4__ {char* type; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,...) ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_0, Tree VAR_1, Tree VAR_2) {
 int VAR_3;
 static struct { int op; char *name; } VAR_4[] = {
  {149, "="}, {139, "*"}, {132, "-"},
  {151, "+"}, {128, "-"}, {137, "<<"},
  {135, "%"}, {129, ">>"}, {148, "&"},
  {147, "~"}, {146, "|"}, {145, "^"},
  {143, "/"}, {134, "*"}, {142, "=="},
  {141, ">="}, {140, ">"}, {138, "<="},
  {136, "<"}, {133, "!="}, {150, "&&"},
  {131, "!"}, {130, "||"}, {144, "?:"},
  {0, 0}
 };

 VAR_0 = FUNC_2(VAR_0);
 for (VAR_3 = 0; VAR_4[VAR_3].op; VAR_3++)
  if (VAR_0 == VAR_4[VAR_3].op)
   break;
 FUNC_0(VAR_4[VAR_3].name);
 if (VAR_2)
  FUNC_1("operands of %s have illegal types `%t' and `%t'\n",
   VAR_4[VAR_3].name, VAR_1->type, VAR_2->type);
 else
  FUNC_1("operand of unary %s has illegal type `%t'\n", VAR_4[VAR_3].name,
   VAR_1->type);
}

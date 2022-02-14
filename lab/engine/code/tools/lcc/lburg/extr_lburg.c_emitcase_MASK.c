
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* Term ;
struct TYPE_11__ {int nterms; int op; } ;
struct TYPE_10__ {int cost; char* code; TYPE_1__* pattern; struct TYPE_10__* next; } ;
struct TYPE_9__ {int arity; TYPE_3__* rules; int esn; } ;
struct TYPE_8__ {int nterms; TYPE_4__* right; TYPE_4__* left; int op; } ;
typedef TYPE_3__* Rule ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,TYPE_3__*,char*,int ) ;
 int FUNC_4 (TYPE_4__*,char*,char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(Term VAR_0, int VAR_1) {
 Rule VAR_2;

 FUNC_5("%1case %d: /* %S */\n", VAR_0->esn, VAR_0);
 switch (VAR_0->arity) {
 case 0: case -1:
  break;
 case 1:
  FUNC_5("%2%Plabel(LEFT_CHILD(a));\n");
  break;
 case 2:
  FUNC_5("%2%Plabel(LEFT_CHILD(a));\n");
  FUNC_5("%2%Plabel(RIGHT_CHILD(a));\n");
  break;
 default: FUNC_0(0);
 }
 for (VAR_2 = VAR_0->rules; VAR_2; VAR_2 = VAR_2->next) {
  char *VAR_3 = "\t\t\0";
  switch (VAR_0->arity) {
  case 0: case -1:
   FUNC_5("%2/* %R */\n", VAR_2);
   if (VAR_2->cost == -1) {
    FUNC_5("%2c = %s;\n", VAR_2->code);
    FUNC_3("\t\t", VAR_2, "c", 0);
   } else
    FUNC_3("\t\t", VAR_2, VAR_2->code, 0);
   break;
  case 1:
   if (VAR_2->pattern->nterms > 1) {
    FUNC_5("%2if (%1/* %R */\n", VAR_2);
    FUNC_4(VAR_2->pattern->left, "LEFT_CHILD(a)", " ");
    FUNC_5("%2) {\n");
    VAR_3 = "\t\t\t";
   } else
    FUNC_5("%2/* %R */\n", VAR_2);
   if (VAR_2->pattern->nterms == 2 && VAR_2->pattern->left
   && VAR_2->pattern->right == ((void*)0))
    FUNC_2(VAR_3, VAR_2->pattern->op, VAR_2->pattern->left->op);
   FUNC_5("%sc = ", VAR_3);
   FUNC_1(VAR_2->pattern->left, "LEFT_CHILD(a)");
   FUNC_5("%s;\n", VAR_2->code);
   FUNC_3(VAR_3, VAR_2, "c", 0);
   if (VAR_3[2])
    FUNC_5("%2}\n");
   break;
  case 2:
   if (VAR_2->pattern->nterms > 1) {
    FUNC_5("%2if (%1/* %R */\n", VAR_2);
    FUNC_4(VAR_2->pattern->left, "LEFT_CHILD(a)",
     VAR_2->pattern->right->nterms ? " && " : " ");
    FUNC_4(VAR_2->pattern->right, "RIGHT_CHILD(a)", " ");
    FUNC_5("%2) {\n");
    VAR_3 = "\t\t\t";
   } else
    FUNC_5("%2/* %R */\n", VAR_2);
   FUNC_5("%sc = ", VAR_3);
   FUNC_1(VAR_2->pattern->left, "LEFT_CHILD(a)");
   FUNC_1(VAR_2->pattern->right, "RIGHT_CHILD(a)");
   FUNC_5("%s;\n", VAR_2->code);
   FUNC_3(VAR_3, VAR_2, "c", 0);
   if (VAR_3[2])
    FUNC_5("%2}\n");
   break;
  default: FUNC_0(0);
  }
 }
 FUNC_5("%2break;\n");
}

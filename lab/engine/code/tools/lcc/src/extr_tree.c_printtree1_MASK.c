
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* Tree ;
struct TYPE_12__ {int name; } ;
struct TYPE_10__ {TYPE_1__* sym; int v; TYPE_6__* field; } ;
struct TYPE_11__ {scalar_t__ op; int node; struct TYPE_11__** kids; TYPE_2__ u; int type; } ;
struct TYPE_9__ {int name; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;
 int* FUNC_7 (int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(Tree VAR_4, int VAR_5, int VAR_6) {
 FILE *VAR_7 = VAR_5 == 1 ? VAR_3 : VAR_2;
 int VAR_8;
 static char VAR_9[] = "                                                   ";

 if (VAR_4 == 0 || *FUNC_7(VAR_8 = FUNC_5(VAR_4)))
  return;
 FUNC_3(VAR_7, "#%d%S%S", VAR_8, VAR_9, VAR_8 < 10 ? 2 : VAR_8 < 100 ? 1 : 0, VAR_9, VAR_6);
 FUNC_3(VAR_7, "%s %t", FUNC_6(VAR_4->op), VAR_4->type);
 *FUNC_7(VAR_8) = 1;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4->kids); VAR_8++)
  if (VAR_4->kids[VAR_8])
   FUNC_3(VAR_7, " #%d", FUNC_5(VAR_4->kids[VAR_8]));
 if (VAR_4->op == VAR_1 && VAR_4->u.field)
  FUNC_3(VAR_7, " %s %d..%d", VAR_4->u.field->name,
   FUNC_2(VAR_4->u.field) + FUNC_1(VAR_4->u.field), FUNC_1(VAR_4->u.field));
 else if (FUNC_4(VAR_4->op) == VAR_0)
  FUNC_3(VAR_7, " %s", FUNC_8(VAR_4->type, VAR_4->u.v));
 else if (VAR_4->u.sym)
  FUNC_3(VAR_7, " %s", VAR_4->u.sym->name);
 if (VAR_4->node)
  FUNC_3(VAR_7, " node=%p", VAR_4->node);
 FUNC_3(VAR_7, "\n");
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4->kids); VAR_8++)
  FUNC_9(VAR_4->kids[VAR_8], VAR_5, VAR_6 + 1);
}

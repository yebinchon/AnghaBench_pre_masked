
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
typedef TYPE_2__* Term ;
struct TYPE_13__ {TYPE_3__* rules; scalar_t__ lhscount; } ;
struct TYPE_12__ {char* template; char* code; int cost; struct TYPE_12__* link; struct TYPE_12__* chain; struct TYPE_12__* next; scalar_t__ ern; TYPE_1__* pattern; struct TYPE_12__* decode; TYPE_8__* lhs; scalar_t__ packed; } ;
struct TYPE_11__ {scalar_t__ kind; TYPE_3__* chain; TYPE_3__* rules; } ;
struct TYPE_10__ {TYPE_2__* op; int * right; int * left; } ;
typedef TYPE_3__* Rule ;
typedef TYPE_2__* Nonterm ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;
 TYPE_8__* FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (char*,char*) ;

Rule FUNC_5(char *VAR_3, Tree VAR_4, char *VAR_5, char *VAR_6) {
 Rule VAR_7 = FUNC_0(sizeof *VAR_7), *VAR_8;
 Term VAR_9 = VAR_4->op;
 char *VAR_10;

 VAR_7->lhs = FUNC_1(VAR_3);
 VAR_7->packed = ++VAR_7->lhs->lhscount;
 for (VAR_8 = &VAR_7->lhs->rules; *VAR_8; VAR_8 = &(*VAR_8)->decode)
  ;
 *VAR_8 = VAR_7;
 VAR_7->pattern = VAR_4;
 VAR_7->ern = ++VAR_1;
 VAR_7->template = VAR_5;
 VAR_7->code = VAR_6;
 VAR_7->cost = FUNC_3(VAR_6, &VAR_10, 10);
 if (*VAR_10) {
  VAR_7->cost = -1;
  VAR_7->code = FUNC_2("(%s)", VAR_6);
 }
 if (VAR_9->kind == VAR_0) {
  for (VAR_8 = &VAR_9->rules; *VAR_8; VAR_8 = &(*VAR_8)->next)
   ;
  *VAR_8 = VAR_7;
 } else if (VAR_4->left == ((void*)0) && VAR_4->right == ((void*)0)) {
  Nonterm VAR_11 = VAR_4->op;
  VAR_7->chain = VAR_11->chain;
         VAR_11->chain = VAR_7;
  if (VAR_7->cost == -1)
   FUNC_4("illegal nonconstant cost `%s'\n", VAR_6);
 }
 for (VAR_8 = &VAR_2; *VAR_8; VAR_8 = &(*VAR_8)->link)
  ;
 VAR_7->link = *VAR_8;
 *VAR_8 = VAR_7;
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* Term ;
struct TYPE_6__ {int esn; int arity; struct TYPE_6__* link; int name; int kind; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,char*,...) ;

Term FUNC_3(char *VAR_2, int VAR_3) {
 Term VAR_4 = FUNC_1(VAR_2), *VAR_5 = &VAR_1;

 if (VAR_4)
  FUNC_2("redefinition of terminal `%s'\n", VAR_2);
 else
  VAR_4 = FUNC_0(VAR_2);
 VAR_4->kind = VAR_0;
 VAR_4->esn = VAR_3;
 VAR_4->arity = -1;
 while (*VAR_5 && (*VAR_5)->esn < VAR_4->esn)
  VAR_5 = &(*VAR_5)->link;
 if (*VAR_5 && (*VAR_5)->esn == VAR_4->esn)
  FUNC_2("duplicate external symbol number `%s=%d'\n",
   VAR_4->name, VAR_4->esn);
 VAR_4->link = *VAR_5;
 *VAR_5 = VAR_4;
 return VAR_4;
}

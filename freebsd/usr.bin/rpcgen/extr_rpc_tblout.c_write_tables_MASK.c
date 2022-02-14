
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ val; struct TYPE_5__* next; } ;
typedef TYPE_1__ list ;
struct TYPE_6__ {scalar_t__ def_kind; } ;
typedef TYPE_2__ definition ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(void)
{
 list *VAR_3;
 definition *VAR_4;

 FUNC_0(VAR_2, "\n");
 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  VAR_4 = (definition *) VAR_3->val;
  if (VAR_4->def_kind == VAR_0) {
   FUNC_1(VAR_4);
  }
 }
}

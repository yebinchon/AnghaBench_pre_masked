
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


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(void)
{
 list *VAR_4;
 definition *VAR_5;

 FUNC_0(VAR_3,
  "\n/* Default timeout can be changed using clnt_control() */\n");
 FUNC_0(VAR_3, "static struct timeval TIMEOUT = { %d, 0 };\n",
  VAR_0);
 for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  VAR_5 = (definition *) VAR_4->val;
  if (VAR_5->def_kind == VAR_1) {
   FUNC_1(VAR_5);
  }
 }
}

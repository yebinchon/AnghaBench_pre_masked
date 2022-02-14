
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct labhash {TYPE_1__* lh_cmd; int lh_ref; struct labhash* lh_next; } ;
struct TYPE_2__ {int t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct labhash*) ;
 struct labhash** VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct labhash *VAR_4, *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  for (VAR_4 = VAR_2[VAR_6]; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
   VAR_5 = VAR_4->lh_next;
   if (!VAR_4->lh_ref)
    FUNC_1("%lu: %s: unused label '%s'",
        VAR_3, VAR_1, VAR_4->lh_cmd->t);
   FUNC_0(VAR_4);
  }
 }
}

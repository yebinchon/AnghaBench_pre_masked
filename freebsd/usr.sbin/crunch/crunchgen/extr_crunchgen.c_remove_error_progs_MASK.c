
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int name; int goterror; } ;
typedef TYPE_1__ prog_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;

void
FUNC_1(void)
{
 prog_t *VAR_2, *VAR_3;

 VAR_2 = ((void*)0); VAR_3 = VAR_1;
 while (VAR_3 != ((void*)0)) {
  if (!VAR_3->goterror)
   VAR_2 = VAR_3, VAR_3 = VAR_3->next;
  else {

   FUNC_0("%s: %s: ignoring program because of errors",
       VAR_0, VAR_3->name);
   if (VAR_2)
    VAR_2->next = VAR_3->next;
   else
    VAR_1 = VAR_3->next;
   VAR_3 = VAR_3->next;
  }
 }
}

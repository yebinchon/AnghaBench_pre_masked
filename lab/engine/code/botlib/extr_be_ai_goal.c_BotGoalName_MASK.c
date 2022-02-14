
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int number; size_t iteminfo; struct TYPE_6__* next; } ;
typedef TYPE_2__ levelitem_t ;
struct TYPE_7__ {TYPE_1__* iteminfo; } ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (char*,int ,int) ;
 TYPE_4__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(int VAR_2, char *VAR_3, int VAR_4)
{
 levelitem_t *VAR_5;

 if (!VAR_0) return;

 for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next)
 {
  if (VAR_5->number == VAR_2)
  {
   FUNC_0(VAR_3, VAR_0->iteminfo[VAR_5->iteminfo].name, VAR_4);
   return;
  }
 }
 FUNC_1(VAR_3, "");
}

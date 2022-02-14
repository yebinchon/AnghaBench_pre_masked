
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct _msgT* le_next; } ;
struct _msgT {int msgId; int str; TYPE_2__ entries; } ;
struct TYPE_4__ {struct _msgT* lh_first; } ;
struct TYPE_6__ {TYPE_1__ msghead; } ;


 int FUNC_0 (struct _msgT*,int ) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;

void
FUNC_4(int VAR_2)
{
 struct _msgT *VAR_3;

 if (!VAR_0)
  FUNC_1("you can't delete a message before defining the set");

 VAR_3 = VAR_0->msghead.lh_first;
 for (; VAR_3 != ((void*)0) && VAR_3->msgId < VAR_2; VAR_3 = VAR_3->entries.le_next);

 if (VAR_3 && VAR_3->msgId == VAR_2) {
  FUNC_2(VAR_3->str);
  FUNC_0(VAR_3, VAR_1);
  return;
 }
 FUNC_3(((void*)0), "specified msg doesn't exist");
}

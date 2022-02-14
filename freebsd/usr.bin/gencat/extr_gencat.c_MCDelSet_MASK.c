
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct _setT* lh_first; } ;
struct TYPE_4__ {struct _setT* le_next; } ;
struct _setT {int setId; int str; TYPE_2__ msghead; TYPE_1__ entries; } ;
struct _msgT {int setId; int str; TYPE_2__ msghead; TYPE_1__ entries; } ;
struct TYPE_6__ {struct _setT* lh_first; } ;


 int FUNC_0 (struct _setT*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (int *,char*) ;

void
FUNC_3(int VAR_2)
{
 struct _setT *VAR_3;
 struct _msgT *VAR_4;

 VAR_3 = VAR_1.lh_first;
 for (; VAR_3 != ((void*)0) && VAR_3->setId < VAR_2; VAR_3 = VAR_3->entries.le_next);

 if (VAR_3 && VAR_3->setId == VAR_2) {

  VAR_4 = VAR_3->msghead.lh_first;
  while (VAR_4) {
   FUNC_1(VAR_4->str);
   FUNC_0(VAR_4, VAR_0);
  }

  FUNC_0(VAR_3, VAR_0);
  return;
 }
 FUNC_2(((void*)0), "specified set doesn't exist");
}

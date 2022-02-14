
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct _msgT* le_next; } ;
struct _msgT {int msgId; int str; TYPE_1__ entries; } ;
struct TYPE_6__ {struct _msgT* lh_first; } ;
struct TYPE_5__ {TYPE_3__ msghead; } ;


 int FUNC_0 (struct _msgT*,struct _msgT*,int ) ;
 int FUNC_1 (TYPE_3__*,struct _msgT*,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct _msgT*,char,int) ;
 struct _msgT* FUNC_5 (int) ;
 int FUNC_6 (char const*) ;

void
FUNC_7(int VAR_3, const char *VAR_4)
{
 struct _msgT *VAR_5, *VAR_6;

 if (!VAR_1)
  FUNC_2("can't specify a message when no set exists");

 if (VAR_3 <= 0) {
  FUNC_2("msgId's must be greater than zero");

 }
 if (VAR_3 > VAR_0) {
  FUNC_2("msgID exceeds limit");

 }

 VAR_5 = VAR_1->msghead.lh_first;
 VAR_6 = ((void*)0);
 for (; VAR_5 != ((void*)0) && VAR_5->msgId < VAR_3; VAR_6 = VAR_5, VAR_5 = VAR_5->entries.le_next);

 if (VAR_5 && VAR_5->msgId == VAR_3) {
  FUNC_3(VAR_5->str);
 } else {
  VAR_5 = FUNC_5(sizeof(struct _msgT));
  FUNC_4(VAR_5, '\0', sizeof(struct _msgT));

  if (VAR_6 == ((void*)0)) {
   FUNC_1(&VAR_1->msghead, VAR_5, VAR_2);
  } else {
   FUNC_0(VAR_6, VAR_5, VAR_2);
  }
 }

 VAR_5->msgId = VAR_3;
 VAR_5->str = FUNC_6(VAR_4);
}

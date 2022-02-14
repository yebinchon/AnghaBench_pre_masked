
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct _setT* le_next; } ;
struct _setT {int setId; int msghead; TYPE_1__ entries; } ;
struct TYPE_5__ {struct _setT* lh_first; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct _setT*,struct _setT*,int ) ;
 int FUNC_2 (TYPE_2__*,struct _setT*,int ) ;
 int VAR_0 ;
 struct _setT* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct _setT*,char,int) ;
 TYPE_2__ VAR_3 ;
 struct _setT* FUNC_5 (int) ;

void
FUNC_6(int VAR_4)
{
 struct _setT *VAR_5, *VAR_6;

 if (VAR_4 <= 0) {
  FUNC_3("setId's must be greater than zero");

 }
 if (VAR_4 > VAR_0) {
  FUNC_3("setId exceeds limit");

 }

 VAR_5 = VAR_3.lh_first;
 VAR_6 = ((void*)0);
 for (; VAR_5 != ((void*)0) && VAR_5->setId < VAR_4; VAR_6 = VAR_5, VAR_5 = VAR_5->entries.le_next);

 if (VAR_5 && VAR_5->setId == VAR_4) {
  ;
 } else {
  VAR_5 = FUNC_5(sizeof(struct _setT));
  FUNC_4(VAR_5, '\0', sizeof(struct _setT));
  FUNC_0(&VAR_5->msghead);

  VAR_5->setId = VAR_4;

  if (VAR_6 == ((void*)0)) {
   FUNC_2(&VAR_3, VAR_5, VAR_2);
  } else {
   FUNC_1(VAR_6, VAR_5, VAR_2);
  }
 }

 VAR_1 = VAR_5;
}

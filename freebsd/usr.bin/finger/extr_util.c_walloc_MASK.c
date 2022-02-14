
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ WHERE ;
struct TYPE_7__ {TYPE_1__* wtail; TYPE_1__* whead; } ;
typedef TYPE_2__ PERSON ;


 int FUNC_0 (int,int *) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static WHERE *
FUNC_2(PERSON *VAR_0)
{
 WHERE *VAR_1;

 if ((VAR_1 = FUNC_1(sizeof(WHERE))) == ((void*)0))
  FUNC_0(1, ((void*)0));
 if (VAR_0->whead == ((void*)0))
  VAR_0->whead = VAR_0->wtail = VAR_1;
 else {
  VAR_0->wtail->next = VAR_1;
  VAR_0->wtail = VAR_1;
 }
 VAR_1->next = ((void*)0);
 return(VAR_1);
}

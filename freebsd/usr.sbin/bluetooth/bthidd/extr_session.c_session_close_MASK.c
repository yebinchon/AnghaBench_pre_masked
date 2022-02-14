
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* bthid_session_p ;
struct TYPE_8__ {int intr; int ctrl; int vkbd; int umouse; int ukbd; struct TYPE_8__* keys2; struct TYPE_8__* keys1; struct TYPE_8__* ctx; TYPE_1__* srv; } ;
struct TYPE_7__ {int maxfd; int rfdset; int wfdset; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int VAR_0 ;

void
FUNC_6(bthid_session_p VAR_1)
{
 FUNC_2(VAR_1 != ((void*)0));
 FUNC_2(VAR_1->srv != ((void*)0));

 FUNC_1(VAR_1, VAR_0);

 if (VAR_1->intr != -1) {
  FUNC_0(VAR_1->intr, &VAR_1->srv->rfdset);
  FUNC_0(VAR_1->intr, &VAR_1->srv->wfdset);
  FUNC_3(VAR_1->intr);

  if (VAR_1->srv->maxfd == VAR_1->intr)
   VAR_1->srv->maxfd --;
 }

 if (VAR_1->ctrl != -1) {
  FUNC_0(VAR_1->ctrl, &VAR_1->srv->rfdset);
  FUNC_0(VAR_1->ctrl, &VAR_1->srv->wfdset);
  FUNC_3(VAR_1->ctrl);

  if (VAR_1->srv->maxfd == VAR_1->ctrl)
   VAR_1->srv->maxfd --;
 }

 if (VAR_1->vkbd != -1) {
  FUNC_0(VAR_1->vkbd, &VAR_1->srv->rfdset);
  FUNC_3(VAR_1->vkbd);

  if (VAR_1->srv->maxfd == VAR_1->vkbd)
   VAR_1->srv->maxfd --;
 }

 if (VAR_1->umouse != -1)
  FUNC_3(VAR_1->umouse);

 if (VAR_1->ukbd != -1) {
  FUNC_0(VAR_1->ukbd, &VAR_1->srv->rfdset);
  FUNC_3(VAR_1->ukbd);

  if (VAR_1->srv->maxfd == VAR_1->ukbd)
   VAR_1->srv->maxfd --;
 }

 FUNC_4(VAR_1->ctx);
 FUNC_4(VAR_1->keys1);
 FUNC_4(VAR_1->keys2);

 FUNC_5(VAR_1, 0, sizeof(*VAR_1));
 FUNC_4(VAR_1);
}

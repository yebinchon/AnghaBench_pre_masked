
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* hid_device_p ;
typedef TYPE_2__* bthid_session_p ;
typedef TYPE_3__* bthid_server_p ;
struct TYPE_11__ {int sessions; } ;
struct TYPE_10__ {int ctrl; int intr; int vkbd; int ukbd; int umouse; struct TYPE_10__* keys1; int * keys2; scalar_t__ obutt; int state; int * ctx; int bdaddr; TYPE_3__* srv; } ;
struct TYPE_9__ {int bdaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_1 ;

bthid_session_p
FUNC_7(bthid_server_p VAR_2, hid_device_p const VAR_3)
{
 bthid_session_p VAR_4;

 FUNC_1(VAR_2 != ((void*)0));
 FUNC_1(VAR_3 != ((void*)0));

 if ((VAR_4 = (bthid_session_p) FUNC_5(sizeof(*VAR_4))) == ((void*)0))
  return (((void*)0));

 VAR_4->srv = VAR_2;
 FUNC_6(&VAR_4->bdaddr, &VAR_3->bdaddr, sizeof(VAR_4->bdaddr));
 VAR_4->ctrl = -1;
 VAR_4->intr = -1;
 VAR_4->vkbd = -1;
 VAR_4->ctx = ((void*)0);
 VAR_4->state = VAR_0;
 VAR_4->ukbd = -1;
 VAR_4->umouse = -1;
 VAR_4->obutt = 0;

 VAR_4->keys1 = FUNC_2(FUNC_4());
 if (VAR_4->keys1 == ((void*)0)) {
  FUNC_3(VAR_4);
  return (((void*)0));
 }

 VAR_4->keys2 = FUNC_2(FUNC_4());
 if (VAR_4->keys2 == ((void*)0)) {
  FUNC_3(VAR_4->keys1);
  FUNC_3(VAR_4);
  return (((void*)0));
 }

 FUNC_0(&VAR_2->sessions, VAR_4, VAR_1);

 return (VAR_4);
}

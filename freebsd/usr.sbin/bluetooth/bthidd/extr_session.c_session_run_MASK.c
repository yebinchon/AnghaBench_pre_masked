
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr_l2cap {int l2cap_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int local ;
typedef int int32_t ;
typedef TYPE_2__* hid_device_p ;
typedef TYPE_3__* bthid_session_p ;
struct TYPE_11__ {scalar_t__ vkbd; scalar_t__ umouse; scalar_t__ ukbd; TYPE_1__* srv; int bdaddr; int ctrl; } ;
struct TYPE_10__ {scalar_t__ keyboard; scalar_t__ mouse; } ;
struct TYPE_9__ {scalar_t__ maxfd; int rfdset; scalar_t__ uinput; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ,struct sockaddr*,int*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int *) ;

int32_t
FUNC_10(bthid_session_p VAR_3)
{
 hid_device_p VAR_4 = FUNC_2(&VAR_3->bdaddr);
 struct sockaddr_l2cap VAR_5;
 socklen_t VAR_6;

 if (VAR_4->keyboard) {

  VAR_3->vkbd = FUNC_5("/dev/vkbdctl", VAR_1);
  if (VAR_3->vkbd < 0) {
   FUNC_7(VAR_0, "Could not open /dev/vkbdctl " "for %s. %s (%d)", FUNC_1(&VAR_3->bdaddr, ((void*)0)),

    FUNC_6(VAR_2), VAR_2);
   return (-1);
  }

  FUNC_0(VAR_3->vkbd, &VAR_3->srv->rfdset);
  if (VAR_3->vkbd > VAR_3->srv->maxfd)
   VAR_3->srv->maxfd = VAR_3->vkbd;
 }


 FUNC_4(VAR_3);


 VAR_6 = sizeof(VAR_5);
 FUNC_3(VAR_3->ctrl, (struct sockaddr *) &VAR_5, &VAR_6);

 if (VAR_4->mouse && VAR_3->srv->uinput) {
  VAR_3->umouse = FUNC_9(VAR_4, &VAR_5.l2cap_bdaddr);
  if (VAR_3->umouse < 0) {
   FUNC_7(VAR_0, "Could not open /dev/uinput " "for %s. %s (%d)", FUNC_1(&VAR_3->bdaddr,

    ((void*)0)), FUNC_6(VAR_2), VAR_2);
   return (-1);
  }
 }
 if (VAR_4->keyboard && VAR_3->srv->uinput) {
  VAR_3->ukbd = FUNC_8(VAR_4, &VAR_5.l2cap_bdaddr);
  if (VAR_3->ukbd < 0) {
   FUNC_7(VAR_0, "Could not open /dev/uinput " "for %s. %s (%d)", FUNC_1(&VAR_3->bdaddr,

    ((void*)0)), FUNC_6(VAR_2), VAR_2);
   return (-1);
  }

  FUNC_0(VAR_3->ukbd, &VAR_3->srv->rfdset);
  if (VAR_3->ukbd > VAR_3->srv->maxfd)
   VAR_3->srv->maxfd = VAR_3->ukbd;
 }
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct sockaddr_l2cap {int l2cap_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int l2addr ;
typedef scalar_t__ int32_t ;
typedef TYPE_1__* hid_device_p ;
typedef TYPE_2__* bthid_session_p ;
typedef TYPE_3__* bthid_server_p ;
struct TYPE_15__ {scalar_t__ ctrl; scalar_t__ maxfd; int rfdset; } ;
struct TYPE_14__ {int ctrl; scalar_t__ state; int intr; } ;
struct TYPE_13__ {scalar_t__ new_device; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,char*,...) ;
 int FUNC_12 () ;

__attribute__((used)) static int32_t
FUNC_13(bthid_server_p VAR_7, int32_t VAR_8)
{
 bthid_session_p VAR_9;
 hid_device_p VAR_10;
 struct sockaddr_l2cap VAR_11;
 int32_t VAR_12;
 socklen_t VAR_13;

 VAR_13 = sizeof(VAR_11);
 if ((VAR_12 = FUNC_1(VAR_8, (struct sockaddr *) &VAR_11, &VAR_13)) < 0) {
  FUNC_11(VAR_1, "Could not accept %s connection. %s (%d)",
   (VAR_8 == VAR_7->ctrl)? "control" : "interrupt",
   FUNC_10(VAR_6), VAR_6);
  return (-1);
 }


 if ((VAR_10 = FUNC_5(&VAR_11.l2cap_bdaddr)) == ((void*)0)) {
  FUNC_11(VAR_1, "Rejecting %s connection from %s. " "Device not configured",

   (VAR_8 == VAR_7->ctrl)? "control" : "interrupt",
   FUNC_3(&VAR_11.l2cap_bdaddr, ((void*)0)));
  FUNC_4(VAR_12);
  return (-1);
 }


 if ((VAR_9 = FUNC_6(VAR_7, &VAR_11.l2cap_bdaddr)) == ((void*)0)) {
  VAR_10->new_device = 0;
  FUNC_12();


  if ((VAR_9 = FUNC_8(VAR_7, VAR_10)) == ((void*)0)) {
   FUNC_11(VAR_0, "Could not open inbound session "
    "for %s", FUNC_3(&VAR_11.l2cap_bdaddr, ((void*)0)));
   FUNC_4(VAR_12);
   return (-1);
  }
 }


 if (VAR_8 == VAR_7->ctrl) {
  FUNC_2(VAR_9->ctrl == -1);
  VAR_9->ctrl = VAR_12;
  VAR_9->state = (VAR_9->intr == -1)? VAR_5 : VAR_3;
 } else {
  FUNC_2(VAR_9->intr == -1);
  VAR_9->intr = VAR_12;
  VAR_9->state = (VAR_9->ctrl == -1)? VAR_4 : VAR_3;
 }

 FUNC_0(VAR_12, &VAR_7->rfdset);
 if (VAR_12 > VAR_7->maxfd)
  VAR_7->maxfd = VAR_12;

 FUNC_11(VAR_2, "Accepted %s connection from %s",
  (VAR_8 == VAR_7->ctrl)? "control" : "interrupt",
  FUNC_3(&VAR_11.l2cap_bdaddr, ((void*)0)));


 if (VAR_9->state == VAR_3 && FUNC_9(VAR_9) < 0) {
  FUNC_7(VAR_9);
  return (-1);
 }

 return (0);
}

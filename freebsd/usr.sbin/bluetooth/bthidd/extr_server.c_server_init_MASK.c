
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_l2cap {int l2cap_len; void* l2cap_psm; scalar_t__ l2cap_cid; int l2cap_bdaddr_type; int l2cap_bdaddr; int l2cap_family; } ;
struct sockaddr {int dummy; } ;
typedef int l2addr ;
typedef int int32_t ;
typedef TYPE_1__* bthid_server_p ;
struct TYPE_3__ {int ctrl; int intr; int cons; int maxfd; int rfdset; int bdaddr; int sessions; int wfdset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (char*,int ) ;
 void* FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int ,int ) ;

int32_t
FUNC_14(bthid_server_p VAR_8)
{
 struct sockaddr_l2cap VAR_9;

 FUNC_3(VAR_8 != ((void*)0));

 VAR_8->ctrl = VAR_8->intr = -1;
 FUNC_1(&VAR_8->rfdset);
 FUNC_1(&VAR_8->wfdset);
 FUNC_2(&VAR_8->sessions);


 VAR_8->cons = FUNC_10("/dev/consolectl", VAR_4);
 if (VAR_8->cons < 0) {
  FUNC_13(VAR_3, "Could not open /dev/consolectl. %s (%d)",
   FUNC_12(VAR_7), VAR_7);
  return (-1);
 }


 VAR_8->ctrl = FUNC_11(VAR_5, VAR_6, VAR_2);
 if (VAR_8->ctrl < 0) {
  FUNC_13(VAR_3, "Could not create control L2CAP socket. " "%s (%d)", FUNC_12(VAR_7), VAR_7);

  FUNC_5(VAR_8->cons);
  return (-1);
 }

 VAR_9.l2cap_len = sizeof(VAR_9);
 VAR_9.l2cap_family = VAR_0;
 FUNC_9(&VAR_9.l2cap_bdaddr, &VAR_8->bdaddr, sizeof(VAR_9.l2cap_bdaddr));
 VAR_9.l2cap_psm = FUNC_6(0x11);
 VAR_9.l2cap_bdaddr_type = VAR_1;
 VAR_9.l2cap_cid = 0;

 if (FUNC_4(VAR_8->ctrl, (struct sockaddr *) &VAR_9, sizeof(VAR_9)) < 0) {
  FUNC_13(VAR_3, "Could not bind control L2CAP socket. " "%s (%d)", FUNC_12(VAR_7), VAR_7);

  FUNC_5(VAR_8->ctrl);
  FUNC_5(VAR_8->cons);
  return (-1);
 }

 if (FUNC_7(VAR_8->ctrl, 10) < 0) {
  FUNC_13(VAR_3, "Could not listen on control L2CAP socket. " "%s (%d)", FUNC_12(VAR_7), VAR_7);

  FUNC_5(VAR_8->ctrl);
  FUNC_5(VAR_8->cons);
  return (-1);
 }


 VAR_8->intr = FUNC_11(VAR_5, VAR_6, VAR_2);
 if (VAR_8->intr < 0) {
  FUNC_13(VAR_3, "Could not create interrupt L2CAP socket. " "%s (%d)", FUNC_12(VAR_7), VAR_7);

  FUNC_5(VAR_8->ctrl);
  FUNC_5(VAR_8->cons);
  return (-1);
 }

 VAR_9.l2cap_psm = FUNC_6(0x13);

 if (FUNC_4(VAR_8->intr, (struct sockaddr *) &VAR_9, sizeof(VAR_9)) < 0) {
  FUNC_13(VAR_3, "Could not bind interrupt L2CAP socket. " "%s (%d)", FUNC_12(VAR_7), VAR_7);

  FUNC_5(VAR_8->intr);
  FUNC_5(VAR_8->ctrl);
  FUNC_5(VAR_8->cons);
  return (-1);
 }

 if (FUNC_7(VAR_8->intr, 10) < 0) {
  FUNC_13(VAR_3, "Could not listen on interrupt L2CAP socket. " "%s (%d)", FUNC_12(VAR_7), VAR_7);

  FUNC_5(VAR_8->intr);
  FUNC_5(VAR_8->ctrl);
  FUNC_5(VAR_8->cons);
  return (-1);
 }

 FUNC_0(VAR_8->ctrl, &VAR_8->rfdset);
 FUNC_0(VAR_8->intr, &VAR_8->rfdset);
 VAR_8->maxfd = FUNC_8(VAR_8->ctrl, VAR_8->intr);

 return (0);
}

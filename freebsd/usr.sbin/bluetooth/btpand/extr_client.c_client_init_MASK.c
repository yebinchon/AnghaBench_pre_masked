
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_l2cap {int l2cap_len; int l2cap_bdaddr; int l2cap_psm; scalar_t__ l2cap_cid; int l2cap_bdaddr_type; int l2cap_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sa ;
typedef int n ;
typedef int mtu ;
typedef int mru ;
struct TYPE_6__ {int mru; int mtu; int state; int laddr; int raddr; int recv; int send; } ;
typedef TYPE_1__ channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (TYPE_1__*,int ,int,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,struct sockaddr*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ,int ,int*,int*) ;
 int FUNC_14 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int,...) ;
 int FUNC_17 (struct sockaddr_l2cap*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_18 (int,int ,int ,int*,int) ;
 int FUNC_19 (int ,int ,int ) ;

void
FUNC_20(void)
{
 struct sockaddr_l2cap VAR_24;
 channel_t *VAR_25;
 socklen_t VAR_26;
 int VAR_27, VAR_28;
 uint16_t VAR_29, VAR_30;

 if (FUNC_1(&VAR_21))
  return;

 if (VAR_23)
  FUNC_9();

 VAR_27 = FUNC_19(VAR_7, VAR_9, VAR_2);
 if (VAR_27 == -1) {
  FUNC_15("Could not open L2CAP socket: %m");
  FUNC_12(VAR_6);
 }

 FUNC_17(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.l2cap_family = VAR_0;
 VAR_24.l2cap_len = sizeof(VAR_24);
 VAR_24.l2cap_bdaddr_type = VAR_1;
 VAR_24.l2cap_cid = 0;

 FUNC_2(&VAR_24.l2cap_bdaddr, &VAR_20);
 if (FUNC_3(VAR_27, (struct sockaddr *)&VAR_24, sizeof(VAR_24)) == -1) {
  FUNC_15("Could not bind client socket: %m");
  FUNC_12(VAR_6);
 }

 VAR_29 = VAR_3;
 if (FUNC_18(VAR_27, VAR_10, VAR_12, &VAR_29, sizeof(VAR_29)) == -1) {
  FUNC_15("Could not set L2CAP IMTU (%d): %m", VAR_29);
  FUNC_12(VAR_6);
 }

 FUNC_16("Opening connection to service 0x%4.4x at %s",
     VAR_22, FUNC_5(&VAR_21, ((void*)0)));

 VAR_24.l2cap_psm = FUNC_14(VAR_19);
 FUNC_2(&VAR_24.l2cap_bdaddr, &VAR_21);
 if (FUNC_11(VAR_27, (struct sockaddr *)&VAR_24, sizeof(VAR_24)) == -1) {
  FUNC_15("Could not connect: %m");
  FUNC_12(VAR_6);
 }

 VAR_26 = sizeof(VAR_29);
 if (FUNC_13(VAR_27, VAR_10, VAR_12, &VAR_29, &VAR_26) == -1) {
  FUNC_15("Could not get IMTU: %m");
  FUNC_12(VAR_6);
 }
 if (VAR_29 < VAR_3) {
  FUNC_15("L2CAP IMTU too small (%d)", VAR_29);
  FUNC_12(VAR_6);
 }

 VAR_26 = sizeof(VAR_28);
 if (FUNC_13(VAR_27, VAR_11, VAR_14, &VAR_28, &VAR_26) == -1) {
  FUNC_15("Could not read SO_RCVBUF");
  FUNC_12(VAR_6);
 }
 if (VAR_28 < (VAR_29 * 10)) {
  VAR_28 = VAR_29 * 10;
  if (FUNC_18(VAR_27, VAR_11, VAR_14, &VAR_28, sizeof(VAR_28)) == -1)
   FUNC_16("Could not increase SO_RCVBUF (from %d)", VAR_28);
 }

 VAR_26 = sizeof(VAR_30);
 if (FUNC_13(VAR_27, VAR_10, VAR_13, &VAR_30, &VAR_26) == -1) {
  FUNC_15("Could not get L2CAP OMTU: %m");
  FUNC_12(VAR_6);
 }
 if (VAR_30 < VAR_3) {
  FUNC_15("L2CAP OMTU too small (%d)", VAR_30);
  FUNC_12(VAR_6);
 }

 VAR_26 = sizeof(VAR_28);
 if (FUNC_13(VAR_27, VAR_11, VAR_15, &VAR_28, &VAR_26) == -1) {
  FUNC_15("Could not get socket send buffer size: %m");
  FUNC_10(VAR_27);
  return;
 }
 if (VAR_28 < (VAR_30 * 2)) {
  VAR_28 = VAR_30 * 2;
  if (FUNC_18(VAR_27, VAR_11, VAR_15, &VAR_28, sizeof(VAR_28)) == -1) {
   FUNC_15("Could not set socket send buffer size (%d): %m", VAR_28);
   FUNC_10(VAR_27);
   return;
  }
 }
 VAR_28 = VAR_30;
 if (FUNC_18(VAR_27, VAR_11, VAR_16, &VAR_28, sizeof(VAR_28)) == -1) {
  FUNC_15("Could not set socket low water mark (%d): %m", VAR_28);
  FUNC_10(VAR_27);
  return;
 }

 VAR_25 = FUNC_6();
 if (VAR_25 == ((void*)0))
  FUNC_12(VAR_6);

 VAR_25->send = VAR_18;
 VAR_25->recv = VAR_17;
 VAR_25->mru = VAR_29;
 VAR_25->mtu = VAR_30;
 FUNC_0(VAR_25->raddr, &VAR_21);
 FUNC_0(VAR_25->laddr, &VAR_20);
 VAR_25->state = VAR_5;
 FUNC_8(VAR_25, 10);
 if (!FUNC_7(VAR_25, VAR_27))
  FUNC_12(VAR_6);

 FUNC_4(VAR_25, VAR_4,
     2, VAR_22, VAR_8);
}

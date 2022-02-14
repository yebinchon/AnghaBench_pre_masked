
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_l2cap {int l2cap_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int ra ;
typedef int n ;
typedef int mtu ;
typedef int mru ;
typedef int la ;
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
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,struct sockaddr*,int*) ;
 int FUNC_9 (int,int ,int ,int*,int*) ;
 int FUNC_10 (int,int ,int*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int,int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_14(int VAR_13, short VAR_14, void *VAR_15)
{
 struct sockaddr_l2cap VAR_16, VAR_17;
 channel_t *VAR_18;
 socklen_t VAR_19;
 int VAR_20, VAR_21;
 uint16_t VAR_22, VAR_23;

 VAR_19 = sizeof(VAR_16);
 VAR_20 = FUNC_0(VAR_13, (struct sockaddr *)&VAR_16, &VAR_19);
 if (VAR_20 == -1)
  return;

 VAR_21 = 1;
 if (FUNC_10(VAR_20, VAR_3, &VAR_21) == -1) {
  FUNC_11("Could not set NonBlocking IO: %m");
  FUNC_7(VAR_20);
  return;
 }

 VAR_19 = sizeof(VAR_22);
 if (FUNC_9(VAR_20, VAR_4, VAR_6, &VAR_22, &VAR_19) == -1) {
  FUNC_11("Could not get L2CAP IMTU: %m");
  FUNC_7(VAR_20);
  return;
 }
 if(VAR_22 < VAR_0) {
  FUNC_11("L2CAP IMTU too small (%d)", VAR_22);
  FUNC_7(VAR_20);
  return;
 }

 VAR_19 = sizeof(VAR_21);
 if (FUNC_9(VAR_20, VAR_5, VAR_8, &VAR_21, &VAR_19) == -1) {
  FUNC_11("Could not read SO_RCVBUF");
  FUNC_7(VAR_20);
  return;
 }
 if (VAR_21 < (VAR_22 * 10)) {
  VAR_21 = VAR_22 * 10;
  if (FUNC_13(VAR_20, VAR_5, VAR_8, &VAR_21, sizeof(VAR_21)) == -1)
   FUNC_12("Could not increase SO_RCVBUF (from %d)", VAR_21);
 }

 VAR_19 = sizeof(VAR_23);
 if (FUNC_9(VAR_20, VAR_4, VAR_7, &VAR_23, &VAR_19) == -1) {
  FUNC_11("Could not get L2CAP OMTU: %m");
  FUNC_7(VAR_20);
  return;
 }
 if (VAR_23 < VAR_0) {
  FUNC_11("L2CAP OMTU too small (%d)", VAR_23);
  FUNC_7(VAR_20);
  return;
 }

 VAR_19 = sizeof(VAR_21);
 if (FUNC_9(VAR_20, VAR_5, VAR_9, &VAR_21, &VAR_19) == -1) {
  FUNC_11("Could not get socket send buffer size: %m");
  FUNC_7(VAR_20);
  return;
 }

 if (VAR_21 < (VAR_23 * 2)) {
  VAR_21 = VAR_23 * 2;
  if (FUNC_13(VAR_20, VAR_5, VAR_9, &VAR_21, sizeof(VAR_21)) == -1) {
   FUNC_11("Could not set socket send buffer size (%d): %m", VAR_21);
   FUNC_7(VAR_20);
   return;
  }
 }

 VAR_21 = VAR_23;
 if (FUNC_13(VAR_20, VAR_5, VAR_10, &VAR_21, sizeof(VAR_21)) == -1) {
  FUNC_11("Could not set socket low water mark (%d): %m", VAR_21);
  FUNC_7(VAR_20);
  return;
 }

 VAR_19 = sizeof(VAR_17);
 if (FUNC_8(VAR_20, (struct sockaddr *)&VAR_17, &VAR_19) == -1) {
  FUNC_11("Could not get socket address: %m");
  FUNC_7(VAR_20);
  return;
 }

 FUNC_12("Accepted connection from %s", FUNC_2(&VAR_16.l2cap_bdaddr, ((void*)0)));

 VAR_18 = FUNC_3();
 if (VAR_18 == ((void*)0)) {
  FUNC_7(VAR_20);
  return;
 }

 VAR_18->send = VAR_12;
 VAR_18->recv = VAR_11;
 VAR_18->mru = VAR_22;
 VAR_18->mtu = VAR_23;
 FUNC_1(VAR_18->raddr, &VAR_16.l2cap_bdaddr);
 FUNC_1(VAR_18->laddr, &VAR_17.l2cap_bdaddr);
 VAR_18->state = VAR_2;
 FUNC_6(VAR_18, 10);
 if (!FUNC_5(VAR_18, VAR_20)) {
  VAR_18->state = VAR_1;
  FUNC_4(VAR_18);
  FUNC_7(VAR_20);
  return;
 }
}

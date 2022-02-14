
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_l2cap {int l2cap_len; int l2cap_bdaddr; scalar_t__ l2cap_cid; int l2cap_bdaddr_type; int l2cap_psm; int l2cap_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef int mru ;


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
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int,int,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 (int,int ) ;
 int VAR_12 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct sockaddr_l2cap*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int,int ,int ,int *,int) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_12(void)
{
 struct sockaddr_l2cap VAR_16;
 uint16_t VAR_17;

 VAR_14 = FUNC_11(VAR_7, VAR_8, VAR_2);
 if (VAR_14 == -1) {
  FUNC_7("Could not open L2CAP socket: %m");
  FUNC_4(VAR_6);
 }

 FUNC_9(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.l2cap_family = VAR_0;
 VAR_16.l2cap_len = sizeof(VAR_16);
 VAR_16.l2cap_psm = FUNC_5(VAR_11);
 VAR_16.l2cap_bdaddr_type = VAR_1;
 VAR_16.l2cap_cid = 0;

 FUNC_0(&VAR_16.l2cap_bdaddr, &VAR_12);
 if (FUNC_1(VAR_14, (struct sockaddr *)&VAR_16, sizeof(VAR_16)) == -1) {
  FUNC_7("Could not bind server socket: %m");
  FUNC_4(VAR_6);
 }

 VAR_17 = VAR_3;
 if (FUNC_10(VAR_14, VAR_9,
     VAR_10, &VAR_17, sizeof(VAR_17)) == -1) {
  FUNC_7("Could not set L2CAP IMTU (%d): %m", VAR_17);
  FUNC_4(VAR_6);
 }

 if (FUNC_6(VAR_14, 0) == -1) {
  FUNC_7("Could not listen on server socket: %m");
  FUNC_4(VAR_6);
 }

 FUNC_3(&VAR_13, VAR_14, VAR_5 | VAR_4, VAR_15, ((void*)0));
 if (FUNC_2(&VAR_13, ((void*)0)) == -1) {
  FUNC_7("Could not add server event: %m");
  FUNC_4(VAR_6);
 }

 FUNC_8("server socket open");
}

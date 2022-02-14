
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int un ;
struct TYPE_4__ {int valid; int server; int control; int * rsp; scalar_t__ omtu; scalar_t__ rsp_limit; scalar_t__ rsp_size; scalar_t__ rsp_cs; scalar_t__ priv; } ;
typedef TYPE_1__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct sockaddr_un {int sun_len; int l2cap_len; int maxfd; TYPE_1__* fdidx; int fdset; TYPE_1__* req; scalar_t__ imtu; int l2cap_psm; int l2cap_bdaddr; int l2cap_family; int sun_path; int sun_family; } ;
struct sockaddr_l2cap {int sun_len; int l2cap_len; int maxfd; TYPE_1__* fdidx; int fdset; TYPE_1__* req; scalar_t__ imtu; int l2cap_psm; int l2cap_bdaddr; int l2cap_family; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef struct sockaddr_un* server_p ;
typedef int l2 ;
typedef int int32_t ;
typedef int imtu ;
typedef TYPE_1__* fd_idx_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (char const*,int) ;
 int FUNC_6 (int) ;
 int VAR_20 ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int,int ,int ,scalar_t__*,int*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (struct sockaddr_un*,int ,int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char const*,int) ;
 scalar_t__ FUNC_18 (char const*) ;

int32_t
FUNC_19(server_p VAR_21, char const *VAR_22)
{
 struct sockaddr_un VAR_23;
 struct sockaddr_l2cap VAR_24;
 int32_t VAR_25, VAR_26;
 socklen_t VAR_27;
 uint16_t VAR_28;

 FUNC_2(VAR_21 != ((void*)0));
 FUNC_2(VAR_22 != ((void*)0));

 FUNC_13(VAR_21, 0, sizeof(*VAR_21));


 if (FUNC_18(VAR_22) < 0 && VAR_20 != VAR_3) {
  FUNC_11("Could not unlink(%s). %s (%d)",
   VAR_22, FUNC_16(VAR_20), VAR_20);
  return (-1);
 }

 VAR_25 = FUNC_15(VAR_8, VAR_11, 0);
 if (VAR_25 < 0) {
  FUNC_11("Could not create control socket. %s (%d)",
   FUNC_16(VAR_20), VAR_20);
  return (-1);
 }

 FUNC_13(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.sun_len = sizeof(VAR_23);
 VAR_23.sun_family = VAR_1;
 FUNC_17(VAR_23.sun_path, VAR_22, sizeof(VAR_23.sun_path));

 if (FUNC_3(VAR_25, (struct sockaddr *) &VAR_23, sizeof(VAR_23)) < 0) {
  FUNC_11("Could not bind control socket. %s (%d)",
   FUNC_16(VAR_20), VAR_20);
  FUNC_6(VAR_25);
  return (-1);
 }

 if (FUNC_5(VAR_22, VAR_16|VAR_19|VAR_14|VAR_17|VAR_15|VAR_18) < 0) {
  FUNC_11("Could not change permissions on control socket. " "%s (%d)", FUNC_16(VAR_20), VAR_20);

  FUNC_6(VAR_25);
  return (-1);
 }

 if (FUNC_10(VAR_25, 10) < 0) {
  FUNC_11("Could not listen on control socket. %s (%d)",
   FUNC_16(VAR_20), VAR_20);
  FUNC_6(VAR_25);
  return (-1);
 }


 VAR_26 = FUNC_15(VAR_7, VAR_10, VAR_2);
 if (VAR_26 < 0) {
  FUNC_11("Could not create L2CAP socket. %s (%d)",
   FUNC_16(VAR_20), VAR_20);
  FUNC_6(VAR_25);
  return (-1);
 }

 VAR_27 = sizeof(VAR_28);
        if (FUNC_8(VAR_26, VAR_12, VAR_13, &VAR_28, &VAR_27) < 0) {
  FUNC_11("Could not get L2CAP IMTU. %s (%d)",
   FUNC_16(VAR_20), VAR_20);
  FUNC_6(VAR_25);
  FUNC_6(VAR_26);
  return (-1);
        }

 FUNC_13(&VAR_24, 0, sizeof(VAR_24));
 VAR_24 = sizeof(VAR_24);
 VAR_24 = VAR_0;
 FUNC_12(&VAR_24, VAR_5, sizeof(VAR_24));
 VAR_24 = FUNC_9(VAR_6);

 if (FUNC_3(VAR_26, (struct sockaddr *) &VAR_24, sizeof(VAR_24)) < 0) {
  FUNC_11("Could not bind L2CAP socket. %s (%d)",
   FUNC_16(VAR_20), VAR_20);
  FUNC_6(VAR_25);
  FUNC_6(VAR_26);
  return (-1);
 }

 if (FUNC_10(VAR_26, 10) < 0) {
  FUNC_11("Could not listen on L2CAP socket. %s (%d)",
   FUNC_16(VAR_20), VAR_20);
  FUNC_6(VAR_25);
  FUNC_6(VAR_26);
  return (-1);
 }


 VAR_21->imtu = (VAR_28 > VAR_9)? VAR_28 : VAR_9;
 VAR_21->req = (uint8_t *) FUNC_4(VAR_21->imtu, sizeof(VAR_21->req[0]));
 if (VAR_21->req == ((void*)0)) {
  FUNC_11("Could not allocate request buffer");
  FUNC_6(VAR_25);
  FUNC_6(VAR_26);
  return (-1);
 }


 VAR_21->fdidx = (fd_idx_p) FUNC_4(VAR_4, sizeof(VAR_21->fdidx[0]));
 if (VAR_21->fdidx == ((void*)0)) {
  FUNC_11("Could not allocate fd index");
  FUNC_7(VAR_21->req);
  FUNC_6(VAR_25);
  FUNC_6(VAR_26);
  return (-1);
 }


 if (FUNC_14(VAR_25) < 0) {
  FUNC_11("Could not register Service Discovery profile");
  FUNC_7(VAR_21->fdidx);
  FUNC_7(VAR_21->req);
  FUNC_6(VAR_25);
  FUNC_6(VAR_26);
  return (-1);
 }






 FUNC_1(&VAR_21->fdset);
 VAR_21->maxfd = (VAR_25 > VAR_26)? VAR_25 : VAR_26;

 FUNC_0(VAR_25, &VAR_21->fdset);
 VAR_21->fdidx[VAR_25].valid = 1;
 VAR_21->fdidx[VAR_25].server = 1;
 VAR_21->fdidx[VAR_25].control = 1;
 VAR_21->fdidx[VAR_25].priv = 0;
 VAR_21->fdidx[VAR_25].rsp_cs = 0;
 VAR_21->fdidx[VAR_25].rsp_size = 0;
 VAR_21->fdidx[VAR_25].rsp_limit = 0;
 VAR_21->fdidx[VAR_25].omtu = VAR_9;
 VAR_21->fdidx[VAR_25].rsp = ((void*)0);

 FUNC_0(VAR_26, &VAR_21->fdset);
 VAR_21->fdidx[VAR_26].valid = 1;
 VAR_21->fdidx[VAR_26].server = 1;
 VAR_21->fdidx[VAR_26].control = 0;
 VAR_21->fdidx[VAR_26].priv = 0;
 VAR_21->fdidx[VAR_26].rsp_cs = 0;
 VAR_21->fdidx[VAR_26].rsp_size = 0;
 VAR_21->fdidx[VAR_26].rsp_limit = 0;
 VAR_21->fdidx[VAR_26].omtu = 0;
 VAR_21->fdidx[VAR_26].rsp = ((void*)0);

 return (0);
}

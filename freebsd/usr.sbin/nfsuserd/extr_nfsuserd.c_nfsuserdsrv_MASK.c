
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int xdrproc_t ;
typedef int uid_t ;
typedef int u_short ;
struct svc_req {int rq_proc; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; } ;
struct TYPE_14__ {int s_addr; } ;
struct sockaddr_in {TYPE_9__ sin_addr; int sin_port; } ;
struct passwd {int pw_name; int pw_uid; int pw_gid; } ;
struct nfsd_idargs {int nid_usertimeout; int nid_ngroup; int nid_name; int nid_gid; int nid_flag; int * nid_grps; void* nid_namelen; int nid_uid; } ;
struct info {int retval; int name; int id; } ;
struct group {int gr_name; int gr_gid; } ;
typedef int gid_t ;
typedef int * caddr_t ;
struct TYPE_12__ {int len; scalar_t__ buf; } ;
struct TYPE_13__ {TYPE_1__ xp_rtaddr; } ;
struct TYPE_11__ {int ss_family; } ;
typedef TYPE_2__ SVCXPRT ;




 int FUNC_0 (int *,int *) ;
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
 void* VAR_15 ;
 TYPE_10__ VAR_16 ;
 struct group* FUNC_1 (int ) ;
 struct group* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int*) ;
 struct passwd* FUNC_4 (int ) ;
 struct passwd* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__) ;
 int * FUNC_7 (int const,int *,char*,int) ;
 int VAR_17 ;
 int FUNC_8 () ;
 int FUNC_9 (int,struct nfsd_idargs*) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int ,int *) ;
 int FUNC_13 (TYPE_2__*,int ,int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ,char*,...) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void
FUNC_18(struct svc_req *VAR_23, SVCXPRT *VAR_24)
{
 struct passwd *VAR_25;
 struct group *VAR_26;
 int VAR_27;




 struct info VAR_28;
 struct nfsd_idargs VAR_29;
 gid_t VAR_30[VAR_10];
 int VAR_31;
 if (VAR_23->rq_proc != 132) {
  switch (VAR_16.ss_family) {
  }
 }
 switch (VAR_23->rq_proc) {
 case 132:
  if (!FUNC_13(VAR_24, (xdrproc_t)VAR_22, ((void*)0)))
   FUNC_17(VAR_3, "Can't send reply");
  return;
 case 129:
  if (!FUNC_12(VAR_24, (xdrproc_t)VAR_19,
      (caddr_t)&VAR_28)) {
   FUNC_14(VAR_24);
   return;
  }
  VAR_25 = FUNC_5((uid_t)VAR_28.id);
  VAR_28.retval = 0;
  if (VAR_25 != ((void*)0)) {
   VAR_29.nid_usertimeout = VAR_15;
   VAR_29.nid_uid = VAR_25->pw_uid;
   VAR_29.nid_name = VAR_25->pw_name;
   if (VAR_17 != 0) {

    VAR_31 = VAR_10;
    if (FUNC_3(VAR_25->pw_name, VAR_25->pw_gid,
        VAR_30, &VAR_31) < 0)
     FUNC_17(VAR_3, "Group list too small");
    VAR_29.nid_ngroup = VAR_31;
    VAR_29.nid_grps = VAR_30;
   } else {
    VAR_29.nid_ngroup = 0;
    VAR_29.nid_grps = ((void*)0);
   }
  } else {
   VAR_29.nid_usertimeout = 5;
   VAR_29.nid_uid = (uid_t)VAR_28.id;
   VAR_29.nid_name = VAR_14;
   VAR_29.nid_ngroup = 0;
   VAR_29.nid_grps = ((void*)0);
  }
  VAR_29.nid_namelen = FUNC_11(VAR_29.nid_name);
  VAR_29.nid_flag = VAR_6;
  VAR_27 = FUNC_9(VAR_8 | VAR_9, &VAR_29);
  if (VAR_27) {
   VAR_28.retval = VAR_27;
   FUNC_17(VAR_3, "Can't add user %s\n", VAR_25->pw_name);
  } else if (VAR_18) {
   FUNC_17(VAR_3,"Added uid=%d name=%s\n",
       VAR_29.nid_uid, VAR_29.nid_name);
  }
  if (!FUNC_13(VAR_24, (xdrproc_t)VAR_21,
      (caddr_t)&VAR_28))
   FUNC_17(VAR_3, "Can't send reply");
  return;
 case 131:
  if (!FUNC_12(VAR_24, (xdrproc_t)VAR_19,
      (caddr_t)&VAR_28)) {
   FUNC_14(VAR_24);
   return;
  }
  VAR_26 = FUNC_1((gid_t)VAR_28.id);
  VAR_28.retval = 0;
  if (VAR_26 != ((void*)0)) {
   VAR_29.nid_usertimeout = VAR_15;
   VAR_29.nid_gid = VAR_26->gr_gid;
   VAR_29.nid_name = VAR_26->gr_name;
  } else {
   VAR_29.nid_usertimeout = 5;
   VAR_29.nid_gid = (gid_t)VAR_28.id;
   VAR_29.nid_name = VAR_12;
  }
  VAR_29.nid_namelen = FUNC_11(VAR_29.nid_name);
  VAR_29.nid_ngroup = 0;
  VAR_29.nid_grps = ((void*)0);
  VAR_29.nid_flag = VAR_4;
  VAR_27 = FUNC_9(VAR_8 | VAR_9, &VAR_29);
  if (VAR_27) {
   VAR_28.retval = VAR_27;
   FUNC_17(VAR_3, "Can't add group %s\n",
       VAR_26->gr_name);
  } else if (VAR_18) {
   FUNC_17(VAR_3,"Added gid=%d name=%s\n",
       VAR_29.nid_gid, VAR_29.nid_name);
  }
  if (!FUNC_13(VAR_24, (xdrproc_t)VAR_21,
      (caddr_t)&VAR_28))
   FUNC_17(VAR_3, "Can't send reply");
  return;
 case 128:
  if (!FUNC_12(VAR_24, (xdrproc_t)VAR_20,
      (caddr_t)&VAR_28)) {
   FUNC_14(VAR_24);
   return;
  }
  VAR_25 = FUNC_4(VAR_28.name);
  VAR_28.retval = 0;
  if (VAR_25 != ((void*)0)) {
   VAR_29.nid_usertimeout = VAR_15;
   VAR_29.nid_uid = VAR_25->pw_uid;
   VAR_29.nid_name = VAR_25->pw_name;
  } else {
   VAR_29.nid_usertimeout = 5;
   VAR_29.nid_uid = VAR_13;
   VAR_29.nid_name = VAR_28.name;
  }
  VAR_29.nid_namelen = FUNC_11(VAR_29.nid_name);
  VAR_29.nid_ngroup = 0;
  VAR_29.nid_grps = ((void*)0);
  VAR_29.nid_flag = VAR_7;
  VAR_27 = FUNC_9(VAR_8 | VAR_9, &VAR_29);
  if (VAR_27) {
   VAR_28.retval = VAR_27;
   FUNC_17(VAR_3, "Can't add user %s\n", VAR_25->pw_name);
  } else if (VAR_18) {
   FUNC_17(VAR_3,"Added uid=%d name=%s\n",
       VAR_29.nid_uid, VAR_29.nid_name);
  }
  if (!FUNC_13(VAR_24, (xdrproc_t)VAR_21,
      (caddr_t)&VAR_28))
   FUNC_17(VAR_3, "Can't send reply");
  return;
 case 130:
  if (!FUNC_12(VAR_24, (xdrproc_t)VAR_20,
      (caddr_t)&VAR_28)) {
   FUNC_14(VAR_24);
   return;
  }
  VAR_26 = FUNC_2(VAR_28.name);
  VAR_28.retval = 0;
  if (VAR_26 != ((void*)0)) {
   VAR_29.nid_usertimeout = VAR_15;
   VAR_29.nid_gid = VAR_26->gr_gid;
   VAR_29.nid_name = VAR_26->gr_name;
  } else {
   VAR_29.nid_usertimeout = 5;
   VAR_29.nid_gid = VAR_11;
   VAR_29.nid_name = VAR_28.name;
  }
  VAR_29.nid_namelen = FUNC_11(VAR_29.nid_name);
  VAR_29.nid_ngroup = 0;
  VAR_29.nid_grps = ((void*)0);
  VAR_29.nid_flag = VAR_5;
  VAR_27 = FUNC_9(VAR_8 | VAR_9, &VAR_29);
  if (VAR_27) {
   VAR_28.retval = VAR_27;
   FUNC_17(VAR_3, "Can't add group %s\n",
       VAR_26->gr_name);
  } else if (VAR_18) {
   FUNC_17(VAR_3,"Added gid=%d name=%s\n",
       VAR_29.nid_gid, VAR_29.nid_name);
  }
  if (!FUNC_13(VAR_24, (xdrproc_t)VAR_21,
      (caddr_t)&VAR_28))
   FUNC_17(VAR_3, "Can't send reply");
  return;
 default:
  FUNC_15(VAR_24);
  return;
 };
}

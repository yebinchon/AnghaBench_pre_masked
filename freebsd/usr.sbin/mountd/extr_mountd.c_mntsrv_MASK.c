
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_short ;
struct svc_req {int rq_proc; int rq_vers; } ;
struct statfs {int f_fsid; } ;
struct stat {int st_mode; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; int sa_len; } ;
struct fhreturn {int fhr_flag; int fhr_numsecflavors; int* fhr_secflavors; int fhr_fh; int fhr_vers; } ;
struct exportlist {int ex_defnumsecflavors; int* ex_defsecflavors; struct dirlist* ex_dirl; struct dirlist* ex_defdir; } ;
struct dirlist {int dummy; } ;
typedef int sigset_t ;
typedef int nfsfh_t ;
typedef int fhandle_t ;
typedef int * caddr_t ;
struct TYPE_2__ {struct sockaddr* buf; } ;
typedef int SVCXPRT ;




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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct dirlist*,struct sockaddr*,int*,int*,int*,int**) ;
 int VAR_14 ;
 int FUNC_5 (char*,char*) ;
 int VAR_15 ;
 struct dirlist* FUNC_6 (struct dirlist*,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 struct exportlist* FUNC_7 (int *,int ) ;
 int VAR_18 ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (char*,char*) ;
 int VAR_19 ;
 int FUNC_13 (struct dirlist*,struct sockaddr*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (char*,struct stat*) ;
 int FUNC_18 (char*,struct statfs*) ;
 int FUNC_19 (int *,int ,char*) ;
 TYPE_1__* FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,char*,...) ;
 int FUNC_26 (char*,...) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

void
FUNC_27(struct svc_req *VAR_27, SVCXPRT *VAR_28)
{
 struct exportlist *VAR_29;
 struct dirlist *VAR_30;
 struct fhreturn VAR_31;
 struct stat VAR_32;
 struct statfs VAR_33;
 char VAR_34[VAR_9], VAR_35[VAR_9];
 int VAR_36 = 1;
 struct sockaddr *VAR_37;
 u_short VAR_38;
 char VAR_39[VAR_8 + 1], VAR_40[VAR_7];
 int VAR_41 = 0, VAR_42, VAR_43;
 sigset_t VAR_44;
 int VAR_45, *VAR_46;

 FUNC_15(&VAR_44);
 FUNC_14(&VAR_44, VAR_11);
 VAR_37 = FUNC_20(VAR_28)->buf;
 switch (VAR_37->sa_family) {
 case 134:
  VAR_38 = FUNC_11(((struct sockaddr_in6 *)VAR_37)->sin6_port);
  break;
 case 135:
  VAR_38 = FUNC_11(((struct sockaddr_in *)VAR_37)->sin_port);
  break;
 default:
  FUNC_25(VAR_5, "request from unknown address family");
  return;
 }
 switch (VAR_27->rq_proc) {
 case 131:
 case 130:
 case 129:
  VAR_36 = FUNC_9(VAR_37, VAR_37->sa_len, VAR_34,
      sizeof VAR_34, ((void*)0), 0, 0);
 }
 FUNC_9(VAR_37, VAR_37->sa_len, VAR_35,
     sizeof VAR_35, ((void*)0), 0, VAR_10);
 switch (VAR_27->rq_proc) {
 case 128:
  if (!FUNC_21(VAR_28, (xdrproc_t)VAR_26, ((void*)0)))
   FUNC_25(VAR_5, "can't send reply");
  return;
 case 131:
  if (VAR_38 >= VAR_4 && VAR_19) {
   FUNC_25(VAR_6,
       "mount request from %s from unprivileged port",
       VAR_35);
   FUNC_24(VAR_28);
   return;
  }
  if (!FUNC_19(VAR_28, (xdrproc_t)VAR_20, VAR_39)) {
   FUNC_25(VAR_6, "undecodable mount request from %s",
       VAR_35);
   FUNC_22(VAR_28);
   return;
  }






  if (FUNC_12(VAR_39, VAR_40) == ((void*)0) ||
      FUNC_17(VAR_40, &VAR_32) < 0 ||
      FUNC_18(VAR_40, &VAR_33) < 0) {
   FUNC_3("/");
   FUNC_25(VAR_6,
       "mount request from %s for non existent path %s",
       VAR_35, VAR_40);
   if (VAR_14)
    FUNC_26("stat failed on %s", VAR_40);
   VAR_41 = VAR_2;
  }
  if (!VAR_41 &&
      !FUNC_0(VAR_32.st_mode) &&
      (VAR_15 || !FUNC_1(VAR_32.st_mode))) {
   FUNC_25(VAR_6,
       "mount request from %s for non-directory path %s",
       VAR_35, VAR_40);
   if (VAR_14)
    FUNC_26("mounting non-directory %s", VAR_40);
   VAR_41 = VAR_3;
  }


  FUNC_16(VAR_12, &VAR_44, ((void*)0));
  if (VAR_41)
   VAR_29 = ((void*)0);
  else
   VAR_29 = FUNC_7(&VAR_33.f_fsid, VAR_18);
  VAR_43 = VAR_42 = 0;
  if (VAR_29 && (FUNC_4(VAR_29->ex_defdir, VAR_37, &VAR_42, &VAR_43,
      &VAR_45, &VAR_46) ||
      ((VAR_30 = FUNC_6(VAR_29->ex_dirl, VAR_40)) &&
        FUNC_4(VAR_30, VAR_37, &VAR_42, &VAR_43, &VAR_45,
         &VAR_46)) ||
      (VAR_42 && FUNC_13(VAR_29->ex_defdir, VAR_37) == 0 &&
       FUNC_13(VAR_29->ex_dirl, VAR_37) == 0))) {
   if (VAR_41) {
    if (!FUNC_21(VAR_28, (xdrproc_t)VAR_24,
        (caddr_t)&VAR_41))
     FUNC_25(VAR_5, "can't send reply");
    FUNC_16(VAR_13, &VAR_44, ((void*)0));
    return;
   }
   if (VAR_43 & VAR_0) {
    VAR_31.fhr_flag = VAR_43;
    VAR_31.fhr_numsecflavors = VAR_45;
    VAR_31.fhr_secflavors = VAR_46;
   } else {
    VAR_31.fhr_flag = VAR_42;
    VAR_31.fhr_numsecflavors = VAR_29->ex_defnumsecflavors;
    VAR_31.fhr_secflavors = VAR_29->ex_defsecflavors;
   }
   VAR_31.fhr_vers = VAR_27->rq_vers;

   FUNC_10(&VAR_31.fhr_fh, 0, sizeof(nfsfh_t));
   if (FUNC_8(VAR_40, (fhandle_t *)&VAR_31.fhr_fh) < 0) {
    VAR_41 = VAR_17;
    FUNC_25(VAR_5, "can't get fh for %s", VAR_40);
    if (!FUNC_21(VAR_28, (xdrproc_t)VAR_24,
        (caddr_t)&VAR_41))
     FUNC_25(VAR_5, "can't send reply");
    FUNC_16(VAR_13, &VAR_44, ((void*)0));
    return;
   }
   if (!FUNC_21(VAR_28, (xdrproc_t)VAR_23,
       (caddr_t)&VAR_31))
    FUNC_25(VAR_5, "can't send reply");
   if (!VAR_36)
    FUNC_2(VAR_34, VAR_40);
   else
    FUNC_2(VAR_35, VAR_40);
   if (VAR_14)
    FUNC_26("mount successful");
   if (VAR_16)
    FUNC_25(VAR_6,
        "mount request succeeded from %s for %s",
        VAR_35, VAR_40);
  } else {
   if (!VAR_41)
    VAR_41 = VAR_1;
   FUNC_25(VAR_6,
       "mount request denied from %s for %s",
       VAR_35, VAR_40);
  }

  if (VAR_41 && !FUNC_21(VAR_28, (xdrproc_t)VAR_24,
      (caddr_t)&VAR_41))
   FUNC_25(VAR_5, "can't send reply");
  FUNC_16(VAR_13, &VAR_44, ((void*)0));
  return;
 case 133:
  if (!FUNC_21(VAR_28, (xdrproc_t)VAR_25, (caddr_t)((void*)0)))
   FUNC_25(VAR_5, "can't send reply");
  else if (VAR_16)
   FUNC_25(VAR_6,
       "dump request succeeded from %s",
       VAR_35);
  return;
 case 130:
  if (VAR_38 >= VAR_4 && VAR_19) {
   FUNC_25(VAR_6,
       "umount request from %s from unprivileged port",
       VAR_35);
   FUNC_24(VAR_28);
   return;
  }
  if (!FUNC_19(VAR_28, (xdrproc_t)VAR_20, VAR_39)) {
   FUNC_25(VAR_6, "undecodable umount request from %s",
       VAR_35);
   FUNC_22(VAR_28);
   return;
  }
  if (FUNC_12(VAR_39, VAR_40) == ((void*)0)) {
   FUNC_25(VAR_6, "umount request from %s "
       "for non existent path %s",
       VAR_35, VAR_40);
  }
  if (!FUNC_21(VAR_28, (xdrproc_t)VAR_26, (caddr_t)((void*)0)))
   FUNC_25(VAR_5, "can't send reply");
  if (!VAR_36)
   FUNC_5(VAR_34, VAR_40);
  FUNC_5(VAR_35, VAR_40);
  if (VAR_16)
   FUNC_25(VAR_6,
       "umount request succeeded from %s for %s",
       VAR_35, VAR_40);
  return;
 case 129:
  if (VAR_38 >= VAR_4 && VAR_19) {
   FUNC_25(VAR_6,
       "umountall request from %s from unprivileged port",
       VAR_35);
   FUNC_24(VAR_28);
   return;
  }
  if (!FUNC_21(VAR_28, (xdrproc_t)VAR_26, (caddr_t)((void*)0)))
   FUNC_25(VAR_5, "can't send reply");
  if (!VAR_36)
   FUNC_5(VAR_34, ((void*)0));
  FUNC_5(VAR_35, ((void*)0));
  if (VAR_16)
   FUNC_25(VAR_6,
       "umountall request succeeded from %s",
       VAR_35);
  return;
 case 132:
  if (!FUNC_21(VAR_28, (xdrproc_t)VAR_21, (caddr_t)((void*)0)))
   if (!FUNC_21(VAR_28, (xdrproc_t)VAR_22,
       (caddr_t)((void*)0)))
    FUNC_25(VAR_5, "can't send reply");
  if (VAR_16)
   FUNC_25(VAR_6,
       "export request succeeded from %s",
       VAR_35);
  return;
 default:
  FUNC_23(VAR_28);
  return;
 }
}

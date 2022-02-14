
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct svc_req {int dummy; } ;
struct passwd {int pw_gid; int pw_name; } ;
struct TYPE_7__ {int gidlist_len; int * gidlist_val; } ;
struct TYPE_8__ {int gid; scalar_t__ minor_status; scalar_t__ major_status; scalar_t__ uid; TYPE_1__ gidlist; } ;
typedef TYPE_2__ pname_to_uid_res ;
struct TYPE_9__ {int mech; int pname; } ;
typedef TYPE_3__ pname_to_uid_args ;
typedef scalar_t__ gss_name_t ;
typedef int buf ;
typedef int bool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int*,int*) ;
 int FUNC_2 (scalar_t__,struct passwd*,char*,size_t,struct passwd**) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (size_t) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *,int*,int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

bool_t
FUNC_10(pname_to_uid_args *VAR_5, pname_to_uid_res *VAR_6, struct svc_req *VAR_7)
{
 gss_name_t VAR_8 = FUNC_4(VAR_5->pname);
 uid_t VAR_9;
 char VAR_10[1024], *VAR_11;
 struct passwd VAR_12, *VAR_13;
 size_t VAR_14;
 int VAR_15;
 static size_t VAR_16 = 1024;

 FUNC_9(VAR_6, 0, sizeof(*VAR_6));
 if (VAR_8) {
  VAR_6->major_status =
   FUNC_3(&VAR_6->minor_status,
       VAR_8, VAR_5->mech, &VAR_9);
  if (VAR_6->major_status == VAR_2) {
   VAR_6->uid = VAR_9;
   VAR_14 = VAR_16;
   for (;;) {
    VAR_13 = ((void*)0);
    VAR_11 = VAR_10;
    if (VAR_14 > sizeof(VAR_10))
     VAR_11 = FUNC_6(VAR_14);
    if (VAR_11 == ((void*)0))
     break;
    VAR_15 = FUNC_2(VAR_9, &VAR_12, VAR_11, VAR_14,
        &VAR_13);
    if (VAR_15 != VAR_0)
     break;
    if (VAR_14 > sizeof(VAR_10))
     FUNC_0(VAR_11);
    VAR_14 += 1024;
    if (VAR_14 > VAR_16)
     VAR_16 = VAR_14;
   }
   if (VAR_13) {
    int VAR_17 = VAR_3;
    int VAR_18[VAR_3];
    VAR_6->gid = VAR_13->pw_gid;
    FUNC_1(VAR_13->pw_name, VAR_13->pw_gid,
        VAR_18, &VAR_17);
    VAR_6->gidlist.gidlist_len = VAR_17;
    VAR_6->gidlist.gidlist_val =
     FUNC_7(VAR_17 * sizeof(int));
    FUNC_8(VAR_6->gidlist.gidlist_val, VAR_18,
        VAR_17 * sizeof(int));
    FUNC_5("gssd_pname_to_uid: mapped"
        " to uid=%d, gid=%d\n", (int)VAR_6->uid,
        (int)VAR_6->gid);
   } else {
    VAR_6->gid = 65534;
    VAR_6->gidlist.gidlist_len = 0;
    VAR_6->gidlist.gidlist_val = ((void*)0);
    FUNC_5("gssd_pname_to_uid: mapped"
        " to uid=%d, but no groups\n",
        (int)VAR_6->uid);
   }
   if (VAR_11 != ((void*)0) && VAR_14 > sizeof(VAR_10))
    FUNC_0(VAR_11);
  } else
   FUNC_5("gssd_pname_to_uid: failed major=0x%x"
       " minor=%d\n", (unsigned int)VAR_6->major_status,
       (int)VAR_6->minor_status);
 } else {
  VAR_6->major_status = VAR_1;
  VAR_6->minor_status = 0;
  FUNC_5("gssd_pname_to_uid: no name\n");
 }

 return (VAR_4);
}

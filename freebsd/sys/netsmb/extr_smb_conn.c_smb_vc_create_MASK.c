
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct ucred {scalar_t__ cr_uid; scalar_t__* cr_groups; } ;
struct smb_vcspec {scalar_t__ owner; scalar_t__ group; char* domain; int rights; int flags; char* pass; char* srvname; char* username; char* localcs; char* servercs; int lap; int sap; } ;
struct TYPE_2__ {int co_flags; int co_gone; int co_free; } ;
struct smb_vc {int vc_mode; int * vc_ucs_tolocal; int * vc_ucs_toserver; int * vc_cp_tolocal; int * vc_tolocal; int * vc_cp_toserver; int * vc_toserver; int * vc_toupper; int * vc_tolower; int * vc_username; int * vc_srvname; int * vc_domain; int * vc_pass; int * vc_laddr; int * vc_paddr; int vc_stlock; scalar_t__ vc_grp; scalar_t__ vc_uid; scalar_t__ vc_mackeylen; int * vc_mackey; scalar_t__ vc_seqno; int * vc_tdesc; TYPE_1__ obj; int vc_smbuid; int vc_timo; scalar_t__ vc_number; } ;
struct smb_cred {struct ucred* scr_cred; } ;
typedef scalar_t__ gid_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int FUNC_0 (struct smb_vc*) ;
 int FUNC_1 (scalar_t__,struct ucred*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,char*,char*) ;
 scalar_t__ FUNC_7 (struct smb_vc*) ;
 int FUNC_8 (int *,char*) ;
 void* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct ucred*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (struct smb_vc*,struct smb_cred*) ;
 int VAR_17 ;
 int VAR_18 ;
 struct smb_vc* FUNC_12 (int,int ,int ) ;
 void* FUNC_13 (int ,int ) ;

int
FUNC_14(struct smb_vcspec *VAR_19,
 struct smb_cred *VAR_20, struct smb_vc **VAR_21)
{
 struct smb_vc *VAR_22;
 struct ucred *VAR_23 = VAR_20->scr_cred;
 uid_t VAR_24 = VAR_19->owner;
 gid_t VAR_25 = VAR_19->group;
 uid_t VAR_26 = VAR_23->cr_uid;
 char *VAR_27 = VAR_19->domain;
 int VAR_28, VAR_29;

 VAR_29 = FUNC_10(VAR_23) == 0;



 if (VAR_24 != VAR_7 && VAR_24 != VAR_26 && !VAR_29)
  return VAR_2;
 if (VAR_25 != VAR_6 && !FUNC_1(VAR_25, VAR_23) && !VAR_29)
  return VAR_2;

 VAR_22 = FUNC_12(sizeof(*VAR_22), VAR_3, VAR_4);
 FUNC_6(FUNC_0(VAR_22), VAR_5, "smb_vc ilock", "smb_vc");
 VAR_22->obj.co_free = VAR_15;
 VAR_22->obj.co_gone = VAR_16;
 VAR_22->vc_number = VAR_18++;
 VAR_22->vc_timo = VAR_11;
 VAR_22->vc_smbuid = VAR_12;
 VAR_22->vc_mode = VAR_19->rights & VAR_8;
 VAR_22->obj.co_flags = VAR_19->flags & (VAR_9 | VAR_10);
 VAR_22->vc_tdesc = &VAR_14;
 VAR_22->vc_seqno = 0;
 VAR_22->vc_mackey = ((void*)0);
 VAR_22->vc_mackeylen = 0;

 if (VAR_24 == VAR_7)
  VAR_24 = VAR_26;
 if (VAR_25 == VAR_6)
  VAR_25 = VAR_23->cr_groups[0];
 VAR_22->vc_uid = VAR_24;
 VAR_22->vc_grp = VAR_25;

 FUNC_8(&VAR_22->vc_stlock, "vcstlock");
 VAR_28 = VAR_1;

 VAR_22->vc_paddr = FUNC_13(VAR_19->sap, VAR_4);
 if (VAR_22->vc_paddr == ((void*)0))
  goto fail;
 VAR_22->vc_laddr = FUNC_13(VAR_19->lap, VAR_4);
 if (VAR_22->vc_laddr == ((void*)0))
  goto fail;
 VAR_22->vc_pass = FUNC_9(VAR_19->pass);
 if (VAR_22->vc_pass == ((void*)0))
  goto fail;
 VAR_22->vc_domain = FUNC_9((VAR_27 && VAR_27[0]) ? VAR_27 :
     "NODOMAIN");
 if (VAR_22->vc_domain == ((void*)0))
  goto fail;
 VAR_22->vc_srvname = FUNC_9(VAR_19->srvname);
 if (VAR_22->vc_srvname == ((void*)0))
  goto fail;
 VAR_22->vc_username = FUNC_9(VAR_19->username);
 if (VAR_22->vc_username == ((void*)0))
  goto fail;
 VAR_28 = (int)FUNC_4("tolower", VAR_19->localcs, &VAR_22->vc_tolower);
 if (VAR_28)
  goto fail;
 VAR_28 = (int)FUNC_4("toupper", VAR_19->localcs, &VAR_22->vc_toupper);
 if (VAR_28)
  goto fail;
 if (VAR_19->servercs[0]) {
  VAR_28 = (int)FUNC_4(VAR_19->servercs, VAR_19->localcs,
      &VAR_22->vc_cp_toserver);
  if (VAR_28)
   goto fail;
  VAR_28 = (int)FUNC_4(VAR_19->localcs, VAR_19->servercs,
      &VAR_22->vc_cp_tolocal);
  if (VAR_28)
   goto fail;
  VAR_22->vc_toserver = VAR_22->vc_cp_toserver;
  VAR_22->vc_tolocal = VAR_22->vc_cp_tolocal;
  FUNC_2(VAR_0, VAR_0, VAR_13);
  FUNC_2(VAR_0, VAR_13, VAR_0);
  VAR_28 = (int)FUNC_4(VAR_13, VAR_19->localcs,
      &VAR_22->vc_ucs_toserver);
  if (!VAR_28) {
   VAR_28 = (int)FUNC_4(VAR_19->localcs, VAR_13,
       &VAR_22->vc_ucs_tolocal);
  }
  if (VAR_28) {
   if (VAR_22->vc_ucs_toserver)
    FUNC_3(VAR_22->vc_ucs_toserver);
   VAR_22->vc_ucs_toserver = ((void*)0);
   VAR_22->vc_ucs_tolocal = ((void*)0);
  }
 }
 VAR_28 = (int)FUNC_7(VAR_22);
 if (VAR_28)
  goto fail;
 *VAR_21 = VAR_22;
 FUNC_5(&VAR_17, FUNC_0(VAR_22));
 return (0);

 fail:
 FUNC_11(VAR_22, VAR_20);
 return (VAR_28);
}

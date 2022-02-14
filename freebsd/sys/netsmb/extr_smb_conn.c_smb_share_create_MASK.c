
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct ucred {scalar_t__ cr_uid; scalar_t__* cr_groups; } ;
struct smb_vc {int dummy; } ;
struct smb_sharespec {scalar_t__ owner; scalar_t__ group; int rights; int stype; scalar_t__* pass; scalar_t__* name; } ;
struct TYPE_2__ {int co_gone; int co_free; } ;
struct smb_share {int ss_mode; scalar_t__ ss_grp; scalar_t__ ss_uid; int ss_tid; int ss_type; void* ss_pass; void* ss_name; int ss_stlock; TYPE_1__ obj; } ;
struct smb_cred {struct ucred* scr_cred; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct smb_vc*) ;
 int FUNC_2 (scalar_t__,struct ucred*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct smb_share*,struct smb_cred*) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (scalar_t__*) ;
 scalar_t__ FUNC_8 (struct ucred*) ;
 int FUNC_9 (struct smb_vc*,struct smb_sharespec*,struct smb_cred*,struct smb_share**) ;
 struct smb_share* FUNC_10 (int,int ,int ) ;

int
FUNC_11(struct smb_vc *VAR_11, struct smb_sharespec *VAR_12,
 struct smb_cred *VAR_13, struct smb_share **VAR_14)
{
 struct smb_share *VAR_15;
 struct ucred *VAR_16 = VAR_13->scr_cred;
 uid_t VAR_17 = VAR_16->cr_uid;
 uid_t VAR_18 = VAR_12->owner;
 gid_t VAR_19 = VAR_12->group;
 int VAR_20, VAR_21;

 VAR_21 = FUNC_8(VAR_16) == 0;



 if (VAR_18 != VAR_6 && VAR_18 != VAR_17 && !VAR_21)
  return VAR_1;
 if (VAR_19 != VAR_5 && !FUNC_2(VAR_19, VAR_16) && !VAR_21)
  return VAR_1;
 VAR_20 = FUNC_9(VAR_11, VAR_12, VAR_13, &VAR_15);
 if (!VAR_20) {
  FUNC_5(VAR_15, VAR_13);
  return VAR_0;
 }
 if (VAR_18 == VAR_6)
  VAR_18 = VAR_17;
 if (VAR_19 == VAR_5)
  VAR_19 = VAR_16->cr_groups[0];
 VAR_15 = FUNC_10(sizeof(*VAR_15), VAR_2, VAR_3);
 FUNC_4(FUNC_0(VAR_15), VAR_4, "smbss ilock", "smbss");
 VAR_15->obj.co_free = VAR_9;
 VAR_15->obj.co_gone = VAR_10;
 FUNC_6(&VAR_15->ss_stlock, "ssstlock");
 VAR_15->ss_name = FUNC_7(VAR_12->name);
 if (VAR_12->pass && VAR_12->pass[0])
  VAR_15->ss_pass = FUNC_7(VAR_12->pass);
 VAR_15->ss_type = VAR_12->stype;
 VAR_15->ss_tid = VAR_8;
 VAR_15->ss_uid = VAR_18;
 VAR_15->ss_grp = VAR_19;
 VAR_15->ss_mode = VAR_12->rights & VAR_7;
 FUNC_3(FUNC_1(VAR_11), FUNC_0(VAR_15));
 *VAR_14 = VAR_15;
 return 0;
}

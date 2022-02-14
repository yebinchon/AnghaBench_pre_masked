
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_share_info {int sname; int flags; int mode; int gid; int uid; int type; int tid; int usecount; int itype; } ;
struct TYPE_2__ {int co_flags; int co_usecount; } ;
struct smb_share {char* ss_name; TYPE_1__ obj; int ss_mode; int ss_grp; int ss_uid; int ss_type; int ss_tid; } ;


 int VAR_0 ;
 int FUNC_0 (struct smb_share_info*,int) ;
 int FUNC_1 (int ,int,char*,char*) ;

__attribute__((used)) static int
FUNC_2(struct smb_share *VAR_1, struct smb_share_info *VAR_2)
{
 FUNC_0(VAR_2, sizeof(struct smb_share_info));
 VAR_2->itype = VAR_0;
 VAR_2->usecount = VAR_1->obj.co_usecount;
 VAR_2->tid = VAR_1->ss_tid;
 VAR_2->type= VAR_1->ss_type;
 VAR_2->uid = VAR_1->ss_uid;
 VAR_2->gid = VAR_1->ss_grp;
 VAR_2->mode= VAR_1->ss_mode;
 VAR_2->flags = VAR_1->obj.co_flags;
 FUNC_1(VAR_2->sname, sizeof(VAR_2->sname), "%s", VAR_1->ss_name);
 return 0;
}

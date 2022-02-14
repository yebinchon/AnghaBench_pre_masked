
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cgid; int cuid; int gid; int uid; int mode; scalar_t__ key; } ;
struct TYPE_3__ {int msg_lspid; int msg_lrpid; int msg_qbytes; int msg_qnum; int msg_cbytes; TYPE_2__ msg_perm; int msg_ctime; int msg_rtime; int msg_stime; } ;
struct msqid_kernel {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_2__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (int ,int ) ;

void
FUNC_6(int VAR_5, int VAR_6, struct msqid_kernel *VAR_7)
{
 char VAR_8[100], VAR_9[100], VAR_10[100];

 FUNC_1(VAR_7->u.msg_stime, VAR_8);
 FUNC_1(VAR_7->u.msg_rtime, VAR_9);
 FUNC_1(VAR_7->u.msg_ctime, VAR_10);

 FUNC_4("q %12d %12d %s %-8s %-8s",
     FUNC_0(VAR_5, VAR_7->u.msg_perm),
     (int)VAR_7->u.msg_perm.key,
     FUNC_2(VAR_7->u.msg_perm.mode),
     FUNC_5(VAR_7->u.msg_perm.uid, 0),
     FUNC_3(VAR_7->u.msg_perm.gid, 0));

 if (VAR_6 & VAR_1)
  FUNC_4(" %-8s %-8s",
      FUNC_5(VAR_7->u.msg_perm.cuid, 0),
      FUNC_3(VAR_7->u.msg_perm.cgid, 0));

 if (VAR_6 & VAR_2)
  FUNC_4(" %12lu %12lu",
      VAR_7->u.msg_cbytes,
      VAR_7->u.msg_qnum);

 if (VAR_6 & VAR_0)
  FUNC_4(" %20lu", VAR_7->u.msg_qbytes);

 if (VAR_6 & VAR_3)
  FUNC_4(" %12d %12d",
      VAR_7->u.msg_lspid,
      VAR_7->u.msg_lrpid);

 if (VAR_6 & VAR_4)
  FUNC_4(" %s %s %s",
      VAR_8,
      VAR_9,
      VAR_10);

 FUNC_4("\n");
}

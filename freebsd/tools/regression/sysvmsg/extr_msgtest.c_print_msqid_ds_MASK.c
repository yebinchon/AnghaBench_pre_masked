
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u_long ;
struct TYPE_2__ {int uid; int gid; int cuid; int cgid; int mode; } ;
struct msqid_ds {TYPE_1__ msg_perm; int msg_ctime; int msg_rtime; int msg_stime; int msg_lrpid; int msg_lspid; scalar_t__ msg_qbytes; int msg_qnum; } ;
typedef int mode_t ;
typedef scalar_t__ gid_t ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(struct msqid_ds *VAR_0, mode_t VAR_1)
{
 uid_t VAR_2 = FUNC_3();
 gid_t VAR_3 = FUNC_2();

 FUNC_4("PERM: uid %d, gid %d, cuid %d, cgid %d, mode 0%o\n",
     VAR_0->msg_perm.uid, VAR_0->msg_perm.gid,
     VAR_0->msg_perm.cuid, VAR_0->msg_perm.cgid,
     VAR_0->msg_perm.mode & 0777);

 FUNC_4("qnum %lu, qbytes %lu, lspid %d, lrpid %d\n",
     VAR_0->msg_qnum, (u_long)VAR_0->msg_qbytes, VAR_0->msg_lspid,
     VAR_0->msg_lrpid);

 FUNC_4("stime: %s", FUNC_0(&VAR_0->msg_stime));
 FUNC_4("rtime: %s", FUNC_0(&VAR_0->msg_rtime));
 FUNC_4("ctime: %s", FUNC_0(&VAR_0->msg_ctime));





 if (VAR_0->msg_perm.uid != VAR_2 || VAR_0->msg_perm.cuid != VAR_2)
  FUNC_1(1, "uid mismatch");

 if (VAR_0->msg_perm.gid != VAR_3 || VAR_0->msg_perm.cgid != VAR_3)
  FUNC_1(1, "gid mismatch");

 if ((VAR_0->msg_perm.mode & 0777) != VAR_1)
  FUNC_1(1, "mode mismatch");
}

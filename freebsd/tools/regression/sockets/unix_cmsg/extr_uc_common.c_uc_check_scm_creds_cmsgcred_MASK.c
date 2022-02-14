
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long u_long ;
struct cmsghdr {int dummy; } ;
struct cmsgcred {scalar_t__ cmcred_pid; scalar_t__ cmcred_uid; scalar_t__ cmcred_euid; scalar_t__ cmcred_gid; long cmcred_ngroups; scalar_t__* cmcred_groups; } ;
struct TYPE_3__ {scalar_t__ uid; scalar_t__ euid; scalar_t__ gid; scalar_t__ egid; } ;
struct TYPE_4__ {scalar_t__ client_pid; TYPE_1__ proc_cred; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_1 (struct cmsghdr*,int ,int) ;
 scalar_t__ FUNC_2 (char*,scalar_t__*,char*,long,int) ;
 int FUNC_3 (char*,long) ;
 int FUNC_4 (char*,...) ;

int
FUNC_5(struct cmsghdr *VAR_3)
{
 const struct cmsgcred *VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_3, VAR_1, sizeof(struct cmsgcred)) < 0)
  return (-1);

 VAR_4 = (struct cmsgcred *)FUNC_0(VAR_3);

 FUNC_3("cmsgcred.cmcred_pid %ld", (long)VAR_4->cmcred_pid);
 FUNC_3("cmsgcred.cmcred_uid %lu", (u_long)VAR_4->cmcred_uid);
 FUNC_3("cmsgcred.cmcred_euid %lu", (u_long)VAR_4->cmcred_euid);
 FUNC_3("cmsgcred.cmcred_gid %lu", (u_long)VAR_4->cmcred_gid);
 FUNC_3("cmsgcred.cmcred_ngroups %d", VAR_4->cmcred_ngroups);

 VAR_5 = 0;

 if (VAR_4->cmcred_pid != VAR_2.client_pid) {
  FUNC_4("cmsgcred.cmcred_pid %ld != %ld",
      (long)VAR_4->cmcred_pid, (long)VAR_2.client_pid);
  VAR_5 = -1;
 }
 if (VAR_4->cmcred_uid != VAR_2.proc_cred.uid) {
  FUNC_4("cmsgcred.cmcred_uid %lu != %lu",
      (u_long)VAR_4->cmcred_uid, (u_long)VAR_2.proc_cred.uid);
  VAR_5 = -1;
 }
 if (VAR_4->cmcred_euid != VAR_2.proc_cred.euid) {
  FUNC_4("cmsgcred.cmcred_euid %lu != %lu",
      (u_long)VAR_4->cmcred_euid, (u_long)VAR_2.proc_cred.euid);
  VAR_5 = -1;
 }
 if (VAR_4->cmcred_gid != VAR_2.proc_cred.gid) {
  FUNC_4("cmsgcred.cmcred_gid %lu != %lu",
      (u_long)VAR_4->cmcred_gid, (u_long)VAR_2.proc_cred.gid);
  VAR_5 = -1;
 }
 if (VAR_4->cmcred_ngroups == 0) {
  FUNC_4("cmsgcred.cmcred_ngroups == 0");
  VAR_5 = -1;
 }
 if (VAR_4->cmcred_ngroups < 0) {
  FUNC_4("cmsgcred.cmcred_ngroups %d < 0",
      VAR_4->cmcred_ngroups);
  VAR_5 = -1;
 }
 if (VAR_4->cmcred_ngroups > VAR_0) {
  FUNC_4("cmsgcred.cmcred_ngroups %d > %d",
      VAR_4->cmcred_ngroups, VAR_0);
  VAR_5 = -1;
 }
 if (VAR_4->cmcred_groups[0] != VAR_2.proc_cred.egid) {
  FUNC_4("cmsgcred.cmcred_groups[0] %lu != %lu (EGID)",
      (u_long)VAR_4->cmcred_groups[0], (u_long)VAR_2.proc_cred.egid);
  VAR_5 = -1;
 }
 if (FUNC_2("cmsgcred.cmcred_groups", VAR_4->cmcred_groups,
     "cmsgcred.cmcred_ngroups", VAR_4->cmcred_ngroups, 0) < 0)
  VAR_5 = -1;
 return (VAR_5);
}

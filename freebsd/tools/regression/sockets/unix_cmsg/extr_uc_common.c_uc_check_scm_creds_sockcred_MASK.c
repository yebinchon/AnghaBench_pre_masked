
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct sockcred {scalar_t__ sc_uid; scalar_t__ sc_euid; scalar_t__ sc_gid; scalar_t__ sc_egid; scalar_t__ sc_ngroups; int sc_groups; } ;
struct cmsghdr {int dummy; } ;
struct TYPE_3__ {scalar_t__ gid_num; scalar_t__ uid; scalar_t__ euid; scalar_t__ gid; scalar_t__ egid; } ;
struct TYPE_4__ {TYPE_1__ proc_cred; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_2 (struct cmsghdr*,int ,int ) ;
 scalar_t__ FUNC_3 (char*,int ,char*,scalar_t__,int) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,...) ;

int
FUNC_6(struct cmsghdr *VAR_2)
{
 const struct sockcred *VAR_3;
 int VAR_4;

 if (FUNC_2(VAR_2, VAR_0,
     FUNC_1(VAR_1.proc_cred.gid_num)) < 0)
  return (-1);

 VAR_3 = (struct sockcred *)FUNC_0(VAR_2);

 VAR_4 = 0;

 FUNC_4("sockcred.sc_uid %lu", (u_long)VAR_3->sc_uid);
 FUNC_4("sockcred.sc_euid %lu", (u_long)VAR_3->sc_euid);
 FUNC_4("sockcred.sc_gid %lu", (u_long)VAR_3->sc_gid);
 FUNC_4("sockcred.sc_egid %lu", (u_long)VAR_3->sc_egid);
 FUNC_4("sockcred.sc_ngroups %d", VAR_3->sc_ngroups);

 if (VAR_3->sc_uid != VAR_1.proc_cred.uid) {
  FUNC_5("sockcred.sc_uid %lu != %lu",
      (u_long)VAR_3->sc_uid, (u_long)VAR_1.proc_cred.uid);
  VAR_4 = -1;
 }
 if (VAR_3->sc_euid != VAR_1.proc_cred.euid) {
  FUNC_5("sockcred.sc_euid %lu != %lu",
      (u_long)VAR_3->sc_euid, (u_long)VAR_1.proc_cred.euid);
  VAR_4 = -1;
 }
 if (VAR_3->sc_gid != VAR_1.proc_cred.gid) {
  FUNC_5("sockcred.sc_gid %lu != %lu",
      (u_long)VAR_3->sc_gid, (u_long)VAR_1.proc_cred.gid);
  VAR_4 = -1;
 }
 if (VAR_3->sc_egid != VAR_1.proc_cred.egid) {
  FUNC_5("sockcred.sc_egid %lu != %lu",
      (u_long)VAR_3->sc_egid, (u_long)VAR_1.proc_cred.egid);
  VAR_4 = -1;
 }
 if (VAR_3->sc_ngroups == 0) {
  FUNC_5("sockcred.sc_ngroups == 0");
  VAR_4 = -1;
 }
 if (VAR_3->sc_ngroups < 0) {
  FUNC_5("sockcred.sc_ngroups %d < 0",
      VAR_3->sc_ngroups);
  VAR_4 = -1;
 }
 if (VAR_3->sc_ngroups != VAR_1.proc_cred.gid_num) {
  FUNC_5("sockcred.sc_ngroups %d != %u",
      VAR_3->sc_ngroups, VAR_1.proc_cred.gid_num);
  VAR_4 = -1;
 }
 if (FUNC_3("sockcred.sc_groups", VAR_3->sc_groups,
     "sockcred.sc_ngroups", VAR_3->sc_ngroups, 1) < 0)
  VAR_4 = -1;
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_long ;
struct xucred {size_t cr_version; scalar_t__ cr_uid; size_t cr_ngroups; scalar_t__* cr_groups; } ;
typedef int socklen_t ;
struct TYPE_3__ {scalar_t__ euid; scalar_t__ egid; } ;
struct TYPE_4__ {TYPE_1__ proc_cred; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (char*,scalar_t__*,char*,size_t,int) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(const struct xucred *VAR_3, socklen_t VAR_4)
{
 int VAR_5;

 if (VAR_4 != sizeof(*VAR_3)) {
  FUNC_2("option value size %zu != %zu",
      (size_t)VAR_4, sizeof(*VAR_3));
  return (-1);
 }

 FUNC_1("xucred.cr_version %u", VAR_3->cr_version);
 FUNC_1("xucred.cr_uid %lu", (u_long)VAR_3->cr_uid);
 FUNC_1("xucred.cr_ngroups %d", VAR_3->cr_ngroups);

 VAR_5 = 0;

 if (VAR_3->cr_version != VAR_0) {
  FUNC_2("xucred.cr_version %u != %d",
      VAR_3->cr_version, VAR_0);
  VAR_5 = -1;
 }
 if (VAR_3->cr_uid != VAR_2.proc_cred.euid) {
  FUNC_2("xucred.cr_uid %lu != %lu (EUID)",
      (u_long)VAR_3->cr_uid, (u_long)VAR_2.proc_cred.euid);
  VAR_5 = -1;
 }
 if (VAR_3->cr_ngroups == 0) {
  FUNC_2("xucred.cr_ngroups == 0");
  VAR_5 = -1;
 }
 if (VAR_3->cr_ngroups < 0) {
  FUNC_2("xucred.cr_ngroups < 0");
  VAR_5 = -1;
 }
 if (VAR_3->cr_ngroups > VAR_1) {
  FUNC_2("xucred.cr_ngroups %hu > %u (max)",
      VAR_3->cr_ngroups, VAR_1);
  VAR_5 = -1;
 }
 if (VAR_3->cr_groups[0] != VAR_2.proc_cred.egid) {
  FUNC_2("xucred.cr_groups[0] %lu != %lu (EGID)",
      (u_long)VAR_3->cr_groups[0], (u_long)VAR_2.proc_cred.egid);
  VAR_5 = -1;
 }
 if (FUNC_0("xucred.cr_groups", VAR_3->cr_groups,
     "xucred.cr_ngroups", VAR_3->cr_ngroups, 0) < 0)
  VAR_5 = -1;
 return (VAR_5);
}

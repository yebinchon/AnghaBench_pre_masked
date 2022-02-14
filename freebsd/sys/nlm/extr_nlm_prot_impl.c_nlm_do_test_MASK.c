
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vs ;
struct TYPE_8__ {int exclusive; int l_len; int l_offset; int svid; } ;
struct TYPE_9__ {TYPE_2__ holder; } ;
struct TYPE_10__ {TYPE_3__ nlm4_testrply_u; int stat; } ;
struct vfs_state {TYPE_4__ stat; int vs_vp; int cookie; } ;
struct svc_req {int rq_vers; } ;
struct nlm_host {int nh_sysid; int nh_caller_name; } ;
struct flock {int l_sysid; scalar_t__ l_type; int l_len; int l_start; int l_pid; int l_whence; } ;
typedef struct vfs_state nlm4_testres ;
struct TYPE_7__ {int svid; int l_len; int l_offset; int fh; int caller_name; } ;
struct TYPE_11__ {scalar_t__ exclusive; TYPE_1__ alock; int cookie; } ;
typedef TYPE_5__ nlm4_testargs ;
typedef int fhandle_t ;
typedef int accmode_t ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *,int ,struct flock*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct vfs_state*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct nlm_host*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 struct nlm_host* FUNC_7 (int ,int ,int ) ;
 struct nlm_host* FUNC_8 (int) ;
 int FUNC_9 (struct nlm_host*,struct svc_req*,int *,struct vfs_state*,int ) ;
 scalar_t__ VAR_16 ;
 int * FUNC_10 (struct nlm_host*,int ) ;
 int FUNC_11 (struct nlm_host*) ;
 int FUNC_12 (struct vfs_state*) ;
 int FUNC_13 (struct svc_req*) ;
 scalar_t__ VAR_17 ;

int
FUNC_14(nlm4_testargs *VAR_18, nlm4_testres *VAR_19, struct svc_req *VAR_20,
 CLIENT **VAR_21)
{
 fhandle_t VAR_22;
 struct vfs_state VAR_23;
 struct nlm_host *VAR_24, *VAR_25;
 int VAR_26, VAR_27;
 struct flock VAR_28;
 accmode_t VAR_29;

 FUNC_2(VAR_19, 0, sizeof(*VAR_19));
 FUNC_2(&VAR_23, 0, sizeof(VAR_23));

 VAR_24 = FUNC_7(VAR_18->alock.caller_name,
     FUNC_13(VAR_20), VAR_20->rq_vers);
 if (!VAR_24) {
  VAR_19->stat.stat = VAR_13;
  return (VAR_0);
 }

 FUNC_0(3, "nlm_do_test(): caller_name = %s (sysid = %d)\n",
     VAR_24->nh_caller_name, VAR_24->nh_sysid);

 FUNC_3(VAR_24);
 VAR_27 = VAR_24->nh_sysid;

 FUNC_5(&VAR_22, &VAR_18->alock.fh);
 FUNC_6(&VAR_19->cookie, &VAR_18->cookie, VAR_6);

 if (VAR_17 < VAR_16) {
  VAR_19->stat.stat = VAR_12;
  goto out;
 }

 VAR_29 = VAR_18->exclusive ? VAR_10 : VAR_9;
 VAR_26 = FUNC_9(VAR_24, VAR_20, &VAR_22, &VAR_23, VAR_29);
 if (VAR_26) {
  VAR_19->stat.stat = FUNC_4(VAR_26);
  goto out;
 }

 VAR_28.l_start = VAR_18->alock.l_offset;
 VAR_28.l_len = VAR_18->alock.l_len;
 VAR_28.l_pid = VAR_18->alock.svid;
 VAR_28.l_sysid = VAR_27;
 VAR_28.l_whence = VAR_7;
 if (VAR_18->exclusive)
  VAR_28.l_type = VAR_5;
 else
  VAR_28.l_type = VAR_2;
 VAR_26 = FUNC_1(VAR_23.vs_vp, ((void*)0), VAR_1, &VAR_28, VAR_3);
 if (VAR_26) {
  VAR_19->stat.stat = VAR_14;
  goto out;
 }

 if (VAR_28.l_type == VAR_4) {
  VAR_19->stat.stat = VAR_15;
 } else {
  VAR_19->stat.stat = VAR_11;
  VAR_19->stat.nlm4_testrply_u.holder.exclusive =
   (VAR_28.l_type == VAR_5);
  VAR_19->stat.nlm4_testrply_u.holder.svid = VAR_28.l_pid;
  VAR_25 = FUNC_8(VAR_28.l_sysid);
  if (VAR_25) {
   FUNC_11(VAR_25);
  }
  VAR_19->stat.nlm4_testrply_u.holder.l_offset = VAR_28.l_start;
  VAR_19->stat.nlm4_testrply_u.holder.l_len = VAR_28.l_len;
 }

out:
 FUNC_12(&VAR_23);
 if (VAR_21)
  *VAR_21 = FUNC_10(VAR_24, VAR_8);
 FUNC_11(VAR_24);
 return (0);
}

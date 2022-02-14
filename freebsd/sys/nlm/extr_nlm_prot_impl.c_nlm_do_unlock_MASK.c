
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vs ;
struct TYPE_6__ {int stat; } ;
struct vfs_state {TYPE_2__ stat; int vs_vp; int cookie; } ;
struct svc_req {int rq_vers; } ;
struct nlm_host {int nh_sysid; int nh_caller_name; } ;
struct flock {int l_sysid; int l_type; int l_whence; int l_pid; int l_len; int l_start; } ;
struct TYPE_5__ {int svid; int l_len; int l_offset; int fh; int caller_name; } ;
struct TYPE_7__ {TYPE_1__ alock; int cookie; } ;
typedef TYPE_3__ nlm4_unlockargs ;
typedef struct vfs_state nlm4_res ;
typedef int fhandle_t ;
typedef int accmode_t ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int ,struct flock*,int ) ;
 int FUNC_2 (struct vfs_state*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct nlm_host*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 struct nlm_host* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct nlm_host*,struct svc_req*,int *,struct vfs_state*,int ) ;
 scalar_t__ VAR_9 ;
 int * FUNC_9 (struct nlm_host*,int ) ;
 int FUNC_10 (struct nlm_host*) ;
 int FUNC_11 (struct vfs_state*) ;
 int FUNC_12 (struct svc_req*) ;
 scalar_t__ VAR_10 ;

int
FUNC_13(nlm4_unlockargs *VAR_11, nlm4_res *VAR_12, struct svc_req *VAR_13,
    CLIENT **VAR_14)
{
 fhandle_t VAR_15;
 struct vfs_state VAR_16;
 struct nlm_host *VAR_17;
 int VAR_18, VAR_19;
 struct flock VAR_20;

 FUNC_2(VAR_12, 0, sizeof(*VAR_12));
 FUNC_2(&VAR_16, 0, sizeof(VAR_16));

 VAR_17 = FUNC_7(VAR_11->alock.caller_name,
     FUNC_12(VAR_13), VAR_13->rq_vers);
 if (!VAR_17) {
  VAR_12->stat.stat = VAR_7;
  return (VAR_0);
 }

 FUNC_0(3, "nlm_do_unlock(): caller_name = %s (sysid = %d)\n",
     VAR_17->nh_caller_name, VAR_17->nh_sysid);

 FUNC_3(VAR_17);
 VAR_19 = VAR_17->nh_sysid;

 FUNC_5(&VAR_15, &VAR_11->alock.fh);
 FUNC_6(&VAR_12->cookie, &VAR_11->cookie, VAR_3);

 if (VAR_10 < VAR_9) {
  VAR_12->stat.stat = VAR_6;
  goto out;
 }

 VAR_18 = FUNC_8(VAR_17, VAR_13, &VAR_15, &VAR_16, (accmode_t)0);
 if (VAR_18) {
  VAR_12->stat.stat = FUNC_4(VAR_18);
  goto out;
 }

 VAR_20.l_start = VAR_11->alock.l_offset;
 VAR_20.l_len = VAR_11->alock.l_len;
 VAR_20.l_pid = VAR_11->alock.svid;
 VAR_20.l_sysid = VAR_19;
 VAR_20.l_whence = VAR_4;
 VAR_20.l_type = VAR_2;
 VAR_18 = FUNC_1(VAR_16.vs_vp, ((void*)0), VAR_2, &VAR_20, VAR_1);





 VAR_12->stat.stat = VAR_8;

out:
 FUNC_11(&VAR_16);
 if (VAR_14)
  *VAR_14 = FUNC_9(VAR_17, VAR_5);
 FUNC_10(VAR_17);
 return (0);
}

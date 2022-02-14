
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vfs_state {int vs_vnlocked; int vs_vp; TYPE_2__* vs_mp; } ;
struct ucred {scalar_t__ cr_uid; } ;
struct svc_req {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nlm_host {int nh_addr; } ;
struct TYPE_6__ {int fh_fid; int fh_fsid; } ;
typedef TYPE_1__ fhandle_t ;
typedef scalar_t__ accmode_t ;
struct TYPE_7__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,struct sockaddr*,int*,struct ucred**,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int *) ;
 int FUNC_2 (int ,scalar_t__,struct ucred*,int ) ;
 int FUNC_3 (int ,int ,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct ucred*) ;
 int VAR_10 ;
 int FUNC_5 (struct vfs_state*,int ,int) ;
 int FUNC_6 (struct svc_req*,struct ucred**,int *) ;
 TYPE_2__* FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct nlm_host *VAR_11, struct svc_req *VAR_12,
    fhandle_t *VAR_13, struct vfs_state *VAR_14, accmode_t VAR_15)
{
 int VAR_16, VAR_17;
 struct ucred *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);

 FUNC_5(VAR_14, 0, sizeof(*VAR_14));

 VAR_14->vs_mp = FUNC_7(&VAR_13->fh_fsid);
 if (!VAR_14->vs_mp) {
  return (VAR_2);
 }


 if (VAR_15 != 0) {
  VAR_16 = FUNC_0(VAR_14->vs_mp,
      (struct sockaddr *)&VAR_11->nh_addr, &VAR_17, &VAR_19,
      ((void*)0), ((void*)0));
  if (VAR_16)
   goto out;

  if (VAR_17 & VAR_6 ||
      (VAR_14->vs_mp->mnt_flag & VAR_7)) {
   VAR_16 = VAR_1;
   goto out;
  }
 }

 VAR_16 = FUNC_1(VAR_14->vs_mp, &VAR_13->fh_fid, VAR_4, &VAR_14->vs_vp);
 if (VAR_16)
  goto out;
 VAR_14->vs_vnlocked = VAR_8;

 if (VAR_15 != 0) {
  if (!FUNC_6(VAR_12, &VAR_18, ((void*)0))) {
   VAR_16 = VAR_0;
   goto out;
  }
  if (VAR_18->cr_uid == 0 || (VAR_17 & VAR_5)) {
   FUNC_4(VAR_18);
   VAR_18 = VAR_19;
   VAR_19 = ((void*)0);
  }




  VAR_16 = FUNC_2(VAR_14->vs_vp, VAR_15, VAR_18, VAR_10);





  if (VAR_16 != 0 && VAR_15 != VAR_9)
   VAR_16 = FUNC_2(VAR_14->vs_vp, VAR_9, VAR_18, VAR_10);
  if (VAR_16)
   goto out;
 }


 FUNC_3(VAR_14->vs_vp, 0, VAR_10);



 VAR_14->vs_vnlocked = VAR_3;

out:
 if (VAR_18)
  FUNC_4(VAR_18);
 if (VAR_19)
  FUNC_4(VAR_19);

 return (VAR_16);
}

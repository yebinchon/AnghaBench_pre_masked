
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fhe_stats_sysctl; } ;
struct TYPE_5__ {int max_reqs_per_nfsd; int max_nfsds_per_fh; int bin_shift; int write; int read; int enable; } ;
struct fha_params {TYPE_3__ callbacks; int sysctl_tree; int sysctl_ctx; TYPE_2__ ctls; TYPE_1__* fha_hash; } ;
struct TYPE_4__ {int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int *,int ) ;

void
FUNC_4(struct fha_params *VAR_12)
{
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
  FUNC_3(&VAR_12->fha_hash[VAR_13].mtx, "fhalock", ((void*)0), VAR_10);




 VAR_12->ctls.enable = VAR_4;
 VAR_12->ctls.read = VAR_7;
 VAR_12->ctls.write = VAR_8;
 VAR_12->ctls.bin_shift = VAR_3;
 VAR_12->ctls.max_nfsds_per_fh = VAR_5;
 VAR_12->ctls.max_reqs_per_nfsd = VAR_6;




 FUNC_1(&VAR_12->sysctl_ctx, FUNC_2(VAR_12->sysctl_tree),
     VAR_11, "enable", VAR_1,
     &VAR_12->ctls.enable, 0, "Enable NFS File Handle Affinity (FHA)");

 FUNC_1(&VAR_12->sysctl_ctx, FUNC_2(VAR_12->sysctl_tree),
     VAR_11, "read", VAR_1,
     &VAR_12->ctls.read, 0, "Enable NFS FHA read locality");

 FUNC_1(&VAR_12->sysctl_ctx, FUNC_2(VAR_12->sysctl_tree),
     VAR_11, "write", VAR_1,
     &VAR_12->ctls.write, 0, "Enable NFS FHA write locality");

 FUNC_1(&VAR_12->sysctl_ctx, FUNC_2(VAR_12->sysctl_tree),
     VAR_11, "bin_shift", VAR_1,
     &VAR_12->ctls.bin_shift, 0, "Maximum locality distance 2^(bin_shift) bytes");

 FUNC_1(&VAR_12->sysctl_ctx, FUNC_2(VAR_12->sysctl_tree),
     VAR_11, "max_nfsds_per_fh", VAR_1,
     &VAR_12->ctls.max_nfsds_per_fh, 0, "Maximum nfsd threads that "
     "should be working on requests for the same file handle");

 FUNC_1(&VAR_12->sysctl_ctx, FUNC_2(VAR_12->sysctl_tree),
     VAR_11, "max_reqs_per_nfsd", VAR_1,
     &VAR_12->ctls.max_reqs_per_nfsd, 0, "Maximum requests that "
     "single nfsd thread should be working on at any time");

 FUNC_0(&VAR_12->sysctl_ctx, FUNC_2(VAR_12->sysctl_tree),
     VAR_11, "fhe_stats", VAR_2 | VAR_0, 0, 0,
     VAR_12->callbacks.fhe_stats_sysctl, "A", "");

}

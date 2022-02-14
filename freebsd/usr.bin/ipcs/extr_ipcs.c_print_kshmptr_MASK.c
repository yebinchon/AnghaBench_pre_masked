
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cgid; int cuid; int gid; int uid; int mode; scalar_t__ key; } ;
struct TYPE_3__ {int shm_nattch; int shm_cpid; int shm_lpid; int shm_segsz; TYPE_2__ shm_perm; int shm_ctime; int shm_dtime; int shm_atime; } ;
struct shmid_kernel {TYPE_1__ u; } ;


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
FUNC_6(int VAR_5, int VAR_6, struct shmid_kernel *VAR_7)
{
 char VAR_8[100], VAR_9[100], VAR_10[100];

 FUNC_1(VAR_7->u.shm_atime, VAR_8);
 FUNC_1(VAR_7->u.shm_dtime, VAR_9);
 FUNC_1(VAR_7->u.shm_ctime, VAR_10);

 FUNC_4("m %12d %12d %s %-8s %-8s",
     FUNC_0(VAR_5, VAR_7->u.shm_perm),
     (int)VAR_7->u.shm_perm.key,
     FUNC_2(VAR_7->u.shm_perm.mode),
     FUNC_5(VAR_7->u.shm_perm.uid, 0),
     FUNC_3(VAR_7->u.shm_perm.gid, 0));

 if (VAR_6 & VAR_1)
  FUNC_4(" %-8s %-8s",
      FUNC_5(VAR_7->u.shm_perm.cuid, 0),
      FUNC_3(VAR_7->u.shm_perm.cgid, 0));

 if (VAR_6 & VAR_2)
  FUNC_4(" %12d",
      VAR_7->u.shm_nattch);

 if (VAR_6 & VAR_0)
  FUNC_4(" %12zu",
      VAR_7->u.shm_segsz);

 if (VAR_6 & VAR_3)
  FUNC_4(" %12d %12d",
      VAR_7->u.shm_cpid,
      VAR_7->u.shm_lpid);

 if (VAR_6 & VAR_4)
  FUNC_4(" %s %s %s",
      VAR_8,
      VAR_9,
      VAR_10);

 FUNC_4("\n");
}

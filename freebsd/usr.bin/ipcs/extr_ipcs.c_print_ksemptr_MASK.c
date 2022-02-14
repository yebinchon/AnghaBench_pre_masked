
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cgid; int cuid; int gid; int uid; int mode; scalar_t__ key; } ;
struct TYPE_3__ {int sem_nsems; TYPE_2__ sem_perm; int sem_ctime; int sem_otime; } ;
struct semid_kernel {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_2__) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (int ,int ) ;

void
FUNC_6(int VAR_3, int VAR_4, struct semid_kernel *VAR_5)
{
 char VAR_6[100], VAR_7[100];

 FUNC_1(VAR_5->u.sem_otime, VAR_7);
 FUNC_1(VAR_5->u.sem_ctime, VAR_6);

 FUNC_4("s %12d %12d %s %-8s %-8s",
     FUNC_0(VAR_3, VAR_5->u.sem_perm),
     (int)VAR_5->u.sem_perm.key,
     FUNC_2(VAR_5->u.sem_perm.mode),
     FUNC_5(VAR_5->u.sem_perm.uid, 0),
     FUNC_3(VAR_5->u.sem_perm.gid, 0));

 if (VAR_4 & VAR_1)
  FUNC_4(" %-8s %-8s",
      FUNC_5(VAR_5->u.sem_perm.cuid, 0),
      FUNC_3(VAR_5->u.sem_perm.cgid, 0));

 if (VAR_4 & VAR_0)
  FUNC_4(" %12d",
      VAR_5->u.sem_nsems);

 if (VAR_4 & VAR_2)
  FUNC_4(" %s %s",
      VAR_7,
      VAR_6);

 FUNC_4("\n");
}

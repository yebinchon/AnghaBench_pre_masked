
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {struct mount* v_mount; } ;
struct ucred {int dummy; } ;
struct timeval {int dummy; } ;
struct statfs {long f_bfree; int f_blocks; unsigned long f_bsize; } ;
struct mount {struct statfs mnt_stat; } ;
typedef int off_t ;
struct TYPE_4__ {int af_filesz; } ;
struct TYPE_3__ {int aq_minfree; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mount*,struct statfs*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_1__ VAR_18 ;
 int FUNC_2 (int ) ;
 int VAR_19 ;
 int FUNC_3 () ;
 int VAR_20 ;
 int FUNC_4 (struct vnode*,struct mount*,char*,...) ;
 int VAR_21 ;
 scalar_t__ FUNC_5 (struct timeval*,int*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct mount*,int ) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (int ,struct vnode*,void*,size_t,int ,int ,int,struct ucred*,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_10(struct vnode *VAR_22, struct ucred *VAR_23, void *VAR_24,
    size_t VAR_25)
{
 static struct timeval VAR_26;
 static struct timeval VAR_27;
 static int VAR_28;
 struct statfs *VAR_29;
 struct mount *VAR_30;
 int VAR_31;
 static int VAR_32;
 long VAR_33;

 FUNC_0();

 if (VAR_22 == ((void*)0))
  return;

 VAR_30 = VAR_22->v_mount;
 if (VAR_30 == ((void*)0)) {
  VAR_31 = VAR_4;
  goto fail;
 }
 VAR_31 = FUNC_7(VAR_30, 0);
 if (VAR_31 != 0) {
  VAR_30 = ((void*)0);
  goto fail;
 }
 VAR_29 = &VAR_30->mnt_stat;






 VAR_31 = FUNC_1(VAR_30, VAR_29);
 if (VAR_31 != 0)
  goto fail;
 if (VAR_29->f_bfree < VAR_0) {
  VAR_31 = VAR_5;
  goto fail_enospc;
 }






 if (VAR_18.aq_minfree != 0) {
  VAR_33 = VAR_29->f_blocks / (100 / VAR_18.aq_minfree);
  if (VAR_29->f_bfree < VAR_33) {
   if (FUNC_5(&VAR_26,
       &VAR_28, 1)) {
    (void)FUNC_2(
        VAR_1);
    FUNC_6("Warning: disk space low (< %d%% free) "
        "on audit log file-system\n",
        VAR_18.aq_minfree);
   }
  }
 }






 if (VAR_13.af_filesz != 0 &&
     VAR_19 >= VAR_13.af_filesz * (VAR_12 + 1)) {
  FUNC_0();

  VAR_12++;
  (void)FUNC_2(VAR_3);
 }
 if (VAR_11) {
  if ((unsigned long)((VAR_17 + VAR_16 + 1) *
      VAR_8) / VAR_29->f_bsize >=
      (unsigned long)(VAR_29->f_bfree)) {
   if (FUNC_5(&VAR_27, &VAR_32, 1))
    FUNC_6("audit_record_write: free space "
        "below size of audit queue, failing "
        "stop\n");
   VAR_14 = 1;
  } else if (VAR_14) {





  }
 }

 VAR_31 = FUNC_9(VAR_10, VAR_22, VAR_24, VAR_25, (off_t)0, VAR_9,
     VAR_6|VAR_7, VAR_23, ((void*)0), ((void*)0), VAR_21);
 if (VAR_31 == VAR_5)
  goto fail_enospc;
 else if (VAR_31)
  goto fail;
 FUNC_0();
 VAR_19 += VAR_25;
 if (VAR_14) {
  if (VAR_17 == 0 && VAR_16 == 0) {
   FUNC_4(VAR_22, VAR_30,
       "Audit store overflow; record queue drained.");
  }
 }

 FUNC_8(VAR_30);
 return;

fail_enospc:





 if (VAR_11) {
  FUNC_4(VAR_22, VAR_30,
      "Audit log space exhausted and fail-stop set.");
 }
 (void)FUNC_2(VAR_2);
 VAR_20 = 1;
 FUNC_3();


fail:




 if (VAR_15) {
  FUNC_4(VAR_22, VAR_30,
      "audit_worker: write error %d\n", VAR_31);
 } else if (FUNC_5(&VAR_27, &VAR_32, 1))
  FUNC_6("audit_worker: write error %d\n", VAR_31);
 if (VAR_30 != ((void*)0))
  FUNC_8(VAR_30);
}

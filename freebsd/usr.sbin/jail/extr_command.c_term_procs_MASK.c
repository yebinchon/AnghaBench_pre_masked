
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kinfo_proc {scalar_t__ ki_jid; int ki_pid; } ;
struct TYPE_2__ {int tv_sec; } ;
struct cfjail {scalar_t__ jid; scalar_t__ nprocs; TYPE_1__ timeout; int * intparams; } ;
typedef int kvm_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cfjail*,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (struct cfjail*,char*) ;
 scalar_t__ FUNC_4 (int,int ) ;
 struct kinfo_proc* FUNC_5 (int *,int ,int ,int*) ;
 int * FUNC_6 (int *,int *,int *,int ,int *) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct cfjail *VAR_7)
{
 struct kinfo_proc *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 static kvm_t *VAR_13;

 if (!FUNC_2(VAR_7->intparams[VAR_2], &VAR_12))
  VAR_12 = VAR_1;
 else if (VAR_12 == 0)
  return 0;

 if (VAR_13 == ((void*)0)) {
  VAR_13 = FUNC_6(((void*)0), ((void*)0), ((void*)0), VAR_4, ((void*)0));
  if (VAR_13 == ((void*)0))
   return 0;
 }

 VAR_8 = FUNC_5(VAR_13, VAR_3, 0, &VAR_11);
 if (VAR_8 == ((void*)0))
  return 0;
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
  if (VAR_8[VAR_9].ki_jid == VAR_7->jid &&
      FUNC_4(VAR_8[VAR_9].ki_pid, VAR_5) == 0) {
   (void)FUNC_0(VAR_7, VAR_8[VAR_9].ki_pid);
   if (VAR_6 > 0) {
    if (!VAR_10) {
     VAR_10 = 1;
     FUNC_3(VAR_7, "sent SIGTERM to:");
    }
    FUNC_7(" %d", VAR_8[VAR_9].ki_pid);
   }
  }
 if (VAR_10)
  FUNC_7("\n");
 if (VAR_7->nprocs > 0) {
  FUNC_1(VAR_0, &VAR_7->timeout);
  VAR_7->timeout.tv_sec += VAR_12;
  return 1;
 }
 return 0;
}

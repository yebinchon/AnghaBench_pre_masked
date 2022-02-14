
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int td_pflags; TYPE_6__* td_ar; TYPE_5__* td_ucred; TYPE_3__* td_proc; } ;
struct au_mask {int dummy; } ;
typedef scalar_t__ au_id_t ;
typedef scalar_t__ au_event_t ;
typedef int au_class_t ;
struct TYPE_12__ {void* k_dtaudit_state; } ;
struct TYPE_10__ {scalar_t__ ai_auid; struct au_mask ai_mask; } ;
struct TYPE_11__ {TYPE_4__ cr_audit; } ;
struct TYPE_9__ {TYPE_2__* p_sysent; } ;
struct TYPE_8__ {unsigned short sv_size; TYPE_1__* sv_table; } ;
struct TYPE_7__ {scalar_t__ sy_auevent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,struct au_mask*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct au_mask VAR_8 ;
 TYPE_6__* FUNC_3 (scalar_t__,struct thread*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct thread*,int ) ;

void
FUNC_9(unsigned short VAR_9, struct thread *VAR_10)
{
 struct au_mask *VAR_11;



 au_class_t VAR_12;
 au_event_t VAR_13;
 au_id_t VAR_14;
 int VAR_15;

 FUNC_0(VAR_10->td_ar == ((void*)0), ("audit_syscall_enter: td->td_ar != NULL"));
 FUNC_0((VAR_10->td_pflags & VAR_4) == 0,
     ("audit_syscall_enter: TDP_AUDITREC set"));
 if (VAR_9 >= VAR_10->td_proc->p_sysent->sv_size)
  return;

 VAR_13 = VAR_10->td_proc->p_sysent->sv_table[VAR_9].sy_auevent;
 if (VAR_13 == VAR_0)
  return;





 VAR_14 = VAR_10->td_ucred->cr_audit.ai_auid;
 if (VAR_14 == VAR_1)
  VAR_11 = &VAR_8;
 else
  VAR_11 = &VAR_10->td_ucred->cr_audit.ai_mask;





 VAR_12 = FUNC_1(VAR_13);
 if (FUNC_2(VAR_13, VAR_12, VAR_11, VAR_2)) {
  if (VAR_6 &&
      FUNC_8(VAR_10, VAR_3) != 0) {
   FUNC_5(&VAR_5, &VAR_7);
   FUNC_7("audit_failing_stop: thread continued");
  }
  VAR_15 = 1;
 } else if (FUNC_4(VAR_14, VAR_13, VAR_12, VAR_2, 0)) {
  VAR_15 = 1;
 } else {
  VAR_15 = 0;
 }
 if (VAR_15) {
  VAR_10->td_ar = FUNC_3(VAR_13, VAR_10);
  if (VAR_10->td_ar != ((void*)0)) {
   VAR_10->td_pflags |= VAR_4;



  }
 } else
  VAR_10->td_ar = ((void*)0);
}

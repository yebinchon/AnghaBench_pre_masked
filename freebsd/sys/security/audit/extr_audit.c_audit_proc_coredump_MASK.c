
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct au_mask {int dummy; } ;
struct TYPE_4__ {scalar_t__ ai_auid; struct au_mask ai_mask; } ;
struct ucred {TYPE_1__ cr_audit; } ;
struct thread {TYPE_3__* td_proc; struct ucred* td_ucred; } ;
struct TYPE_5__ {char* ar_arg_upath1; int ar_arg_signum; } ;
struct kaudit_record {TYPE_2__ k_ar; } ;
typedef scalar_t__ au_id_t ;
typedef int au_class_t ;
struct TYPE_6__ {int p_sig; } ;


 int FUNC_0 (struct kaudit_record*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,struct au_mask*,int) ;
 int FUNC_3 (struct thread*,int ,char*,char*) ;
 int FUNC_4 (struct kaudit_record*,int,int) ;
 struct au_mask VAR_10 ;
 struct kaudit_record* FUNC_5 (int ,struct thread*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,int,int ) ;
 char* FUNC_7 (int ,int ,int ) ;

void
FUNC_8(struct thread *VAR_11, char *VAR_12, int VAR_13)
{
 struct kaudit_record *VAR_14;
 struct au_mask *VAR_15;
 struct ucred *VAR_16;
 au_class_t VAR_17;
 int VAR_18, VAR_19;
 char **VAR_20;
 au_id_t VAR_21;

 VAR_18 = 0;




 VAR_16 = VAR_11->td_ucred;
 VAR_21 = VAR_16->cr_audit.ai_auid;
 if (VAR_21 == VAR_4)
  VAR_15 = &VAR_10;
 else
  VAR_15 = &VAR_16->cr_audit.ai_mask;




 if (VAR_13 != 0)
  VAR_19 = VAR_5;
 else
  VAR_19 = VAR_6;
 VAR_17 = FUNC_1(VAR_3);
 if (FUNC_2(VAR_3, VAR_17, VAR_15, VAR_19) == 0 &&
     FUNC_6(VAR_21, VAR_3, VAR_17, VAR_19, 0) == 0)
  return;






 VAR_14 = FUNC_5(VAR_3, VAR_11);
 if (VAR_14 == ((void*)0))
  return;
 if (VAR_12 != ((void*)0)) {
  VAR_20 = &VAR_14->k_ar.ar_arg_upath1;
  *VAR_20 = FUNC_7(VAR_7, VAR_8, VAR_9);
  FUNC_3(VAR_11, VAR_2, VAR_12, *VAR_20);
  FUNC_0(VAR_14, VAR_1);
 }
 VAR_14->k_ar.ar_arg_signum = VAR_11->td_proc->p_sig;
 FUNC_0(VAR_14, VAR_0);
 if (VAR_13 != 0)
  VAR_18 = 1;
 FUNC_4(VAR_14, VAR_13, VAR_18);
}

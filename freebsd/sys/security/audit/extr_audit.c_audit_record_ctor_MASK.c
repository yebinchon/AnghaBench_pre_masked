
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ai_termid; int ai_mask; int ai_asid; int ai_auid; } ;
struct ucred {struct prison* cr_prison; TYPE_2__ cr_audit; int * cr_groups; int cr_rgid; int cr_ruid; } ;
struct thread {TYPE_1__* td_proc; struct ucred* td_ucred; } ;
struct prison {int pr_name; } ;
struct TYPE_6__ {char* ar_jailname; int ar_subj_term_addr; int ar_subj_amask; int ar_subj_pid; int ar_subj_asid; int ar_subj_auid; int ar_subj_egid; int ar_subj_rgid; int ar_subj_ruid; int ar_subj_cred; int ar_starttime; int ar_magic; } ;
struct kaudit_record {TYPE_3__ k_ar; } ;
struct TYPE_4__ {int p_pid; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct kaudit_record*,int) ;
 int FUNC_2 (struct ucred*,int *) ;
 scalar_t__ FUNC_3 (struct ucred*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_6(void *VAR_1, int VAR_2, void *VAR_3, int VAR_4)
{
 struct kaudit_record *VAR_5;
 struct thread *VAR_6;
 struct ucred *VAR_7;
 struct prison *VAR_8;

 FUNC_0(sizeof(*VAR_5) == VAR_2, ("audit_record_ctor: wrong size"));

 VAR_6 = VAR_3;
 VAR_5 = VAR_1;
 FUNC_1(VAR_5, sizeof(*VAR_5));
 VAR_5->k_ar.ar_magic = VAR_0;
 FUNC_4(&VAR_5->k_ar.ar_starttime);




 VAR_7 = VAR_6->td_ucred;
 FUNC_2(VAR_7, &VAR_5->k_ar.ar_subj_cred);
 VAR_5->k_ar.ar_subj_ruid = VAR_7->cr_ruid;
 VAR_5->k_ar.ar_subj_rgid = VAR_7->cr_rgid;
 VAR_5->k_ar.ar_subj_egid = VAR_7->cr_groups[0];
 VAR_5->k_ar.ar_subj_auid = VAR_7->cr_audit.ai_auid;
 VAR_5->k_ar.ar_subj_asid = VAR_7->cr_audit.ai_asid;
 VAR_5->k_ar.ar_subj_pid = VAR_6->td_proc->p_pid;
 VAR_5->k_ar.ar_subj_amask = VAR_7->cr_audit.ai_mask;
 VAR_5->k_ar.ar_subj_term_addr = VAR_7->cr_audit.ai_termid;





 if (FUNC_3(VAR_7)) {
  VAR_8 = VAR_7->cr_prison;
  (void) FUNC_5(VAR_5->k_ar.ar_jailname, VAR_8->pr_name,
      sizeof(VAR_5->k_ar.ar_jailname));
 } else
  VAR_5->k_ar.ar_jailname[0] = '\0';
 return (0);
}

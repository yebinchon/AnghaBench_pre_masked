
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ai_termid; int ai_asid; int ai_auid; } ;
struct ucred {TYPE_1__ cr_audit; int cr_rgid; int cr_ruid; int * cr_groups; int cr_uid; } ;
struct proc {int p_pid; struct ucred* p_ucred; } ;
struct TYPE_4__ {int ar_arg_pid; int ar_arg_termid_addr; int ar_arg_asid; int ar_arg_rgid; int ar_arg_ruid; int ar_arg_egid; int ar_arg_euid; int ar_arg_auid; } ;
struct kaudit_record {TYPE_2__ k_ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kaudit_record*,int) ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int VAR_9 ;
 int FUNC_2 (struct proc*,int ) ;
 struct kaudit_record* FUNC_3 () ;

void
FUNC_4(struct proc *VAR_10)
{
 struct kaudit_record *VAR_11;
 struct ucred *VAR_12;

 FUNC_1(VAR_10 != ((void*)0), ("audit_arg_process: p == NULL"));

 FUNC_2(VAR_10, VAR_9);

 VAR_11 = FUNC_3();
 if (VAR_11 == ((void*)0))
  return;

 VAR_12 = VAR_10->p_ucred;
 VAR_11->k_ar.ar_arg_auid = VAR_12->cr_audit.ai_auid;
 VAR_11->k_ar.ar_arg_euid = VAR_12->cr_uid;
 VAR_11->k_ar.ar_arg_egid = VAR_12->cr_groups[0];
 VAR_11->k_ar.ar_arg_ruid = VAR_12->cr_ruid;
 VAR_11->k_ar.ar_arg_rgid = VAR_12->cr_rgid;
 VAR_11->k_ar.ar_arg_asid = VAR_12->cr_audit.ai_asid;
 VAR_11->k_ar.ar_arg_termid_addr = VAR_12->cr_audit.ai_termid;
 VAR_11->k_ar.ar_arg_pid = VAR_10->p_pid;
 FUNC_0(VAR_11, VAR_1 | VAR_3 | VAR_2 | VAR_7 |
     VAR_6 | VAR_0 | VAR_8 | VAR_4 | VAR_5);
}

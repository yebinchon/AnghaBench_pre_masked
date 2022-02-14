
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* kvm_ops; int rtas_token_lock; int rtas_tokens; int spapr_tce_tables; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_3__ {int (* init_vm ) (struct kvm*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*) ;

int FUNC_4(struct kvm *VAR_0)
{







 return VAR_0->arch.kvm_ops->init_vm(VAR_0);
}

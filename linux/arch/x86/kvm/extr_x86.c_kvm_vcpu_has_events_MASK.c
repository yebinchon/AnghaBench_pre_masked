
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pending; } ;
struct TYPE_7__ {scalar_t__ pv_unhalted; } ;
struct TYPE_9__ {scalar_t__ smi_pending; scalar_t__ nmi_pending; TYPE_3__ exception; TYPE_2__ pv; } ;
struct TYPE_6__ {int done; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_1__ async_pf; } ;
struct TYPE_10__ {scalar_t__ (* nmi_allowed ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (int ,struct kvm_vcpu*) ;
 TYPE_5__* VAR_2 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_9(struct kvm_vcpu *VAR_3)
{
 if (!FUNC_7(&VAR_3->async_pf.done))
  return 1;

 if (FUNC_1(VAR_3))
  return 1;

 if (VAR_3->arch.pv.pv_unhalted)
  return 1;

 if (VAR_3->arch.exception.pending)
  return 1;

 if (FUNC_6(VAR_0, VAR_3) ||
     (VAR_3->arch.nmi_pending &&
      VAR_2->nmi_allowed(VAR_3)))
  return 1;

 if (FUNC_6(VAR_1, VAR_3) ||
     (VAR_3->arch.smi_pending && !FUNC_0(VAR_3)))
  return 1;

 if (FUNC_2(VAR_3) &&
     (FUNC_3(VAR_3) ||
     FUNC_4(VAR_3)))
  return 1;

 if (FUNC_5(VAR_3))
  return 1;

 return 0;
}

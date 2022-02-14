
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nmi_pending; int nmi_queued; scalar_t__ nmi_injected; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ (* get_nmi_mask ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ,unsigned int) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2)
{
 unsigned VAR_3 = 2;






 if (VAR_1->get_nmi_mask(VAR_2) || VAR_2->arch.nmi_injected)
  VAR_3 = 1;

 VAR_2->arch.nmi_pending += FUNC_0(&VAR_2->arch.nmi_queued, 0);
 VAR_2->arch.nmi_pending = FUNC_2(VAR_2->arch.nmi_pending, VAR_3);
 FUNC_1(VAR_0, VAR_2);
}

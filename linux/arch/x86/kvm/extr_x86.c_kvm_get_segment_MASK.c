
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int dummy; } ;
struct TYPE_2__ {int (* get_segment ) (struct kvm_vcpu*,struct kvm_segment*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int) ;

void FUNC_1(struct kvm_vcpu *VAR_1,
       struct kvm_segment *VAR_2, int VAR_3)
{
 VAR_0->get_segment(VAR_1, VAR_2, VAR_3);
}

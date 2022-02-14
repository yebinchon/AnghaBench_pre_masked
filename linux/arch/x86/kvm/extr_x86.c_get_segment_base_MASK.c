
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {unsigned long (* get_segment_base ) (struct kvm_vcpu*,int) ;} ;


 TYPE_1__* VAR_0 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_1, int VAR_2)
{
 return VAR_0->get_segment_base(VAR_1, VAR_2);
}

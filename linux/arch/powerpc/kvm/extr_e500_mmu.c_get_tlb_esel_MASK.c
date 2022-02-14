
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {TYPE_1__* gtlb_params; } ;
struct TYPE_6__ {TYPE_2__* shared; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_5__ {int mas2; } ;
struct TYPE_4__ {int ways; int entries; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvmppc_vcpu_e500*,int ) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned int FUNC_3(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvmppc_vcpu_e500 *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 == 0) {
  VAR_3 &= VAR_2->gtlb_params[0].ways - 1;
  VAR_3 += FUNC_1(VAR_2, VAR_0->arch.shared->mas2);
 } else {
  VAR_3 &= VAR_2->gtlb_params[VAR_1].entries - 1;
 }

 return VAR_3;
}

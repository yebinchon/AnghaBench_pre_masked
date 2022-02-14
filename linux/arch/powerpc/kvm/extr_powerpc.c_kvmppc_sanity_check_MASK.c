
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpu_type; int sane; scalar_t__ papr_enabled; int pvr; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct kvm_vcpu *VAR_3)
{
 int VAR_4 = 0;


 if (!VAR_3->arch.pvr)
  goto out;


 if ((VAR_3->arch.cpu_type != VAR_2) && VAR_3->arch.papr_enabled)
  goto out;


 if (!VAR_3->arch.papr_enabled && FUNC_1(VAR_3->kvm))
  goto out;






 VAR_4 = 1;

out:
 VAR_3->arch.sane = VAR_4;
 return VAR_4 ? 0 : -VAR_1;
}

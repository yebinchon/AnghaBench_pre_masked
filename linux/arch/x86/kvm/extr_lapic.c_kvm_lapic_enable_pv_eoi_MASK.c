
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfn_to_hva_cache {scalar_t__ gpa; unsigned long len; } ;
struct TYPE_3__ {scalar_t__ msr_val; struct gfn_to_hva_cache data; } ;
struct TYPE_4__ {TYPE_1__ pv_eoi; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct gfn_to_hva_cache*,scalar_t__,unsigned long) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_1, u64 VAR_2, unsigned long VAR_3)
{
 u64 VAR_4 = VAR_2 & ~VAR_0;
 struct gfn_to_hva_cache *VAR_5 = &VAR_1->arch.pv_eoi.data;
 unsigned long VAR_6;

 if (!FUNC_0(VAR_4, 4))
  return 1;

 VAR_1->arch.pv_eoi.msr_val = VAR_2;
 if (!FUNC_2(VAR_1))
  return 0;

 if (VAR_4 == VAR_5->gpa && VAR_3 <= VAR_5->len)
  VAR_6 = VAR_5->len;
 else
  VAR_6 = VAR_3;

 return FUNC_1(VAR_1->kvm, VAR_5, VAR_4, VAR_6);
}

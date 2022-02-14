
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {int dummy; } ;
struct x86_emulate_ctxt {int dummy; } ;
struct TYPE_5__ {TYPE_1__* walk_mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_6__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;
struct TYPE_4__ {int (* gva_to_gpa ) (struct kvm_vcpu*,int,int,struct x86_exception*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct kvm_vcpu* FUNC_1 (struct x86_emulate_ctxt*) ;
 int FUNC_2 (struct kvm_vcpu*,int,void*,unsigned int,unsigned int) ;
 TYPE_3__* VAR_8 ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int,int,struct x86_exception*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct x86_emulate_ctxt *VAR_9,
    gva_t VAR_10, void *VAR_11, unsigned int VAR_12,
    struct x86_exception *VAR_13)
{
 struct kvm_vcpu *VAR_14 = FUNC_1(VAR_9);
 u32 VAR_15 = (VAR_8->get_cpl(VAR_14) == 3) ? VAR_3 : 0;
 unsigned VAR_16;
 int VAR_17;


 gpa_t VAR_18 = VAR_14->arch.walk_mmu->gva_to_gpa(VAR_14, VAR_10, VAR_15|VAR_2,
          VAR_13);
 if (FUNC_5(VAR_18 == VAR_4))
  return VAR_7;

 VAR_16 = VAR_10 & (VAR_1-1);
 if (FUNC_0(VAR_16 + VAR_12 > VAR_1))
  VAR_12 = (unsigned)VAR_1 - VAR_16;
 VAR_17 = FUNC_2(VAR_14, VAR_18 >> VAR_0, VAR_11,
           VAR_16, VAR_12);
 if (FUNC_5(VAR_17 < 0))
  return VAR_6;

 return VAR_5;
}

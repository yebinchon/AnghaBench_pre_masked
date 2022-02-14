
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {int dummy; } ;
struct TYPE_4__ {unsigned long mmio_gfn; TYPE_2__* walk_mmu; int mmio_access; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef unsigned long gpa_t ;
struct TYPE_6__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;
struct TYPE_5__ {unsigned long (* gva_to_gpa ) (struct kvm_vcpu*,unsigned long,int,struct x86_exception*) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,TYPE_2__*,int ,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*,unsigned long,int,struct x86_exception*) ;
 int FUNC_3 (unsigned long,unsigned long,int,int) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_6, unsigned long VAR_7,
    gpa_t *VAR_8, struct x86_exception *VAR_9,
    bool VAR_10)
{
 u32 VAR_11 = ((VAR_5->get_cpl(VAR_6) == 3) ? VAR_2 : 0)
  | (VAR_10 ? VAR_3 : 0);






 if (FUNC_5(VAR_6, VAR_7)
     && !FUNC_0(VAR_6, VAR_6->arch.walk_mmu,
     VAR_6->arch.mmio_access, 0, VAR_11)) {
  *VAR_8 = VAR_6->arch.mmio_gfn << VAR_0 |
     (VAR_7 & (VAR_1 - 1));
  FUNC_3(VAR_7, *VAR_8, VAR_10, 0);
  return 1;
 }

 *VAR_8 = VAR_6->arch.walk_mmu->gva_to_gpa(VAR_6, VAR_7, VAR_11, VAR_9);

 if (*VAR_8 == VAR_4)
  return -1;

 return FUNC_4(VAR_6, VAR_7, *VAR_8, VAR_10);
}

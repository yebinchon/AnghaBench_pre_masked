
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int walk_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gfn_t ;


 int FUNC_0 (struct kvm_vcpu*,int ,int ,void*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0, gfn_t VAR_1,
          void *VAR_2, int VAR_3, int VAR_4, u32 VAR_5)
{
 return FUNC_0(VAR_0, VAR_0->arch.walk_mmu, VAR_1,
           VAR_2, VAR_3, VAR_4, VAR_5);
}

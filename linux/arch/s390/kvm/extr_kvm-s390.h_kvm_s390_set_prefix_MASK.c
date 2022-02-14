
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; int vcpu_id; } ;
struct TYPE_3__ {int prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ,int) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_vcpu *VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_3, 3, "set prefix of cpu %03u to 0x%x", VAR_3->vcpu_id,
     VAR_4);
 VAR_3->arch.sie_block->prefix = VAR_4 >> VAR_0;
 FUNC_1(VAR_2, VAR_3);
 FUNC_1(VAR_1, VAR_3);
}

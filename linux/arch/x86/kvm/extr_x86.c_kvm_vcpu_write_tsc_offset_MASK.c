
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int tsc_offset; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* write_l1_tsc_offset ) (struct kvm_vcpu*,int ) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 VAR_1->arch.tsc_offset = VAR_0->write_l1_tsc_offset(VAR_1, VAR_2);
}

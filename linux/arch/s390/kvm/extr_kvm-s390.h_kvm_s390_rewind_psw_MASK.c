
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct kvm_s390_sie_block* sie_block; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int addr; } ;
struct kvm_s390_sie_block {TYPE_2__ gpsw; } ;


 int FUNC_0 (TYPE_2__,int) ;

__attribute__((used)) static inline void FUNC_1(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvm_s390_sie_block *VAR_2 = VAR_0->arch.sie_block;

 VAR_2->gpsw.addr = FUNC_0(VAR_2->gpsw, VAR_1);
}

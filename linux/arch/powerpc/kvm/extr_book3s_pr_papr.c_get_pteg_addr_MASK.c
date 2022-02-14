
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_book3s {int sdr1; } ;
struct kvm_vcpu {int dummy; } ;


 struct kvmppc_vcpu_book3s* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_0, long VAR_1)
{
 struct kvmppc_vcpu_book3s *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 VAR_1 <<= 4;
 VAR_1 &= ((1 << ((VAR_2->sdr1 & 0x1f) + 11)) - 1) << 7 | 0x70;
 VAR_3 = VAR_2->sdr1 & 0xfffffffffffc0000ULL;
 VAR_3 |= VAR_1;

 return VAR_3;
}

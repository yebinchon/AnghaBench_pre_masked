
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct kvmppc_vcpu_book3s {int sdr1; } ;
struct kvmppc_slb {int vsid; scalar_t__ tb; } ;
struct TYPE_2__ {scalar_t__ papr_enabled; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
typedef unsigned long long hva_t ;
typedef int gva_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (char*,int ,int,unsigned long long,int ) ;
 unsigned long long FUNC_1 (int ,unsigned long long) ;
 unsigned long long FUNC_2 (unsigned long long,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned long long) ;
 int FUNC_4 (struct kvmppc_slb*) ;
 unsigned long long FUNC_5 (struct kvmppc_slb*,int ) ;
 int VAR_4 ;
 struct kvmppc_vcpu_book3s* FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static hva_t FUNC_7(struct kvm_vcpu *VAR_5,
    struct kvmppc_slb *VAR_6, gva_t VAR_7,
    bool VAR_8)
{
 struct kvmppc_vcpu_book3s *VAR_9 = FUNC_6(VAR_5);
 u64 VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 hva_t VAR_14;
 u64 VAR_15;

 VAR_12 = ((1 << ((VAR_9->sdr1 & 0x1f) + 11)) - 1);

 VAR_15 = FUNC_5(VAR_6, VAR_7);
 VAR_13 = VAR_6->tb ? VAR_0 : VAR_1;
 VAR_10 = FUNC_2(VAR_15, FUNC_4(VAR_6), VAR_13);
 if (VAR_8)
  VAR_10 = ~VAR_10;
 VAR_10 &= ((1ULL << 39ULL) - 1ULL);
 VAR_10 &= VAR_12;
 VAR_10 <<= 7ULL;

 VAR_11 = VAR_9->sdr1 & 0xfffffffffffc0000ULL;
 VAR_11 |= VAR_10;

 FUNC_0("MMU: page=0x%x sdr1=0x%llx pteg=0x%llx vsid=0x%llx\n",
  VAR_4, VAR_9->sdr1, VAR_11, VAR_6->vsid);



 if (VAR_5->arch.papr_enabled)
  VAR_14 = VAR_11;
 else
  VAR_14 = FUNC_1(VAR_5->kvm, VAR_11 >> VAR_3);

 if (FUNC_3(VAR_14))
  return VAR_14;
 return VAR_14 | (VAR_11 & ~VAR_2);
}

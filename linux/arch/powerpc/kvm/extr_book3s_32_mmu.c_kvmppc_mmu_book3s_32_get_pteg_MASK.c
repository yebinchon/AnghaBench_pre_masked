
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvmppc_vcpu_book3s {int sdr1; } ;
struct kvm_vcpu {int kvm; } ;
typedef int hva_t ;
typedef int gva_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int,int,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int) ;
 struct kvmppc_vcpu_book3s* FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static hva_t FUNC_6(struct kvm_vcpu *VAR_2,
          u32 VAR_3, gva_t VAR_4,
          bool VAR_5)
{
 struct kvmppc_vcpu_book3s *VAR_6 = FUNC_5(VAR_2);
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 hva_t VAR_11;

 VAR_7 = (VAR_4 & 0x0FFFFFFF) >> 12;
 VAR_10 = ((VAR_6->sdr1 & 0x1FF) << 16) | 0xFFC0;

 VAR_8 = ((FUNC_4(VAR_3) ^ VAR_7) << 6);
 if (!VAR_5)
  VAR_8 = ~VAR_8;
 VAR_8 &= VAR_10;

 VAR_9 = (VAR_6->sdr1 & 0xffff0000) | VAR_8;

 FUNC_0("MMU: pc=0x%lx eaddr=0x%lx sdr1=0x%llx pteg=0x%x vsid=0x%x\n",
  FUNC_3(VAR_2), VAR_4, VAR_6->sdr1, VAR_9,
  FUNC_4(VAR_3));

 VAR_11 = FUNC_1(VAR_2->kvm, VAR_9 >> VAR_1);
 if (FUNC_2(VAR_11))
  return VAR_11;
 return VAR_11 | (VAR_9 & ~VAR_0);
}

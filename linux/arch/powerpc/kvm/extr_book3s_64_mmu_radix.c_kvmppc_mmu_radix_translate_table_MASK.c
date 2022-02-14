
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct prtb_entry {int prtb0; } ;
struct kvmppc_pte {int dummy; } ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm {int dummy; } ;
typedef int gva_t ;
typedef int entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*,unsigned long,struct prtb_entry*,int) ;
 int FUNC_2 (struct kvm_vcpu*,int ,struct kvmppc_pte*,unsigned long,int*) ;

int FUNC_3(struct kvm_vcpu *VAR_3, gva_t VAR_4,
         struct kvmppc_pte *VAR_5, u64 VAR_6,
         int VAR_7, u64 *VAR_8)
{
 struct kvm *VAR_9 = VAR_3->kvm;
 int VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;
 struct prtb_entry VAR_14;

 if ((VAR_6 & VAR_2) > 24)
  return -VAR_0;
 VAR_11 = 1ul << ((VAR_6 & VAR_2) + 12);


 if ((VAR_7 * sizeof(VAR_14)) >= VAR_11)
  return -VAR_0;


 VAR_12 = (VAR_6 & VAR_1) + (VAR_7 * sizeof(VAR_14));
 VAR_10 = FUNC_1(VAR_9, VAR_12, &VAR_14, sizeof(VAR_14));
 if (VAR_10)
  return VAR_10;


 VAR_13 = FUNC_0(VAR_14.prtb0);

 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_13, VAR_8);
}

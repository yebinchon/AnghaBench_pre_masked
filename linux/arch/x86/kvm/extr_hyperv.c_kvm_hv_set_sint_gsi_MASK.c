
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct kvm_vcpu_hv_synic {int * sint_to_gsi; } ;
struct kvm {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 struct kvm_vcpu_hv_synic* FUNC_2 (struct kvm*,size_t) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_1, u32 VAR_2, u32 VAR_3, int VAR_4)
{
 struct kvm_vcpu_hv_synic *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_3 >= FUNC_0(VAR_5->sint_to_gsi))
  return -VAR_0;

 FUNC_1(&VAR_5->sint_to_gsi[VAR_3], VAR_4);
 return 0;
}

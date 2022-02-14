
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int kvm; } ;
struct kvm_svm {int avic_physical_id_table_page; } ;


 unsigned int VAR_0 ;
 int * FUNC_0 (int ) ;
 struct kvm_svm* FUNC_1 (int ) ;

__attribute__((used)) static u64 *FUNC_2(struct kvm_vcpu *VAR_1,
           unsigned int VAR_2)
{
 u64 *VAR_3;
 struct kvm_svm *VAR_4 = FUNC_1(VAR_1->kvm);

 if (VAR_2 >= VAR_0)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_4->avic_physical_id_table_page);

 return &VAR_3[VAR_2];
}

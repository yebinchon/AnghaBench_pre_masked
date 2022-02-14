
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int kvm; } ;
struct kvm_svm {int avic_logical_id_table_page; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct kvm_svm* FUNC_3 (int ) ;

__attribute__((used)) static u32 *FUNC_4(struct kvm_vcpu *VAR_0, u32 VAR_1, bool VAR_2)
{
 struct kvm_svm *VAR_3 = FUNC_3(VAR_0->kvm);
 int VAR_4;
 u32 *VAR_5;
 int VAR_6 = FUNC_0(VAR_1);

 if (!VAR_6)
  return ((void*)0);

 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_6) - 1;
  if (VAR_4 > 7)
   return ((void*)0);
 } else {
  int VAR_7 = (VAR_6 & 0xf0) >> 4;
  int VAR_8 = FUNC_1(VAR_6 & 0x0f) - 1;

  if ((VAR_8 < 0) || (VAR_8 > 7) ||
      (VAR_7 >= 0xf))
   return ((void*)0);
  VAR_4 = (VAR_7 << 2) + VAR_8;
 }

 VAR_5 = (u32 *) FUNC_2(VAR_3->avic_logical_id_table_page);

 return &VAR_5[VAR_4];
}

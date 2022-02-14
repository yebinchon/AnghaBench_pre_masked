
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_nested_guest {int shadow_lpid; scalar_t__ shadow_pgtable; struct kvm* l1_host; } ;
struct kvm {int mm; } ;


 int FUNC_0 (struct kvm_nested_guest*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm*,scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct kvm_nested_guest *VAR_0)
{
 struct kvm *VAR_1 = VAR_0->l1_host;

 if (VAR_0->shadow_pgtable) {





  FUNC_3(VAR_1, VAR_0->shadow_pgtable,
       VAR_0->shadow_lpid);
  FUNC_4(VAR_1->mm, VAR_0->shadow_pgtable);
 }
 FUNC_1(VAR_0->shadow_lpid, 0, 0);
 FUNC_2(VAR_0->shadow_lpid);
 FUNC_0(VAR_0);
}

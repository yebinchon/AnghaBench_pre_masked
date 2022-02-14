
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pte_list_desc {int ** sptes; struct pte_list_desc* more; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_rmap_head {unsigned long val; } ;


 int VAR_0 ;
 void* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1, u64 *VAR_2,
   struct kvm_rmap_head *VAR_3)
{
 struct pte_list_desc *VAR_4;
 int VAR_5, VAR_6 = 0;

 if (!VAR_3->val) {
  FUNC_1("pte_list_add: %p %llx 0->1\n", VAR_2, *VAR_2);
  VAR_3->val = (unsigned long)VAR_2;
 } else if (!(VAR_3->val & 1)) {
  FUNC_1("pte_list_add: %p %llx 1->many\n", VAR_2, *VAR_2);
  VAR_4 = FUNC_0(VAR_1);
  VAR_4->sptes[0] = (u64 *)VAR_3->val;
  VAR_4->sptes[1] = VAR_2;
  VAR_3->val = (unsigned long)VAR_4 | 1;
  ++VAR_6;
 } else {
  FUNC_1("pte_list_add: %p %llx many->many\n", VAR_2, *VAR_2);
  VAR_4 = (struct pte_list_desc *)(VAR_3->val & ~1ul);
  while (VAR_4->sptes[VAR_0-1] && VAR_4->more) {
   VAR_4 = VAR_4->more;
   VAR_6 += VAR_0;
  }
  if (VAR_4->sptes[VAR_0-1]) {
   VAR_4->more = FUNC_0(VAR_1);
   VAR_4 = VAR_4->more;
  }
  for (VAR_5 = 0; VAR_4->sptes[VAR_5]; ++VAR_5)
   ++VAR_6;
  VAR_4->sptes[VAR_5] = VAR_2;
 }
 return VAR_6;
}

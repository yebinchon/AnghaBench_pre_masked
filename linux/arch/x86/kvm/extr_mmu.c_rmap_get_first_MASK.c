
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rmap_iterator {size_t pos; struct pte_list_desc* desc; } ;
struct pte_list_desc {int ** sptes; } ;
struct kvm_rmap_head {int val; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u64 *FUNC_2(struct kvm_rmap_head *VAR_0,
      struct rmap_iterator *VAR_1)
{
 u64 *VAR_2;

 if (!VAR_0->val)
  return ((void*)0);

 if (!(VAR_0->val & 1)) {
  VAR_1->desc = ((void*)0);
  VAR_2 = (u64 *)VAR_0->val;
  goto out;
 }

 VAR_1->desc = (struct pte_list_desc *)(VAR_0->val & ~1ul);
 VAR_1->pos = 0;
 VAR_2 = VAR_1->desc->sptes[VAR_1->pos];
out:
 FUNC_0(!FUNC_1(*VAR_2));
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_nested_guest {unsigned int l1_lpid; long shadow_lpid; int radix; int shadow_pgtable; int prev_cpu; int tlb_lock; struct kvm* l1_host; } ;
struct kvm {int mm; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_nested_guest*) ;
 long FUNC_1 () ;
 struct kvm_nested_guest* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

struct kvm_nested_guest *FUNC_7(struct kvm *VAR_1, unsigned int VAR_2)
{
 struct kvm_nested_guest *VAR_3;
 long VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->l1_host = VAR_1;
 VAR_3->l1_lpid = VAR_2;
 FUNC_4(&VAR_3->tlb_lock);
 VAR_3->shadow_pgtable = FUNC_5(VAR_1->mm);
 if (!VAR_3->shadow_pgtable)
  goto out_free;
 VAR_4 = FUNC_1();
 if (VAR_4 < 0)
  goto out_free2;
 VAR_3->shadow_lpid = VAR_4;
 VAR_3->radix = 1;

 FUNC_3(VAR_3->prev_cpu, -1, sizeof(VAR_3->prev_cpu));

 return VAR_3;

 out_free2:
 FUNC_6(VAR_1->mm, VAR_3->shadow_pgtable);
 out_free:
 FUNC_0(VAR_3);
 return ((void*)0);
}

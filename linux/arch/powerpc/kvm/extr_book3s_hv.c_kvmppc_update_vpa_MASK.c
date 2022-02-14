
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vpa {unsigned long next_gpa; unsigned long len; void* pinned_addr; unsigned long gpa; int dirty; void* pinned_end; scalar_t__ update_pending; } ;
struct TYPE_2__ {int vpa_update_lock; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm {int dummy; } ;


 void* FUNC_0 (struct kvm*,unsigned long,unsigned long*) ;
 int FUNC_1 (struct kvm*,void*,unsigned long,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0, struct kvmppc_vpa *VAR_1)
{
 struct kvm *VAR_2 = VAR_0->kvm;
 void *VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5;
 for (;;) {
  VAR_5 = VAR_1->next_gpa;
  FUNC_3(&VAR_0->arch.vpa_update_lock);
  VAR_3 = ((void*)0);
  VAR_4 = 0;
  if (VAR_5)
   VAR_3 = FUNC_0(VAR_2, VAR_5, &VAR_4);
  FUNC_2(&VAR_0->arch.vpa_update_lock);
  if (VAR_5 == VAR_1->next_gpa)
   break;

  if (VAR_3)
   FUNC_1(VAR_2, VAR_3, VAR_5, 0);
 }

 VAR_1->update_pending = 0;
 if (VAR_3 && VAR_4 < VAR_1->len) {





  FUNC_1(VAR_2, VAR_3, VAR_5, 0);
  VAR_3 = ((void*)0);
 }
 if (VAR_1->pinned_addr)
  FUNC_1(VAR_2, VAR_1->pinned_addr, VAR_1->gpa,
     VAR_1->dirty);
 VAR_1->gpa = VAR_5;
 VAR_1->pinned_addr = VAR_3;
 VAR_1->dirty = 0;
 if (VAR_3)
  VAR_1->pinned_end = VAR_3 + VAR_1->len;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_resize_hpt {struct kvm* kvm; } ;
struct TYPE_2__ {int hpt; } ;
struct kvm {TYPE_1__ arch; } ;


 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_resize_hpt*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct kvm_resize_hpt *VAR_0)
{
 struct kvm *VAR_1 = VAR_0->kvm;
 unsigned long VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(&VAR_1->arch.hpt); VAR_2++) {
  VAR_3 = FUNC_1(VAR_0, VAR_2);
  if (VAR_3 != 0)
   return VAR_3;
 }

 return 0;
}

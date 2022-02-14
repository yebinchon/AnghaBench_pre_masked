
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_irqfd {int flags; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*) ;

bool FUNC_2(struct kvm *VAR_1, struct kvm_irqfd *VAR_2)
{
 bool VAR_3 = VAR_2->flags & VAR_0;

 return VAR_3 ? FUNC_1(VAR_1) : FUNC_0(VAR_1);
}

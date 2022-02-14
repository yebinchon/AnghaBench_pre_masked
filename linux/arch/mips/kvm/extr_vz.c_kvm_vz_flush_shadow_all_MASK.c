
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asid_flush_mask; } ;
struct kvm {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm*) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_1)
{
 if (VAR_0) {

  FUNC_1(VAR_1);
 } else {
  FUNC_0(&VAR_1->arch.asid_flush_mask);
  FUNC_1(VAR_1);
 }
}

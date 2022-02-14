
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_timer {scalar_t__ target_expiration; scalar_t__ tscdeadline; } ;
struct kvm_lapic {struct kvm_timer lapic_timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_lapic*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*,int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_lapic *VAR_1)
{
 struct kvm_timer *VAR_2 = &VAR_1->lapic_timer;

 FUNC_2(VAR_1, VAR_0);
 if (FUNC_1(VAR_1))
  VAR_2->tscdeadline = 0;
 if (FUNC_0(VAR_1)) {
  VAR_2->tscdeadline = 0;
  VAR_2->target_expiration = 0;
 }
}

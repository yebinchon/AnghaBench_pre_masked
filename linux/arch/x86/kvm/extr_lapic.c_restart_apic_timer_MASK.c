
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; } ;
struct kvm_lapic {TYPE_1__ lapic_timer; } ;


 int FUNC_0 (struct kvm_lapic*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm_lapic*) ;
 int FUNC_5 (struct kvm_lapic*) ;

__attribute__((used)) static void FUNC_6(struct kvm_lapic *VAR_0)
{
 FUNC_2();

 if (!FUNC_0(VAR_0) && FUNC_1(&VAR_0->lapic_timer.pending))
  goto out;

 if (!FUNC_4(VAR_0))
  FUNC_5(VAR_0);
out:
 FUNC_3();
}

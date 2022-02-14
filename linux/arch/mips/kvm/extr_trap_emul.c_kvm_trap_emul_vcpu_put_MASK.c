
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int flags; int mm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2, int VAR_3)
{
 FUNC_2(VAR_2);

 if (VAR_1->flags & VAR_0) {

  FUNC_0(VAR_1->mm);
  FUNC_3(VAR_3);
  FUNC_1();
 }

 return 0;
}

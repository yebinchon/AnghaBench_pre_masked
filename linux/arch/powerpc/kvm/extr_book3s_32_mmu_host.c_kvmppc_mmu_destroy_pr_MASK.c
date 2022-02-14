
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int * context_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (struct kvm_vcpu*) ;

void FUNC_5(struct kvm_vcpu *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);
 FUNC_2();
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(FUNC_4(VAR_1)->context_id[VAR_2]);
 FUNC_3();
}

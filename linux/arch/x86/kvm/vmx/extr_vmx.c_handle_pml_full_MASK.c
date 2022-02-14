
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_2__ {int idt_vectoring_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_6)
{
 unsigned long VAR_7;

 FUNC_1(VAR_6->vcpu_id);

 VAR_7 = FUNC_2(VAR_0);





 if (!(FUNC_0(VAR_6)->idt_vectoring_info & VAR_4) &&
   VAR_5 &&
   (VAR_7 & VAR_3))
  FUNC_3(VAR_1,
    VAR_2);





 return 1;
}

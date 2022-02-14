
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_lapic {int vcpu; } ;
struct TYPE_2__ {int vec_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct kvm_lapic*,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (struct kvm_lapic*,int) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct kvm_lapic *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 FUNC_7(VAR_1, VAR_2);





 if (VAR_2 == -1)
  return VAR_2;

 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_1);

 if (FUNC_6(VAR_2, FUNC_8(VAR_1->vcpu)->vec_bitmap))
  FUNC_3(VAR_1->vcpu, VAR_2);

 FUNC_4(VAR_1, VAR_2);
 FUNC_5(VAR_0, VAR_1->vcpu);
 return VAR_2;
}

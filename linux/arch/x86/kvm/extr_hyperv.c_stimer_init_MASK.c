
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct kvm_vcpu_hv_stimer {int index; TYPE_1__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu_hv_stimer*,int ,int) ;
 int FUNC_2 (struct kvm_vcpu_hv_stimer*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu_hv_stimer *VAR_3, int VAR_4)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->index = VAR_4;
 FUNC_0(&VAR_3->timer, VAR_0, VAR_1);
 VAR_3->timer.function = VAR_2;
 FUNC_2(VAR_3);
}

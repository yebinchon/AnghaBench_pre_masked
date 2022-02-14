
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int function; } ;
struct TYPE_3__ {int exit_timing_lock; int dec_expires; TYPE_2__ dec_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct kvm_vcpu *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_3->arch.dec_timer, VAR_0, VAR_1);
 VAR_3->arch.dec_timer.function = VAR_2;
 VAR_3->arch.dec_expires = FUNC_0();




 VAR_4 = FUNC_2(VAR_3);
 return VAR_4;
}

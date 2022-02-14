
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tsr; int wdt_lock; int wdt_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;





 if ((VAR_5->arch.tsr & (VAR_2 | VAR_3)) != (VAR_2 | VAR_3))
  FUNC_1(VAR_0, VAR_5);

 FUNC_3(&VAR_5->arch.wdt_lock, VAR_7);
 VAR_6 = FUNC_5(VAR_5);




 if (VAR_6 < VAR_1)
  FUNC_2(&VAR_5->arch.wdt_timer, VAR_4 + VAR_6);
 else
  FUNC_0(&VAR_5->arch.wdt_timer);
 FUNC_4(&VAR_5->arch.wdt_lock, VAR_7);
}

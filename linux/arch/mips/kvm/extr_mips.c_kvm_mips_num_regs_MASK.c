
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int arch; } ;
struct TYPE_4__ {int fpu_id; } ;
struct TYPE_3__ {scalar_t__ (* num_regs ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned long FUNC_4(struct kvm_vcpu *VAR_6)
{
 unsigned long VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (FUNC_1(&VAR_6->arch)) {
  VAR_7 += FUNC_0(VAR_4) + 48;

  if (VAR_1.fpu_id & VAR_0)
   VAR_7 += 16;
 }
 if (FUNC_2(&VAR_6->arch))
  VAR_7 += FUNC_0(VAR_5) + 32;
 VAR_7 += VAR_2->num_regs(VAR_6);

 return VAR_7;
}

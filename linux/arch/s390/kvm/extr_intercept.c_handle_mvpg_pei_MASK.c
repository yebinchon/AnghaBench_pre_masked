
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_3__* run; } ;
struct TYPE_4__ {int * gprs; } ;
struct TYPE_5__ {TYPE_1__ regs; } ;
struct TYPE_6__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int,unsigned long*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,int) ;
 int FUNC_2 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7;

 FUNC_2(VAR_2, &VAR_5, &VAR_6);


 VAR_7 = FUNC_0(VAR_2, VAR_2->run->s.regs.gprs[VAR_6],
         VAR_6, &VAR_3, VAR_0);
 if (VAR_7)
  return FUNC_3(VAR_2, VAR_7);
 VAR_7 = FUNC_1(VAR_2, VAR_3, 0);
 if (VAR_7 != 0)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_2, VAR_2->run->s.regs.gprs[VAR_5],
         VAR_5, &VAR_4, VAR_1);
 if (VAR_7)
  return FUNC_3(VAR_2, VAR_7);
 VAR_7 = FUNC_1(VAR_2, VAR_4, 1);
 if (VAR_7 != 0)
  return VAR_7;

 FUNC_4(VAR_2);

 return 0;
}

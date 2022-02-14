
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int sve_max_vl; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_3)
{
 if (!FUNC_2())
  return -VAR_0;


 if (FUNC_0(!FUNC_1()))
  return -VAR_0;

 VAR_3->arch.sve_max_vl = VAR_2;






 VAR_3->arch.flags |= VAR_1;

 return 0;
}

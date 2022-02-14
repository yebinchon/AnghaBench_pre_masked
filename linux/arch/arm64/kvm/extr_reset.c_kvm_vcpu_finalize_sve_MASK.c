
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int sve_max_vl; int flags; void* sve_state; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ,int ) ;
 unsigned int VAR_5 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_6)
{
 void *VAR_7;
 unsigned int VAR_8;

 VAR_8 = VAR_6->arch.sve_max_vl;






 if (FUNC_1(!FUNC_3(VAR_8) || VAR_8 > VAR_5 ||
      VAR_8 > VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_2(FUNC_0(FUNC_4(VAR_8)), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_6->arch.sve_state = VAR_7;
 VAR_6->arch.flags |= VAR_3;
 return 0;
}

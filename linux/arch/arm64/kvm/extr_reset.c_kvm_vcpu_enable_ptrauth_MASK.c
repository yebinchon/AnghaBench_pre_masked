
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int features; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_4)
{

 if (!FUNC_0())
  return -VAR_0;

 if (!FUNC_1() ||
     !FUNC_2())
  return -VAR_0;




 if (!FUNC_3(VAR_2, VAR_4->arch.features) ||
     !FUNC_3(VAR_3, VAR_4->arch.features))
  return -VAR_0;

 VAR_4->arch.flags |= VAR_1;
 return 0;
}

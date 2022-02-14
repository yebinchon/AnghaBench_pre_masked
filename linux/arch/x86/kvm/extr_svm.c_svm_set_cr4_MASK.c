
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long cr4; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_6__ {unsigned long cr4; } ;
struct TYPE_8__ {TYPE_2__ save; } ;
struct TYPE_7__ {TYPE_4__* vmcb; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 TYPE_3__* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8 = FUNC_0() & VAR_1;
 unsigned long VAR_9 = FUNC_3(VAR_6)->vmcb->save.cr4;

 if (VAR_7 & VAR_4)
  return 1;

 if (VAR_5 && ((VAR_9 ^ VAR_7) & VAR_3))
  FUNC_2(VAR_6, 1);

 VAR_6->arch.cr4 = VAR_7;
 if (!VAR_5)
  VAR_7 |= VAR_2;
 VAR_7 |= VAR_8;
 FUNC_3(VAR_6)->vmcb->save.cr4 = VAR_7;
 FUNC_1(FUNC_3(VAR_6)->vmcb, VAR_0);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int crycbd; scalar_t__ crycb; } ;
struct TYPE_3__ {TYPE_2__ crypto; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct kvm*,int) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_3)
{
 VAR_3->arch.crypto.crycbd = (__u32)(unsigned long) VAR_3->arch.crypto.crycb;


 VAR_3->arch.crypto.crycbd &= ~(VAR_2);


 if (!FUNC_1(VAR_3, 76))
  return;

 if (FUNC_0())
  VAR_3->arch.crypto.crycbd |= VAR_1;
 else
  VAR_3->arch.crypto.crycbd |= VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int lctl; int ictl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_10)
{
 FUNC_1(VAR_10, VAR_1 | VAR_0 |
          VAR_2);
 VAR_10->arch.sie_block->lctl = 0x0000;
 VAR_10->arch.sie_block->ictl &= ~(VAR_3 | VAR_5 | VAR_4);

 if (FUNC_0(VAR_10)) {
  VAR_10->arch.sie_block->lctl |= (VAR_6 | VAR_9 |
            VAR_7 | VAR_8);
  VAR_10->arch.sie_block->ictl |= (VAR_5 | VAR_4);
 }
}

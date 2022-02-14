
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct kvm_vcpu {int guest_debug; } ;
struct TYPE_6__ {unsigned int exception_bitmap; } ;
struct TYPE_4__ {scalar_t__ vm86_active; } ;
struct TYPE_5__ {TYPE_1__ rmode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_3__* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 TYPE_2__* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,unsigned int) ;

void FUNC_4(struct kvm_vcpu *VAR_12)
{
 u32 VAR_13;

 VAR_13 = (1u << VAR_8) | (1u << VAR_9) | (1u << VAR_7) |
      (1u << VAR_2) | (1u << VAR_0);






 if (VAR_11)
  VAR_13 |= (1u << VAR_4);
 if ((VAR_12->guest_debug &
      (VAR_5 | VAR_6)) ==
     (VAR_5 | VAR_6))
  VAR_13 |= 1u << VAR_1;
 if (FUNC_2(VAR_12)->rmode.vm86_active)
  VAR_13 = ~0;
 if (VAR_10)
  VAR_13 &= ~(1u << VAR_8);






 if (FUNC_1(VAR_12))
  VAR_13 |= FUNC_0(VAR_12)->exception_bitmap;

 FUNC_3(VAR_3, VAR_13);
}

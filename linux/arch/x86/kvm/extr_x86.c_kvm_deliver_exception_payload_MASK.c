
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int nr; int has_payload; unsigned long payload; } ;
struct TYPE_4__ {unsigned long dr6; unsigned long cr2; TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;



 unsigned long VAR_0 ;
 unsigned long VAR_1 ;


void FUNC_0(struct kvm_vcpu *VAR_2)
{
 unsigned VAR_3 = VAR_2->arch.exception.nr;
 bool VAR_4 = VAR_2->arch.exception.has_payload;
 unsigned long VAR_5 = VAR_2->arch.exception.payload;

 if (!VAR_4)
  return;

 switch (VAR_3) {
 case 129:





  VAR_2->arch.dr6 &= ~VAR_1;



  VAR_2->arch.dr6 |= VAR_0;
  VAR_2->arch.dr6 |= VAR_5;
  VAR_2->arch.dr6 ^= VAR_5 & VAR_0;
  break;
 case 128:
  VAR_2->arch.cr2 = VAR_5;
  break;
 }

 VAR_2->arch.exception.has_payload = 0;
 VAR_2->arch.exception.payload = 0;
}

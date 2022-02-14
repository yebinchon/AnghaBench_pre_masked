
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmcs12 {unsigned int exception_bitmap; } ;
struct TYPE_5__ {unsigned int nr; int has_payload; unsigned long payload; int error_code; scalar_t__ nested_apf; } ;
struct TYPE_4__ {unsigned long nested_apf_token; } ;
struct TYPE_6__ {unsigned long cr2; unsigned long dr6; TYPE_2__ exception; TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct vmcs12*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_5, unsigned long *VAR_6)
{
 struct vmcs12 *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8 = VAR_5->arch.exception.nr;
 bool VAR_9 = VAR_5->arch.exception.has_payload;
 unsigned long VAR_10 = VAR_5->arch.exception.payload;

 if (VAR_8 == VAR_4) {
  if (VAR_5->arch.exception.nested_apf) {
   *VAR_6 = VAR_5->arch.apf.nested_apf_token;
   return 1;
  }
  if (FUNC_1(VAR_7,
          VAR_5->arch.exception.error_code)) {
   *VAR_6 = VAR_9 ? VAR_10 : VAR_5->arch.cr2;
   return 1;
  }
 } else if (VAR_7->exception_bitmap & (1u << VAR_8)) {
  if (VAR_8 == VAR_0) {
   if (!VAR_9) {
    VAR_10 = VAR_5->arch.dr6;
    VAR_10 &= ~(VAR_2 | VAR_1);
    VAR_10 ^= VAR_3;
   }
   *VAR_6 = VAR_10;
  } else
   *VAR_6 = 0;
  return 1;
 }

 return 0;
}

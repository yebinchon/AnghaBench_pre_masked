
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int pending; int injected; int has_error_code; unsigned int nr; int has_payload; unsigned long payload; scalar_t__ error_code; } ;
struct TYPE_8__ {TYPE_3__ exception; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_2__* kvm; } ;
struct TYPE_5__ {int exception_payload_enabled; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int ,struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_6,
  unsigned VAR_7, bool VAR_8, u32 VAR_9,
         bool VAR_10, unsigned long VAR_11, bool VAR_12)
{
 u32 VAR_13;
 int VAR_14, VAR_15;

 FUNC_5(VAR_4, VAR_6);

 if (!VAR_6->arch.exception.pending && !VAR_6->arch.exception.injected) {
 queue:
  if (VAR_8 && !FUNC_3(VAR_6))
   VAR_8 = 0;
  if (VAR_12) {
   FUNC_0(VAR_6->arch.exception.pending);
   VAR_6->arch.exception.injected = 1;
   if (FUNC_0(VAR_10)) {




    VAR_10 = 0;
    VAR_11 = 0;
   }
  } else {
   VAR_6->arch.exception.pending = 1;
   VAR_6->arch.exception.injected = 0;
  }
  VAR_6->arch.exception.has_error_code = VAR_8;
  VAR_6->arch.exception.nr = VAR_7;
  VAR_6->arch.exception.error_code = VAR_9;
  VAR_6->arch.exception.has_payload = VAR_10;
  VAR_6->arch.exception.payload = VAR_11;
  if (!VAR_6->kvm->arch.exception_payload_enabled ||
      !FUNC_2(VAR_6))
   FUNC_4(VAR_6);
  return;
 }


 VAR_13 = VAR_6->arch.exception.nr;
 if (VAR_13 == VAR_0) {

  FUNC_5(VAR_5, VAR_6);
  return;
 }
 VAR_14 = FUNC_1(VAR_13);
 VAR_15 = FUNC_1(VAR_7);
 if ((VAR_14 == VAR_2 && VAR_15 == VAR_2)
  || (VAR_14 == VAR_3 && VAR_15 != VAR_1)) {





  VAR_6->arch.exception.pending = 1;
  VAR_6->arch.exception.injected = 0;
  VAR_6->arch.exception.has_error_code = 1;
  VAR_6->arch.exception.nr = VAR_0;
  VAR_6->arch.exception.error_code = 0;
  VAR_6->arch.exception.has_payload = 0;
  VAR_6->arch.exception.payload = 0;
 } else



  goto queue;
}

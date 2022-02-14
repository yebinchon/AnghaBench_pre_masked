
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int serror_pending; int serror_has_esr; int serror_esr; } ;
struct kvm_vcpu_events {TYPE_1__ exception; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

int FUNC_3(struct kvm_vcpu *VAR_3,
         struct kvm_vcpu_events *VAR_4)
{
 bool VAR_5 = VAR_4->exception.serror_pending;
 bool VAR_6 = VAR_4->exception.serror_has_esr;

 if (VAR_5 && VAR_6) {
  if (!FUNC_0(VAR_0))
   return -VAR_1;

  if (!((VAR_4->exception.serror_esr) & ~VAR_2))
   FUNC_2(VAR_3, VAR_4->exception.serror_esr);
  else
   return -VAR_1;
 } else if (VAR_5) {
  FUNC_1(VAR_3);
 }

 return 0;
}

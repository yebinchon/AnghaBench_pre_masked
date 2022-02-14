
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int mode; TYPE_1__* run; } ;
struct TYPE_2__ {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (struct kvm_vcpu*) ;

int FUNC_14(struct kvm_vcpu *VAR_5)
{
 int VAR_6;

 FUNC_0(FUNC_4());
 FUNC_3();

 while (1) {
  if (FUNC_10()) {
   FUNC_9();
   FUNC_1();
   FUNC_3();
   continue;
  }

  if (FUNC_11(VAR_4)) {
   FUNC_6(VAR_5, VAR_3);
   VAR_5->run->exit_reason = VAR_2;
   VAR_6 = -VAR_0;
   break;
  }

  VAR_5->mode = VAR_1;
  FUNC_12();

  if (FUNC_5(VAR_5)) {

   FUNC_9();
   FUNC_13(VAR_5);
   VAR_6 = FUNC_7(VAR_5);
   FUNC_3();
   if (VAR_6 > 0)
    continue;
   break;
  }

  if (FUNC_8(VAR_5)) {


   continue;
  }

  FUNC_2();
  return 1;
 }


 FUNC_9();
 return VAR_6;
}

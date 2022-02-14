
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_run {int dummy; } ;
struct TYPE_3__ {unsigned int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;







 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 unsigned int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 int FUNC_9 (struct kvm_vcpu*,int,unsigned int) ;
 int FUNC_10 (struct kvm_vcpu*,unsigned int) ;

int FUNC_11(struct kvm_run *VAR_9, struct kvm_vcpu *VAR_10,
                            unsigned int VAR_11, int *VAR_12)
{
 int VAR_13 = VAR_6;
 int VAR_14 = FUNC_1(VAR_11);
 int VAR_15 = FUNC_2(VAR_11);

 switch (FUNC_0(VAR_11)) {
 case 19:
  switch (FUNC_3(VAR_11)) {
  case 132:
   FUNC_6(VAR_10);
   FUNC_8(VAR_10, VAR_4);
   *VAR_12 = 0;
   break;

  case 134:
   FUNC_4(VAR_10);
   FUNC_8(VAR_10, VAR_2);
   *VAR_12 = 0;
   break;

  case 133:
   FUNC_5(VAR_10);
   FUNC_8(VAR_10, VAR_3);
   *VAR_12 = 0;
   break;

  default:
   VAR_13 = VAR_7;
   break;
  }
  break;

 case 31:
  switch (FUNC_3(VAR_11)) {

  case 131:
   FUNC_9(VAR_10, VAR_15, VAR_10->arch.shared->msr);
   FUNC_8(VAR_10, VAR_0);
   break;

  case 130:
   FUNC_8(VAR_10, VAR_1);
   FUNC_10(VAR_10, FUNC_7(VAR_10, VAR_14));
   break;

  case 129:
   VAR_10->arch.shared->msr = (VAR_10->arch.shared->msr & ~VAR_8)
     | (FUNC_7(VAR_10, VAR_14) & VAR_8);
   FUNC_8(VAR_10, VAR_5);
   break;

  case 128:
   VAR_10->arch.shared->msr = (VAR_10->arch.shared->msr & ~VAR_8)
        | (VAR_11 & VAR_8);
   FUNC_8(VAR_10, VAR_5);
   break;

  default:
   VAR_13 = VAR_7;
  }

  break;

 default:
  VAR_13 = VAR_7;
 }

 return VAR_13;
}

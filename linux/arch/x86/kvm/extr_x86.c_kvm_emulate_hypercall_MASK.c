
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_3__ {int hypercalls; } ;
struct kvm_vcpu {TYPE_1__ stat; int kvm; } ;
struct TYPE_4__ {scalar_t__ (* get_cpl ) (struct kvm_vcpu*) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;





 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct kvm_vcpu*,unsigned long,unsigned long) ;
 int FUNC_4 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_5 (int ,unsigned long,unsigned long,unsigned long,unsigned long,int) ;
 unsigned long FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_8 (struct kvm_vcpu*) ;
 unsigned long FUNC_9 (struct kvm_vcpu*) ;
 unsigned long FUNC_10 (struct kvm_vcpu*) ;
 unsigned long FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

int FUNC_16(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 if (FUNC_2(VAR_3->kvm))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_6(VAR_3);
 VAR_5 = FUNC_8(VAR_3);
 VAR_6 = FUNC_9(VAR_3);
 VAR_7 = FUNC_10(VAR_3);
 VAR_8 = FUNC_11(VAR_3);

 FUNC_15(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 VAR_10 = FUNC_0(VAR_3);
 if (!VAR_10) {
  VAR_4 &= 0xFFFFFFFF;
  VAR_5 &= 0xFFFFFFFF;
  VAR_6 &= 0xFFFFFFFF;
  VAR_7 &= 0xFFFFFFFF;
  VAR_8 &= 0xFFFFFFFF;
 }

 if (VAR_2->get_cpl(VAR_3) != 0) {
  VAR_9 = -VAR_1;
  goto out;
 }

 switch (VAR_4) {
 case 128:
  VAR_9 = 0;
  break;
 case 131:
  FUNC_4(VAR_3->kvm, VAR_5, VAR_6);
  FUNC_12(VAR_3->kvm, VAR_6);
  VAR_9 = 0;
  break;





 case 129:
  VAR_9 = FUNC_5(VAR_3->kvm, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
  break;
 case 130:
  FUNC_12(VAR_3->kvm, VAR_5);
  VAR_9 = 0;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }
out:
 if (!VAR_10)
  VAR_9 = (u32)VAR_9;
 FUNC_7(VAR_3, VAR_9);

 ++VAR_3->stat.hypercalls;
 return FUNC_13(VAR_3);
}

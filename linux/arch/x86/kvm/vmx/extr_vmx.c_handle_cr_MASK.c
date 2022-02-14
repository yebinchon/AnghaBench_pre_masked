
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct kvm_vcpu {TYPE_1__* run; } ;
struct TYPE_2__ {scalar_t__ exit_reason; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 void* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_9 (struct kvm_vcpu*) ;
 unsigned long FUNC_10 (struct kvm_vcpu*,int) ;
 int FUNC_11 (struct kvm_vcpu*,int,unsigned long) ;
 int FUNC_12 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_13 (struct kvm_vcpu*,void*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (int,unsigned long) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (struct kvm_vcpu*,char*,int,int) ;
 unsigned long FUNC_19 (int ) ;
 int FUNC_20 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_21(struct kvm_vcpu *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_6 = FUNC_19(VAR_0);
 VAR_8 = VAR_6 & 15;
 VAR_9 = (VAR_6 >> 8) & 15;
 switch ((VAR_6 >> 4) & 3) {
 case 0:
  VAR_7 = FUNC_10(VAR_5, VAR_9);
  FUNC_17(VAR_8, VAR_7);
  switch (VAR_8) {
  case 0:
   VAR_10 = FUNC_2(VAR_5, VAR_7);
   return FUNC_4(VAR_5, VAR_10);
  case 3:
   FUNC_1(VAR_4);
   VAR_10 = FUNC_12(VAR_5, VAR_7);
   return FUNC_4(VAR_5, VAR_10);
  case 4:
   VAR_10 = FUNC_3(VAR_5, VAR_7);
   return FUNC_4(VAR_5, VAR_10);
  case 8: {
    u8 VAR_12 = FUNC_5(VAR_5);
    u8 VAR_13 = (u8)VAR_7;
    VAR_10 = FUNC_13(VAR_5, VAR_13);
    VAR_11 = FUNC_4(VAR_5, VAR_10);
    if (FUNC_15(VAR_5))
     return VAR_11;
    if (VAR_12 <= VAR_13)
     return VAR_11;





    VAR_5->run->exit_reason = VAR_1;
    return 0;
   }
  }
  break;
 case 2:
  FUNC_0(1, "Guest should always own CR0.TS");
  FUNC_20(VAR_5, FUNC_8(VAR_5, ~VAR_3));
  FUNC_17(0, FUNC_7(VAR_5));
  return FUNC_14(VAR_5);
 case 1:
  switch (VAR_8) {
  case 3:
   FUNC_1(VAR_4);
   VAR_7 = FUNC_9(VAR_5);
   FUNC_11(VAR_5, VAR_9, VAR_7);
   FUNC_16(VAR_8, VAR_7);
   return FUNC_14(VAR_5);
  case 8:
   VAR_7 = FUNC_5(VAR_5);
   FUNC_11(VAR_5, VAR_9, VAR_7);
   FUNC_16(VAR_8, VAR_7);
   return FUNC_14(VAR_5);
  }
  break;
 case 3:
  VAR_7 = (VAR_6 >> VAR_2) & 0x0f;
  FUNC_17(0, (FUNC_7(VAR_5) & ~0xful) | VAR_7);
  FUNC_6(VAR_5, VAR_7);

  return FUNC_14(VAR_5);
 default:
  break;
 }
 VAR_5->run->exit_reason = 0;
 FUNC_18(VAR_5, "unhandled control register: op %d cr %d\n",
        (int)(VAR_6 >> 4) & 3, VAR_8);
 return 0;
}

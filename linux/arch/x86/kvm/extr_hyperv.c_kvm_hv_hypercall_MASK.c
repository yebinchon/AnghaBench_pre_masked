
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u64 ;
struct TYPE_12__ {int complete_userspace_io; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_4__* run; } ;
struct TYPE_14__ {scalar_t__ (* get_cpl ) (struct kvm_vcpu*) ;} ;
struct TYPE_13__ {int active; } ;
struct TYPE_8__ {int input; int* params; } ;
struct TYPE_9__ {TYPE_1__ hcall; } ;
struct TYPE_10__ {TYPE_2__ u; int type; } ;
struct TYPE_11__ {TYPE_3__ hyperv; int exit_reason; } ;
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
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int,int,int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int VAR_10 ;
 int FUNC_4 (struct kvm_vcpu*,int,int,int,int) ;
 int FUNC_5 (struct kvm_vcpu*,int,int) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*,int) ;
 TYPE_7__* VAR_11 ;
 scalar_t__ FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (int,int,int,int,int,int) ;
 int FUNC_17 (int) ;
 TYPE_6__* FUNC_18 (struct kvm_vcpu*) ;

int FUNC_19(struct kvm_vcpu *VAR_12)
{
 u64 VAR_13, VAR_14, VAR_15, VAR_16 = VAR_6;
 uint16_t VAR_17, VAR_18, VAR_19;
 bool VAR_20, VAR_21;





 if (VAR_11->get_cpl(VAR_12) != 0 || !FUNC_1(VAR_12)) {
  FUNC_6(VAR_12, VAR_9);
  return 1;
 }
 {
  VAR_13 = ((u64)FUNC_12(VAR_12) << 32) |
   (FUNC_8(VAR_12) & 0xffffffff);
  VAR_14 = ((u64)FUNC_9(VAR_12) << 32) |
   (FUNC_10(VAR_12) & 0xffffffff);
  VAR_15 = ((u64)FUNC_11(VAR_12) << 32) |
   (FUNC_13(VAR_12) & 0xffffffff);
 }

 VAR_17 = VAR_13 & 0xffff;
 VAR_20 = !!(VAR_13 & VAR_0);
 VAR_19 = (VAR_13 >> VAR_1) & 0xfff;
 VAR_18 = (VAR_13 >> VAR_2) & 0xfff;
 VAR_21 = !!(VAR_19 || VAR_18);

 FUNC_16(VAR_17, VAR_20, VAR_19, VAR_18, VAR_14, VAR_15);

 switch (VAR_17) {
 case 132:
  if (FUNC_17(VAR_21)) {
   VAR_16 = VAR_4;
   break;
  }
  FUNC_14(VAR_12, 1);
  break;
 case 128:
  if (FUNC_17(VAR_21)) {
   VAR_16 = VAR_4;
   break;
  }
  VAR_16 = FUNC_5(VAR_12, VAR_20, VAR_14);
  if (VAR_16 != VAR_5)
   break;

 case 131:

  if (FUNC_17(VAR_21 || !FUNC_18(VAR_12)->active)) {
   VAR_16 = VAR_4;
   break;
  }
  VAR_12->run->exit_reason = VAR_7;
  VAR_12->run->hyperv.type = VAR_8;
  VAR_12->run->hyperv.u.hcall.input = VAR_13;
  VAR_12->run->hyperv.u.hcall.params[0] = VAR_14;
  VAR_12->run->hyperv.u.hcall.params[1] = VAR_15;
  VAR_12->arch.complete_userspace_io =
    VAR_10;
  return 0;
 case 136:
  if (FUNC_17(VAR_20 || !VAR_19 || VAR_18)) {
   VAR_16 = VAR_4;
   break;
  }
  VAR_16 = FUNC_2(VAR_12, VAR_14, VAR_19, 0);
  break;
 case 134:
  if (FUNC_17(VAR_20 || VAR_21)) {
   VAR_16 = VAR_4;
   break;
  }
  VAR_16 = FUNC_2(VAR_12, VAR_14, VAR_19, 0);
  break;
 case 135:
  if (FUNC_17(VAR_20 || !VAR_19 || VAR_18)) {
   VAR_16 = VAR_4;
   break;
  }
  VAR_16 = FUNC_2(VAR_12, VAR_14, VAR_19, 1);
  break;
 case 133:
  if (FUNC_17(VAR_20 || VAR_21)) {
   VAR_16 = VAR_4;
   break;
  }
  VAR_16 = FUNC_2(VAR_12, VAR_14, VAR_19, 1);
  break;
 case 130:
  if (FUNC_17(VAR_21)) {
   VAR_16 = VAR_4;
   break;
  }
  VAR_16 = FUNC_4(VAR_12, VAR_14, VAR_15, 0, VAR_20);
  break;
 case 129:
  if (FUNC_17(VAR_20 || VAR_21)) {
   VAR_16 = VAR_4;
   break;
  }
  VAR_16 = FUNC_4(VAR_12, VAR_14, VAR_15, 1, 0);
  break;
 default:
  VAR_16 = VAR_3;
  break;
 }

 return FUNC_3(VAR_12, VAR_16);
}

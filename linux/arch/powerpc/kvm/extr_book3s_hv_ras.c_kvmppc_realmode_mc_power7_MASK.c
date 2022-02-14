
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct machine_check_event {scalar_t__ version; int disposition; } ;
struct TYPE_5__ {unsigned long msr; unsigned long dsisr; } ;
struct TYPE_8__ {struct machine_check_event mce_evt; TYPE_1__ shregs; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_3__* kvm; } ;
typedef int mce_evt ;
struct TYPE_6__ {int radix; } ;
struct TYPE_7__ {TYPE_2__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;




 unsigned long VAR_10 ;
 scalar_t__ FUNC_0 (struct machine_check_event*,int ) ;
 int FUNC_1 (struct machine_check_event*,int ,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_11)
{
 unsigned long VAR_12 = VAR_11->arch.shregs.msr;
 struct machine_check_event VAR_13;
 long VAR_14 = 1;

 if (VAR_12 & VAR_10) {

  unsigned long VAR_15 = VAR_11->arch.shregs.dsisr;

  if (VAR_15 & (VAR_3 | VAR_1 |
        VAR_2 | VAR_0)) {

   FUNC_2(VAR_11);
   VAR_15 &= ~(VAR_3 | VAR_1 |
       VAR_2 | VAR_0);
  }
  if (VAR_15 & VAR_4) {
   FUNC_3(VAR_11->kvm->arch.radix);
   VAR_15 &= ~VAR_4;
  }

  if (VAR_15 & 0xffffffffUL)
   VAR_14 = 0;
 }

 switch ((VAR_12 >> VAR_9) & VAR_8) {
 case 0:
  break;
 case 130:
 case 131:
 case 129:
  FUNC_2(VAR_11);
  break;
 case 128:
  FUNC_3(VAR_11->kvm->arch.radix);
  break;
 default:
  VAR_14 = 0;
 }







 if (FUNC_0(&VAR_13, VAR_6)) {
  if (VAR_14 && VAR_13.version == VAR_7)
   VAR_13.disposition = VAR_5;
 } else {
  FUNC_1(&VAR_13, 0, sizeof(VAR_13));
 }

 VAR_11->arch.mce_evt = VAR_13;
}

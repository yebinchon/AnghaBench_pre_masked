
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int timer_mode_mask; int timer; int period; int pending; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; int divide_count; TYPE_1__* vcpu; } ;
struct TYPE_3__ {int kvm; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*,int) ;
 int FUNC_2 (struct kvm_lapic*,int,int) ;
 int FUNC_3 (struct kvm_lapic*) ;
 int FUNC_4 (struct kvm_lapic*,int) ;
 int FUNC_5 (struct kvm_lapic*,int) ;
 int FUNC_6 (struct kvm_lapic*) ;
 int FUNC_7 (struct kvm_lapic*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct kvm_lapic*,int) ;
 int FUNC_11 (struct kvm_lapic*,int) ;
 int FUNC_12 (struct kvm_lapic*) ;
 int FUNC_13 (struct kvm_lapic*,int) ;
 int FUNC_14 (struct kvm_lapic*,int const,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct kvm_lapic*,int) ;
 int FUNC_17 (struct kvm_lapic*) ;
 int FUNC_18 (struct kvm_lapic*) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (struct kvm_lapic*) ;
 int FUNC_21 (struct kvm_lapic*,int ) ;

int FUNC_22(struct kvm_lapic *VAR_8, u32 VAR_9, u32 VAR_10)
{
 int VAR_11 = 0;

 FUNC_19(VAR_9, VAR_10);

 switch (VAR_9) {
 case 140:
  if (!FUNC_7(VAR_8))
   FUNC_11(VAR_8, VAR_10 >> 24);
  else
   VAR_11 = 1;
  break;

 case 130:
  FUNC_16(VAR_8, 1);
  FUNC_5(VAR_8, VAR_10 & 0xff);
  break;

 case 144:
  FUNC_3(VAR_8);
  break;

 case 139:
  if (!FUNC_7(VAR_8))
   FUNC_10(VAR_8, VAR_10 & VAR_0);
  else
   VAR_11 = 1;
  break;

 case 145:
  if (!FUNC_7(VAR_8)) {
   FUNC_14(VAR_8, 145, VAR_10 | 0x0FFFFFFF);
   FUNC_15(VAR_8->vcpu->kvm);
  } else
   VAR_11 = 1;
  break;

 case 131: {
  u32 VAR_12 = 0x3ff;
  if (FUNC_13(VAR_8, VAR_1) & VAR_2)
   VAR_12 |= VAR_5;
  FUNC_4(VAR_8, VAR_10 & VAR_12);
  if (!(VAR_10 & VAR_4)) {
   int VAR_13;
   u32 VAR_14;

   for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
    VAR_14 = FUNC_13(VAR_8,
             134 + 0x10 * VAR_13);
    FUNC_14(VAR_8, 134 + 0x10 * VAR_13,
          VAR_14 | VAR_3);
   }
   FUNC_6(VAR_8);
   FUNC_8(&VAR_8->lapic_timer.pending, 0);

  }
  break;
 }
 case 142:

  VAR_10 &= ~(1 << 12);
  FUNC_2(VAR_8, VAR_10, FUNC_13(VAR_8, 141));
  FUNC_14(VAR_8, 142, VAR_10);
  break;

 case 141:
  if (!FUNC_7(VAR_8))
   VAR_10 &= 0xff000000;
  FUNC_14(VAR_8, 141, VAR_10);
  break;

 case 138:
  FUNC_1(VAR_8, VAR_10);

 case 133:
 case 135:
 case 137:
 case 136:

  if (!FUNC_12(VAR_8))
   VAR_10 |= VAR_3;

  VAR_10 &= VAR_7[(VAR_9 - 134) >> 4];
  FUNC_14(VAR_8, VAR_9, VAR_10);

  break;

 case 134:
  if (!FUNC_12(VAR_8))
   VAR_10 |= VAR_3;
  VAR_10 &= (VAR_7[0] | VAR_8->lapic_timer.timer_mode_mask);
  FUNC_14(VAR_8, 134, VAR_10);
  FUNC_6(VAR_8);
  break;

 case 128:
  if (FUNC_0(VAR_8))
   break;

  FUNC_9(&VAR_8->lapic_timer.timer);
  FUNC_14(VAR_8, 128, VAR_10);
  FUNC_18(VAR_8);
  break;

 case 129: {
  uint32_t VAR_15 = VAR_8->divide_count;

  FUNC_14(VAR_8, 129, VAR_10);
  FUNC_20(VAR_8);
  if (VAR_8->divide_count != VAR_15 &&
    VAR_8->lapic_timer.period) {
   FUNC_9(&VAR_8->lapic_timer.timer);
   FUNC_21(VAR_8, VAR_15);
   FUNC_17(VAR_8);
  }
  break;
 }
 case 143:
  if (FUNC_7(VAR_8) && VAR_10 != 0)
   VAR_11 = 1;
  break;

 case 132:
  if (FUNC_7(VAR_8)) {
   FUNC_22(VAR_8, 142, 0x40000 | (VAR_10 & 0xff));
  } else
   VAR_11 = 1;
  break;
 default:
  VAR_11 = 1;
  break;
 }

 return VAR_11;
}

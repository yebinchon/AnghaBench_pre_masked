
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_pic_state {int dummy; } ;
struct kvm_pic {int * pics; } ;
struct TYPE_3__ {int ioapic; int pic; } ;
struct kvm_irqchip {int chip_id; TYPE_1__ chip; } ;
struct TYPE_4__ {struct kvm_pic* vpic; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;



 int FUNC_0 (struct kvm*,int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_1, struct kvm_irqchip *VAR_2)
{
 struct kvm_pic *VAR_3 = VAR_1->arch.vpic;
 int VAR_4;

 VAR_4 = 0;
 switch (VAR_2->chip_id) {
 case 129:
  FUNC_1(&VAR_2->chip.pic, &VAR_3->pics[0],
   sizeof(struct kvm_pic_state));
  break;
 case 128:
  FUNC_1(&VAR_2->chip.pic, &VAR_3->pics[1],
   sizeof(struct kvm_pic_state));
  break;
 case 130:
  FUNC_0(VAR_1, &VAR_2->chip.ioapic);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}

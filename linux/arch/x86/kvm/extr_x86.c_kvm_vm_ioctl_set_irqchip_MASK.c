
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_pic_state {int dummy; } ;
struct kvm_pic {int lock; int * pics; } ;
struct TYPE_4__ {int ioapic; int pic; } ;
struct kvm_irqchip {int chip_id; TYPE_2__ chip; } ;
struct TYPE_3__ {struct kvm_pic* vpic; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;



 int FUNC_0 (struct kvm_pic*) ;
 int FUNC_1 (struct kvm*,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_1, struct kvm_irqchip *VAR_2)
{
 struct kvm_pic *VAR_3 = VAR_1->arch.vpic;
 int VAR_4;

 VAR_4 = 0;
 switch (VAR_2->chip_id) {
 case 129:
  FUNC_3(&VAR_3->lock);
  FUNC_2(&VAR_3->pics[0], &VAR_2->chip.pic,
   sizeof(struct kvm_pic_state));
  FUNC_4(&VAR_3->lock);
  break;
 case 128:
  FUNC_3(&VAR_3->lock);
  FUNC_2(&VAR_3->pics[1], &VAR_2->chip.pic,
   sizeof(struct kvm_pic_state));
  FUNC_4(&VAR_3->lock);
  break;
 case 130:
  FUNC_1(VAR_1, &VAR_2->chip.ioapic);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }
 FUNC_0(VAR_3);
 return VAR_4;
}

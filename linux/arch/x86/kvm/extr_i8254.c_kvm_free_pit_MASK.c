
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timer; } ;
struct kvm_pit {int irq_source_id; int worker; TYPE_1__ pit_state; int speaker_dev; int dev; } ;
struct TYPE_4__ {struct kvm_pit* vpit; } ;
struct kvm {int slots_lock; TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_pit*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm*,int ) ;
 int FUNC_4 (struct kvm*,int ,int *) ;
 int FUNC_5 (struct kvm_pit*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct kvm *VAR_1)
{
 struct kvm_pit *VAR_2 = VAR_1->arch.vpit;

 if (VAR_2) {
  FUNC_6(&VAR_1->slots_lock);
  FUNC_4(VAR_1, VAR_0, &VAR_2->dev);
  FUNC_4(VAR_1, VAR_0, &VAR_2->speaker_dev);
  FUNC_7(&VAR_1->slots_lock);
  FUNC_5(VAR_2, 0);
  FUNC_0(&VAR_2->pit_state.timer);
  FUNC_2(VAR_2->worker);
  FUNC_3(VAR_1, VAR_2->irq_source_id);
  FUNC_1(VAR_2);
 }
}

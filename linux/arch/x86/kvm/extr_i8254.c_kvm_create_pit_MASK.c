
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pid {int dummy; } ;
struct TYPE_5__ {int func; } ;
struct TYPE_4__ {int irq_acked; scalar_t__ gsi; } ;
struct TYPE_6__ {int function; } ;
struct kvm_kpit_state {TYPE_1__ irq_ack_notifier; TYPE_3__ timer; int lock; } ;
struct kvm_pit {scalar_t__ irq_source_id; int worker; int dev; int speaker_dev; TYPE_2__ mask_notifier; struct kvm_kpit_state pit_state; struct kvm* kvm; int expired; } ;
struct kvm {int slots_lock; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pid* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (struct kvm_pit*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct kvm*,scalar_t__) ;
 int FUNC_8 (struct kvm*,int ,int ,int,int *) ;
 int FUNC_9 (struct kvm*,int ,int *) ;
 int FUNC_10 (int *,int *) ;
 int VAR_9 ;
 int FUNC_11 (struct kvm_pit*) ;
 int FUNC_12 (struct kvm_pit*,int) ;
 scalar_t__ FUNC_13 (struct kvm*) ;
 struct kvm_pit* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct pid*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_19 (struct pid*) ;
 int VAR_14 ;
 int FUNC_20 (int ) ;

struct kvm_pit *FUNC_21(struct kvm *VAR_15, u32 VAR_16)
{
 struct kvm_pit *VAR_17;
 struct kvm_kpit_state *VAR_18;
 struct pid *VAR_19;
 pid_t VAR_20;
 int VAR_21;

 VAR_17 = FUNC_14(sizeof(struct kvm_pit), VAR_1);
 if (!VAR_17)
  return ((void*)0);

 VAR_17->irq_source_id = FUNC_13(VAR_15);
 if (VAR_17->irq_source_id < 0)
  goto fail_request;

 FUNC_15(&VAR_17->pit_state.lock);

 VAR_19 = FUNC_1(FUNC_20(VAR_8));
 VAR_20 = FUNC_18(VAR_19);
 FUNC_19(VAR_19);

 VAR_17->worker = FUNC_4(0, "kvm-pit/%d", VAR_20);
 if (FUNC_0(VAR_17->worker))
  goto fail_kthread;

 FUNC_6(&VAR_17->expired, VAR_11);

 VAR_17->kvm = VAR_15;

 VAR_18 = &VAR_17->pit_state;
 FUNC_2(&VAR_18->timer, VAR_0, VAR_2);
 VAR_18->timer.function = VAR_13;

 VAR_18->irq_ack_notifier.gsi = 0;
 VAR_18->irq_ack_notifier.irq_acked = VAR_9;
 VAR_17->mask_notifier.func = VAR_12;

 FUNC_11(VAR_17);

 FUNC_12(VAR_17, 1);

 FUNC_16(&VAR_15->slots_lock);
 FUNC_10(&VAR_17->dev, &VAR_10);
 VAR_21 = FUNC_8(VAR_15, VAR_3, VAR_4,
          VAR_5, &VAR_17->dev);
 if (VAR_21 < 0)
  goto fail_register_pit;

 if (VAR_16 & VAR_6) {
  FUNC_10(&VAR_17->speaker_dev, &VAR_14);
  VAR_21 = FUNC_8(VAR_15, VAR_3,
           VAR_7, 4,
           &VAR_17->speaker_dev);
  if (VAR_21 < 0)
   goto fail_register_speaker;
 }
 FUNC_17(&VAR_15->slots_lock);

 return VAR_17;

fail_register_speaker:
 FUNC_9(VAR_15, VAR_3, &VAR_17->dev);
fail_register_pit:
 FUNC_17(&VAR_15->slots_lock);
 FUNC_12(VAR_17, 0);
 FUNC_5(VAR_17->worker);
fail_kthread:
 FUNC_7(VAR_15, VAR_17->irq_source_id);
fail_request:
 FUNC_3(VAR_17);
 return ((void*)0);
}

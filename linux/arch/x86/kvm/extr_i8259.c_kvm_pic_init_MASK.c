
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_pic {int dev_master; int dev_slave; int dev_eclr; TYPE_1__* pics; struct kvm* kvm; int lock; } ;
struct TYPE_4__ {struct kvm_pic* vpic; } ;
struct kvm {int slots_lock; TYPE_2__ arch; } ;
struct TYPE_3__ {int elcr_mask; struct kvm_pic* pics_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_pic*) ;
 int FUNC_1 (struct kvm*,int ,int,int,int *) ;
 int FUNC_2 (struct kvm*,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 struct kvm_pic* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;

int FUNC_8(struct kvm *VAR_6)
{
 struct kvm_pic *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(struct kvm_pic), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 FUNC_7(&VAR_7->lock);
 VAR_7->kvm = VAR_6;
 VAR_7->pics[0].elcr_mask = 0xf8;
 VAR_7->pics[1].elcr_mask = 0xde;
 VAR_7->pics[0].pics_state = VAR_7;
 VAR_7->pics[1].pics_state = VAR_7;




 FUNC_3(&VAR_7->dev_master, &VAR_4);
 FUNC_3(&VAR_7->dev_slave, &VAR_5);
 FUNC_3(&VAR_7->dev_eclr, &VAR_3);
 FUNC_5(&VAR_6->slots_lock);
 VAR_8 = FUNC_1(VAR_6, VAR_2, 0x20, 2,
          &VAR_7->dev_master);
 if (VAR_8 < 0)
  goto fail_unlock;

 VAR_8 = FUNC_1(VAR_6, VAR_2, 0xa0, 2, &VAR_7->dev_slave);
 if (VAR_8 < 0)
  goto fail_unreg_2;

 VAR_8 = FUNC_1(VAR_6, VAR_2, 0x4d0, 2, &VAR_7->dev_eclr);
 if (VAR_8 < 0)
  goto fail_unreg_1;

 FUNC_6(&VAR_6->slots_lock);

 VAR_6->arch.vpic = VAR_7;

 return 0;

fail_unreg_1:
 FUNC_2(VAR_6, VAR_2, &VAR_7->dev_slave);

fail_unreg_2:
 FUNC_2(VAR_6, VAR_2, &VAR_7->dev_master);

fail_unlock:
 FUNC_6(&VAR_6->slots_lock);

 FUNC_0(VAR_7);

 return VAR_8;
}

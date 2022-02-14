
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_12__ {int function; } ;
struct TYPE_10__ {int ref_lock; scalar_t__ mask; } ;
struct kvm_s390_gisa_interrupt {int expires; TYPE_4__* origin; TYPE_5__ timer; TYPE_3__ alert; } ;
struct kvm_s390_gisa {int dummy; } ;
struct TYPE_9__ {TYPE_1__* sie_page2; struct kvm_s390_gisa_interrupt gisa_int; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_13__ {int aiv; } ;
struct TYPE_11__ {scalar_t__ next_alert; } ;
struct TYPE_8__ {TYPE_4__ gisa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,int,char*,TYPE_4__*) ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm *VAR_4)
{
 struct kvm_s390_gisa_interrupt *VAR_5 = &VAR_4->arch.gisa_int;

 if (!VAR_2.aiv)
  return;
 VAR_5->origin = &VAR_4->arch.sie_page2->gisa;
 VAR_5->alert.mask = 0;
 FUNC_3(&VAR_5->alert.ref_lock);
 VAR_5->expires = 50 * 1000;
 FUNC_1(&VAR_5->timer, VAR_0, VAR_1);
 VAR_5->timer.function = VAR_3;
 FUNC_2(VAR_5->origin, 0, sizeof(struct kvm_s390_gisa));
 VAR_5->origin->next_alert = (u32)(u64)VAR_5->origin;
 FUNC_0(VAR_4, 3, "gisa 0x%pK initialized", VAR_5->origin);
}

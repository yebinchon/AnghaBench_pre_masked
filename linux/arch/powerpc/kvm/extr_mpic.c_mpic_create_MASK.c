
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct openpic {int model; int brr1; int nb_irqs; int mpic_mode_mask; int flags; int * fsl; int lock; struct kvm_device* dev; TYPE_2__* kvm; } ;
struct kvm_device {TYPE_2__* kvm; struct openpic* private; } ;
struct TYPE_3__ {struct openpic* mpic; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct openpic*,int *) ;
 int FUNC_1 (struct openpic*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct openpic*) ;
 struct openpic* FUNC_3 (int,int ) ;
 int FUNC_4 (struct openpic*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct openpic*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct kvm_device *VAR_14, u32 VAR_15)
{
 struct openpic *VAR_16;
 int VAR_17;


 if (VAR_14->kvm->arch.mpic)
  return -VAR_0;

 VAR_16 = FUNC_3(sizeof(struct openpic), VAR_5);
 if (!VAR_16)
  return -VAR_2;

 VAR_14->private = VAR_16;
 VAR_16->kvm = VAR_14->kvm;
 VAR_16->dev = VAR_14;
 VAR_16->model = VAR_15;
 FUNC_7(&VAR_16->lock);

 FUNC_0(VAR_16, &VAR_11);
 FUNC_0(VAR_16, &VAR_13);
 FUNC_0(VAR_16, &VAR_12);
 FUNC_0(VAR_16, &VAR_10);

 switch (VAR_16->model) {
 case 129:
  VAR_16->fsl = &VAR_8;
  VAR_16->brr1 = 0x00400200;
  VAR_16->flags |= VAR_6;
  VAR_16->nb_irqs = 80;
  VAR_16->mpic_mode_mask = VAR_3;

  FUNC_1(VAR_16);

  break;

 case 128:
  VAR_16->fsl = &VAR_9;
  VAR_16->brr1 = 0x00400402;
  VAR_16->flags |= VAR_7;
  VAR_16->nb_irqs = 196;
  VAR_16->mpic_mode_mask = VAR_4;

  FUNC_1(VAR_16);

  break;

 default:
  VAR_17 = -VAR_1;
  goto err;
 }

 VAR_17 = FUNC_4(VAR_16);
 if (VAR_17)
  goto err;

 FUNC_5(VAR_16);

 FUNC_6();
 VAR_14->kvm->arch.mpic = VAR_16;

 return 0;

err:
 FUNC_2(VAR_16);
 return VAR_17;
}

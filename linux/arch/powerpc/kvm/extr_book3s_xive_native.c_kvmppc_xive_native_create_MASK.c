
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvmppc_xive {scalar_t__ vp_base; int * ops; int single_escalation; int lock; int mapping_lock; struct kvm* kvm; struct kvm_device* dev; } ;
struct kvm_device {struct kvmppc_xive* private; struct kvm* kvm; } ;
struct TYPE_2__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct kvmppc_xive* FUNC_0 (struct kvm*,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct kvm_device *VAR_6, u32 VAR_7)
{
 struct kvmppc_xive *VAR_8;
 struct kvm *VAR_9 = VAR_6->kvm;
 int VAR_10 = 0;

 FUNC_2("Creating xive native device\n");

 if (VAR_9->arch.xive)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_9, VAR_7);
 if (!VAR_8)
  return -VAR_1;

 VAR_6->private = VAR_8;
 VAR_8->dev = VAR_6;
 VAR_8->kvm = VAR_9;
 VAR_9->arch.xive = VAR_8;
 FUNC_1(&VAR_8->mapping_lock);
 FUNC_1(&VAR_8->lock);






 VAR_8->vp_base = FUNC_3(VAR_3);
 FUNC_2("VP_Base=%x\n", VAR_8->vp_base);

 if (VAR_8->vp_base == VAR_4)
  VAR_10 = -VAR_2;

 VAR_8->single_escalation = FUNC_4();
 VAR_8->ops = &VAR_5;

 if (VAR_10)
  return VAR_10;

 return 0;
}

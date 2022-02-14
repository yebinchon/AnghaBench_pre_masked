
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvmppc_xive {scalar_t__ q_order; scalar_t__ vp_base; int single_escalation; scalar_t__ q_page_order; int lock; struct kvm* kvm; struct kvm_device* dev; } ;
struct kvm_device {struct kvmppc_xive* private; struct kvm* kvm; } ;
struct TYPE_2__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct kvmppc_xive* FUNC_0 (struct kvm*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct kvm_device *VAR_5, u32 VAR_6)
{
 struct kvmppc_xive *VAR_7;
 struct kvm *VAR_8 = VAR_5->kvm;
 int VAR_9 = 0;

 FUNC_2("Creating xive for partition\n");

 VAR_7 = FUNC_0(VAR_8, VAR_6);
 if (!VAR_7)
  return -VAR_1;

 VAR_5->private = VAR_7;
 VAR_7->dev = VAR_5;
 VAR_7->kvm = VAR_8;
 FUNC_1(&VAR_7->lock);


 if (VAR_8->arch.xive)
  VAR_9 = -VAR_0;
 else
  VAR_8->arch.xive = VAR_7;


 VAR_7->q_order = FUNC_4();
 if (VAR_7->q_order < VAR_3)
  VAR_7->q_page_order = 0;
 else
  VAR_7->q_page_order = VAR_7->q_order - VAR_3;


 VAR_7->vp_base = FUNC_3(VAR_2);
 FUNC_2("VP_Base=%x\n", VAR_7->vp_base);

 if (VAR_7->vp_base == VAR_4)
  VAR_9 = -VAR_1;

 VAR_7->single_escalation = FUNC_5();

 if (VAR_9)
  return VAR_9;

 return 0;
}

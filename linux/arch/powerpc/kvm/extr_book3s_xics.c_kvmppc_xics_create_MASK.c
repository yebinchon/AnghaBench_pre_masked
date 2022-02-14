
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvmppc_xics {int real_mode_dbg; int real_mode; struct kvm* kvm; struct kvm_device* dev; } ;
struct kvm_device {struct kvmppc_xics* private; struct kvm* kvm; } ;
struct TYPE_2__ {struct kvmppc_xics* xics; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvmppc_xics*) ;
 struct kvmppc_xics* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_device *VAR_7, u32 VAR_8)
{
 struct kvmppc_xics *VAR_9;
 struct kvm *VAR_10 = VAR_7->kvm;
 int VAR_11 = 0;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_6);
 if (!VAR_9)
  return -VAR_5;

 VAR_7->private = VAR_9;
 VAR_9->dev = VAR_7;
 VAR_9->kvm = VAR_10;


 if (VAR_10->arch.xics)
  VAR_11 = -VAR_3;
 else
  VAR_10->arch.xics = VAR_9;

 if (VAR_11) {
  FUNC_1(VAR_9);
  return VAR_11;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {int mcar; int hid0; int svr; } ;
struct TYPE_8__ {int * ivor; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_6__ {int mcar; int hid0; int svr; } ;
struct TYPE_7__ {TYPE_1__ fsl; } ;
struct TYPE_9__ {scalar_t__ impl_id; int features; int * ivor_high; TYPE_2__ impl; } ;
struct TYPE_10__ {TYPE_4__ e; } ;
struct kvm_sregs {TYPE_5__ u; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_sregs*) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_8,
          struct kvm_sregs *VAR_9)
{
 struct kvmppc_vcpu_e500 *VAR_10 = FUNC_2(VAR_8);
 int VAR_11;

 if (VAR_9->u.e.impl_id == VAR_4) {
  VAR_10->svr = VAR_9->u.e.impl.fsl.svr;
  VAR_10->hid0 = VAR_9->u.e.impl.fsl.hid0;
  VAR_10->mcar = VAR_9->u.e.impl.fsl.mcar;
 }

 VAR_11 = FUNC_0(VAR_8, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 if (!(VAR_9->u.e.features & VAR_5))
  return 0;

 if (VAR_9->u.e.features & VAR_7) {
  VAR_8->arch.ivor[VAR_3] =
   VAR_9->u.e.ivor_high[0];
  VAR_8->arch.ivor[VAR_1] =
   VAR_9->u.e.ivor_high[1];
  VAR_8->arch.ivor[VAR_2] =
   VAR_9->u.e.ivor_high[2];
 }

 if (VAR_9->u.e.features & VAR_6) {
  VAR_8->arch.ivor[VAR_0] =
   VAR_9->u.e.ivor_high[3];
 }

 return FUNC_1(VAR_8, VAR_9);
}

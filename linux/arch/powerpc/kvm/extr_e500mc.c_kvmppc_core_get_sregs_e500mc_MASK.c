
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
struct TYPE_10__ {int * ivor; } ;
struct kvm_vcpu {TYPE_5__ arch; } ;
struct TYPE_6__ {int mcar; int hid0; int svr; scalar_t__ features; } ;
struct TYPE_7__ {TYPE_1__ fsl; } ;
struct TYPE_8__ {int features; int * ivor_high; TYPE_2__ impl; int impl_id; } ;
struct TYPE_9__ {TYPE_3__ e; } ;
struct kvm_sregs {TYPE_4__ u; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_sregs*) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_7,
     struct kvm_sregs *VAR_8)
{
 struct kvmppc_vcpu_e500 *VAR_9 = FUNC_2(VAR_7);

 VAR_8->u.e.features |= VAR_3 | VAR_6 |
          VAR_5;
 VAR_8->u.e.impl_id = VAR_4;

 VAR_8->u.e.impl.fsl.features = 0;
 VAR_8->u.e.impl.fsl.svr = VAR_9->svr;
 VAR_8->u.e.impl.fsl.hid0 = VAR_9->hid0;
 VAR_8->u.e.impl.fsl.mcar = VAR_9->mcar;

 FUNC_0(VAR_7, VAR_8);

 VAR_8->u.e.ivor_high[3] =
  VAR_7->arch.ivor[VAR_2];
 VAR_8->u.e.ivor_high[4] = VAR_7->arch.ivor[VAR_0];
 VAR_8->u.e.ivor_high[5] = VAR_7->arch.ivor[VAR_1];

 return FUNC_1(VAR_7, VAR_8);
}

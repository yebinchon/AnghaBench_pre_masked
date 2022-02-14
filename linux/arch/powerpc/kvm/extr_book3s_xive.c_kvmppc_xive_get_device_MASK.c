
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvmppc_xive {int dummy; } ;
struct TYPE_3__ {struct kvmppc_xive* xics_on_xive; struct kvmppc_xive* native; } ;
struct TYPE_4__ {TYPE_1__ xive_devices; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kvmppc_xive* FUNC_0 (int,int ) ;
 int FUNC_1 (struct kvmppc_xive*,int ,int) ;

struct kvmppc_xive *FUNC_2(struct kvm *VAR_2, u32 VAR_3)
{
 struct kvmppc_xive **VAR_4 = VAR_3 == VAR_1 ?
  &VAR_2->arch.xive_devices.native :
  &VAR_2->arch.xive_devices.xics_on_xive;
 struct kvmppc_xive *VAR_5 = *VAR_4;

 if (!VAR_5) {
  VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
  *VAR_4 = VAR_5;
 } else {
  FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 }

 return VAR_5;
}

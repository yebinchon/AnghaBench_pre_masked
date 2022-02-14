
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int direct_mode; scalar_t__ enable; int periodic; } ;
struct kvm_vcpu_hv_stimer {int msg_pending; TYPE_1__ config; int index; } ;
struct TYPE_4__ {int vcpu_id; } ;


 int FUNC_0 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_1 (struct kvm_vcpu_hv_stimer*) ;
 TYPE_2__* FUNC_2 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu_hv_stimer *VAR_0)
{
 int VAR_1, VAR_2 = VAR_0->config.direct_mode;

 VAR_0->msg_pending = 1;
 if (!VAR_2)
  VAR_1 = FUNC_1(VAR_0);
 else
  VAR_1 = FUNC_0(VAR_0);
 FUNC_3(FUNC_2(VAR_0)->vcpu_id,
           VAR_0->index, VAR_2, VAR_1);
 if (!VAR_1) {
  VAR_0->msg_pending = 0;
  if (!(VAR_0->config.periodic))
   VAR_0->config.enable = 0;
 }
}

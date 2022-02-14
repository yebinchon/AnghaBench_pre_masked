
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int periodic; int sintx; } ;
struct TYPE_3__ {int payload; } ;
struct hv_message {TYPE_1__ u; } ;
struct kvm_vcpu_hv_stimer {TYPE_2__ config; int exp_time; struct hv_message msg; } ;
struct kvm_vcpu {int kvm; } ;
struct hv_timer_message_payload {int delivery_time; int expiration_time; } ;


 int FUNC_0 (int ) ;
 struct kvm_vcpu* FUNC_1 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_2 (int ,int ,struct hv_message*,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu_hv_stimer *VAR_0)
{
 struct kvm_vcpu *VAR_1 = FUNC_1(VAR_0);
 struct hv_message *VAR_2 = &VAR_0->msg;
 struct hv_timer_message_payload *VAR_3 =
   (struct hv_timer_message_payload *)&VAR_2->u.payload;





 bool VAR_4 = VAR_0->config.periodic;

 VAR_3->expiration_time = VAR_0->exp_time;
 VAR_3->delivery_time = FUNC_0(VAR_1->kvm);
 return FUNC_2(FUNC_3(VAR_1),
     VAR_0->config.sintx, VAR_2,
     VAR_4);
}

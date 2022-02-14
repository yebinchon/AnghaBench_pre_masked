
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int payload_size; int message_type; } ;
struct TYPE_3__ {int payload; } ;
struct hv_message {TYPE_2__ header; TYPE_1__ u; } ;
struct kvm_vcpu_hv_stimer {int index; struct hv_message msg; } ;
struct hv_timer_message_payload {scalar_t__ delivery_time; scalar_t__ expiration_time; int timer_index; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu_hv_stimer *VAR_1)
{
 struct hv_message *VAR_2 = &VAR_1->msg;
 struct hv_timer_message_payload *VAR_3 =
   (struct hv_timer_message_payload *)&VAR_2->u.payload;

 FUNC_0(&VAR_2->header, 0, sizeof(VAR_2->header));
 VAR_2->header.message_type = VAR_0;
 VAR_2->header.payload_size = sizeof(*VAR_3);

 VAR_3->timer_index = VAR_1->index;
 VAR_3->expiration_time = 0;
 VAR_3->delivery_time = 0;
}

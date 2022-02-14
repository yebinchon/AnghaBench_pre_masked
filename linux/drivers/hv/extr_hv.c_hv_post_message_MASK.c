
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union hv_connection_id {int dummy; } hv_connection_id ;
typedef int u64 ;
struct hv_per_cpu_context {struct hv_input_post_message* post_msg_page; } ;
struct hv_input_post_message {int message_type; size_t payload_size; scalar_t__ payload; scalar_t__ reserved; union hv_connection_id connectionid; } ;
typedef enum hv_message_type { ____Placeholder_hv_message_type } hv_message_type ;
struct TYPE_2__ {int cpu_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct hv_per_cpu_context* FUNC_0 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,struct hv_input_post_message*,int *) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (struct hv_per_cpu_context*) ;

int FUNC_4(union hv_connection_id VAR_4,
    enum hv_message_type VAR_5,
    void *VAR_6, size_t VAR_7)
{
 struct hv_input_post_message *VAR_8;
 struct hv_per_cpu_context *VAR_9;
 u64 VAR_10;

 if (VAR_7 > VAR_2)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_3.cpu_context);
 VAR_8 = VAR_9->post_msg_page;
 VAR_8->connectionid = VAR_4;
 VAR_8->reserved = 0;
 VAR_8->message_type = VAR_5;
 VAR_8->payload_size = VAR_7;
 FUNC_2((void *)VAR_8->payload, VAR_6, VAR_7);

 VAR_10 = FUNC_1(VAR_1, VAR_8, ((void*)0));





 FUNC_3(VAR_9);

 return VAR_10 & 0xFFFF;
}

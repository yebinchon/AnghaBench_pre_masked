
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union hv_synic_event_flags {int flags; } ;
struct hv_per_cpu_context {int msg_dpc; void* synic_message_page; void* synic_event_page; } ;
struct TYPE_3__ {scalar_t__ message_type; } ;
struct hv_message {TYPE_1__ header; } ;
struct TYPE_4__ {int cpu_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 struct hv_per_cpu_context* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct hv_per_cpu_context*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct hv_message*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct hv_per_cpu_context *VAR_8
  = FUNC_4(VAR_6.cpu_context);
 void *VAR_9 = VAR_8->synic_event_page;
 struct hv_message *VAR_10;
 union hv_synic_event_flags *VAR_11;
 bool VAR_12 = 0;

 if (FUNC_5(VAR_9 == ((void*)0)))
  return;

 VAR_11 = (union hv_synic_event_flags *)VAR_9 +
      VAR_5;






 if ((VAR_7 == VAR_4) ||
  (VAR_7 == VAR_3)) {


  if (FUNC_2(0, VAR_11->flags))
   VAR_12 = 1;
 } else {






  VAR_12 = 1;
 }

 if (VAR_12)
  FUNC_6(VAR_8);

 VAR_9 = VAR_8->synic_message_page;
 VAR_10 = (struct hv_message *)VAR_9 + VAR_5;


 if (VAR_10->header.message_type != VAR_0) {
  if (VAR_10->header.message_type == VAR_1) {
   FUNC_1();
   FUNC_7(VAR_10, VAR_1);
  } else
   FUNC_3(&VAR_8->msg_dpc);
 }

 FUNC_0(VAR_2, 0);
}

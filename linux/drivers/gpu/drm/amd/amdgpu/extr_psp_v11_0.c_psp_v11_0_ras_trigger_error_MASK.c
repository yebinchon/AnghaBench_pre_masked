
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ta_ras_trigger_error_input {int dummy; } ;
struct TYPE_4__ {struct ta_ras_trigger_error_input trigger_error; } ;
struct ta_ras_shared_memory {int ras_status; int cmd_id; TYPE_2__ ras_in_message; } ;
struct TYPE_3__ {scalar_t__ ras_shared_buf; int ras_initialized; } ;
struct psp_context {TYPE_1__ ras; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ta_ras_shared_memory*,int ,int) ;
 int FUNC_1 (struct psp_context*,int ) ;

__attribute__((used)) static int FUNC_2(struct psp_context *VAR_2,
  struct ta_ras_trigger_error_input *VAR_3)
{
 struct ta_ras_shared_memory *VAR_4;
 int VAR_5;

 if (!VAR_2->ras.ras_initialized)
  return -VAR_0;

 VAR_4 = (struct ta_ras_shared_memory *)VAR_2->ras.ras_shared_buf;
 FUNC_0(VAR_4, 0, sizeof(struct ta_ras_shared_memory));

 VAR_4->cmd_id = VAR_1;
 VAR_4->ras_in_message.trigger_error = *VAR_3;

 VAR_5 = FUNC_1(VAR_2, VAR_4->cmd_id);
 if (VAR_5)
  return -VAR_0;

 return VAR_4->ras_status;
}

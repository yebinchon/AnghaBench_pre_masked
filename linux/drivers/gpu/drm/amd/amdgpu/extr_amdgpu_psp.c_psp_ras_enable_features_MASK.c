
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ta_ras_cmd_input {int dummy; } ta_ras_cmd_input ;
struct ta_ras_shared_memory {int ras_status; int cmd_id; union ta_ras_cmd_input ras_in_message; } ;
struct TYPE_2__ {scalar_t__ ras_shared_buf; int ras_initialized; } ;
struct psp_context {TYPE_1__ ras; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ta_ras_shared_memory*,int ,int) ;
 int FUNC_1 (struct psp_context*,int ) ;

int FUNC_2(struct psp_context *VAR_3,
  union ta_ras_cmd_input *VAR_4, bool VAR_5)
{
 struct ta_ras_shared_memory *VAR_6;
 int VAR_7;

 if (!VAR_3->ras.ras_initialized)
  return -VAR_0;

 VAR_6 = (struct ta_ras_shared_memory *)VAR_3->ras.ras_shared_buf;
 FUNC_0(VAR_6, 0, sizeof(struct ta_ras_shared_memory));

 if (VAR_5)
  VAR_6->cmd_id = VAR_2;
 else
  VAR_6->cmd_id = VAR_1;

 VAR_6->ras_in_message = *VAR_4;

 VAR_7 = FUNC_1(VAR_3, VAR_6->cmd_id);
 if (VAR_7)
  return -VAR_0;

 return VAR_6->ras_status;
}

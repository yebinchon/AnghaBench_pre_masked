
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccp_device {unsigned int cmd_q_count; struct ccp_cmd_queue* cmd_q; } ;
struct ccp_cmd_queue {int int_status; int int_rcvd; int int_queue; int reg_interrupt_status; void* q_status; scalar_t__ cmd_error; int reg_int_status; void* q_int_status; int reg_status; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (struct ccp_device*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct ccp_device *VAR_2 = (struct ccp_device *)VAR_1;
 u32 VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->cmd_q_count; VAR_4++) {
  struct ccp_cmd_queue *VAR_5 = &VAR_2->cmd_q[VAR_4];

  VAR_3 = FUNC_2(VAR_5->reg_interrupt_status);

  if (VAR_3) {
   VAR_5->int_status = VAR_3;
   VAR_5->q_status = FUNC_2(VAR_5->reg_status);
   VAR_5->q_int_status = FUNC_2(VAR_5->reg_int_status);


   if ((VAR_3 & VAR_0) && !VAR_5->cmd_error)
    VAR_5->cmd_error = FUNC_0(VAR_5->q_status);

   VAR_5->int_rcvd = 1;


   FUNC_3(VAR_3, VAR_5->reg_interrupt_status);
   FUNC_4(&VAR_5->int_queue);
  }
 }
 FUNC_1(VAR_2);
}

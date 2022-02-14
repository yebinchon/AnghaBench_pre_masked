
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccp_device {unsigned int cmd_q_count; scalar_t__ io_regs; struct ccp_cmd_queue* cmd_q; } ;
struct ccp_cmd_queue {int int_ok; int int_err; int int_status; int int_rcvd; int int_queue; void* q_status; scalar_t__ cmd_error; scalar_t__ reg_int_status; void* q_int_status; scalar_t__ reg_status; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ccp_device*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct ccp_device *VAR_2 = (struct ccp_device *)VAR_1;
 struct ccp_cmd_queue *VAR_3;
 u32 VAR_4, VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_2(VAR_2->io_regs + VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_2->cmd_q_count; VAR_6++) {
  VAR_3 = &VAR_2->cmd_q[VAR_6];

  VAR_4 = VAR_5 & (VAR_3->int_ok | VAR_3->int_err);
  if (VAR_4) {
   VAR_3->int_status = VAR_5;
   VAR_3->q_status = FUNC_2(VAR_3->reg_status);
   VAR_3->q_int_status = FUNC_2(VAR_3->reg_int_status);


   if ((VAR_4 & VAR_3->int_err) && !VAR_3->cmd_error)
    VAR_3->cmd_error = FUNC_0(VAR_3->q_status);

   VAR_3->int_rcvd = 1;


   FUNC_3(VAR_4, VAR_2->io_regs + VAR_0);
   FUNC_4(&VAR_3->int_queue);
  }
 }
 FUNC_1(VAR_2);
}

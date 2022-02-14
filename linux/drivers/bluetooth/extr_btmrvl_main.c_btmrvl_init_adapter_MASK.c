
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btmrvl_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {int event_hs_wait_q; int cmd_wait_q; int * hw_regs; int hw_regs_buf; int ps_state; int tx_queue; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct btmrvl_private *VAR_4)
{
 int VAR_5;

 FUNC_6(&VAR_4->adapter->tx_queue);

 VAR_4->adapter->ps_state = VAR_2;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_4->adapter->hw_regs_buf = FUNC_5(VAR_5, VAR_1);
 if (!VAR_4->adapter->hw_regs_buf) {
  VAR_4->adapter->hw_regs = ((void*)0);
  FUNC_3("Unable to allocate buffer for hw_regs.");
 } else {
  VAR_4->adapter->hw_regs =
   (u8 *)FUNC_0(VAR_4->adapter->hw_regs_buf,
      VAR_0);
  FUNC_2("hw_regs_buf=%p hw_regs=%p",
         VAR_4->adapter->hw_regs_buf, VAR_4->adapter->hw_regs);
 }

 FUNC_4(&VAR_4->adapter->cmd_wait_q);
 FUNC_4(&VAR_4->adapter->event_hs_wait_q);
}

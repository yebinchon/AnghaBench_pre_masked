
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dw_i3c_xfer {unsigned int ncmds; struct dw_i3c_cmd* cmds; } ;
struct TYPE_2__ {struct dw_i3c_xfer* cur; } ;
struct dw_i3c_master {scalar_t__ regs; TYPE_1__ xferqueue; } ;
struct dw_i3c_cmd {int cmd_lo; int cmd_hi; int tx_len; int tx_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (struct dw_i3c_master*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dw_i3c_master *VAR_3)
{
 struct dw_i3c_xfer *VAR_4 = VAR_3->xferqueue.cur;
 unsigned int VAR_5;
 u32 VAR_6;

 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_4->ncmds; VAR_5++) {
  struct dw_i3c_cmd *VAR_7 = &VAR_4->cmds[VAR_5];

  FUNC_1(VAR_3, VAR_7->tx_buf, VAR_7->tx_len);
 }

 VAR_6 = FUNC_2(VAR_3->regs + VAR_1);
 VAR_6 &= ~VAR_2;
 VAR_6 |= FUNC_0(VAR_4->ncmds);
 FUNC_3(VAR_6, VAR_3->regs + VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_4->ncmds; VAR_5++) {
  struct dw_i3c_cmd *VAR_8 = &VAR_4->cmds[VAR_5];

  FUNC_3(VAR_8->cmd_hi, VAR_3->regs + VAR_0);
  FUNC_3(VAR_8->cmd_lo, VAR_3->regs + VAR_0);
 }
}

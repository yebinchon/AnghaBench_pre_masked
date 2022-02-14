
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns_i3c_xfer {unsigned int ncmds; struct cdns_i3c_cmd* cmds; } ;
struct TYPE_2__ {struct cdns_i3c_xfer* cur; } ;
struct cdns_i3c_master {scalar_t__ regs; TYPE_1__ xferqueue; } ;
struct cdns_i3c_cmd {int cmd1; int cmd0; int tx_len; int tx_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cdns_i3c_master*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cdns_i3c_master *VAR_7)
{
 struct cdns_i3c_xfer *VAR_8 = VAR_7->xferqueue.cur;
 unsigned int VAR_9;

 if (!VAR_8)
  return;

 FUNC_3(VAR_6, VAR_7->regs + VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_8->ncmds; VAR_9++) {
  struct cdns_i3c_cmd *VAR_10 = &VAR_8->cmds[VAR_9];

  FUNC_1(VAR_7, VAR_10->tx_buf,
           VAR_10->tx_len);
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->ncmds; VAR_9++) {
  struct cdns_i3c_cmd *VAR_11 = &VAR_8->cmds[VAR_9];

  FUNC_3(VAR_11->cmd1 | FUNC_0(VAR_9),
         VAR_7->regs + VAR_1);
  FUNC_3(VAR_11->cmd0, VAR_7->regs + VAR_0);
 }

 FUNC_3(FUNC_2(VAR_7->regs + VAR_2) | VAR_3,
        VAR_7->regs + VAR_2);
 FUNC_3(VAR_6, VAR_7->regs + VAR_5);
}

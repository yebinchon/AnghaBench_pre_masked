
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ipoctal_channel {scalar_t__ nb_bytes; scalar_t__ board_id; int rx_enable; int isr_rx_rdy_mask; int isr_tx_rdy_mask; TYPE_5__* regs; TYPE_2__* block_regs; } ;
struct TYPE_9__ {int cr; } ;
struct TYPE_8__ {int sr; } ;
struct TYPE_10__ {TYPE_4__ w; TYPE_3__ r; } ;
struct TYPE_6__ {int isr; } ;
struct TYPE_7__ {TYPE_1__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ipoctal_channel*,int) ;
 int FUNC_3 (struct ipoctal_channel*) ;

__attribute__((used)) static void FUNC_4(struct ipoctal_channel *VAR_10)
{
 u8 VAR_11, VAR_12;



 VAR_11 = FUNC_0(&VAR_10->block_regs->r.isr);
 VAR_12 = FUNC_0(&VAR_10->regs->r.sr);

 if (VAR_11 & (VAR_4 | VAR_5))
  FUNC_1(VAR_1, &VAR_10->regs->w.cr);

 if ((VAR_12 & VAR_8) && (VAR_10->nb_bytes == 0)) {
  FUNC_1(VAR_2, &VAR_10->regs->w.cr);


  if (VAR_10->board_id == VAR_6) {
   FUNC_1(VAR_0, &VAR_10->regs->w.cr);
   FUNC_1(VAR_3, &VAR_10->regs->w.cr);
   VAR_10->rx_enable = 1;
  }
 }


 if ((VAR_11 & VAR_10->isr_rx_rdy_mask) && (VAR_12 & VAR_7))
  FUNC_2(VAR_10, VAR_12);


 if ((VAR_11 & VAR_10->isr_tx_rdy_mask) && (VAR_12 & VAR_9))
  FUNC_3(VAR_10);
}

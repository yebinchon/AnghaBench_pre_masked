
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct tty_port {int dummy; } ;
struct TYPE_8__ {int rcv_break; int framing_err; int parity_err; int overrun_err; } ;
struct ipoctal_channel {int isr_rx_rdy_mask; TYPE_6__* regs; TYPE_4__* block_regs; TYPE_2__ stats; struct tty_port tty_port; } ;
struct TYPE_11__ {int sr; int rhr; } ;
struct TYPE_7__ {int cr; } ;
struct TYPE_12__ {TYPE_5__ r; TYPE_1__ w; } ;
struct TYPE_9__ {int isr; } ;
struct TYPE_10__ {TYPE_3__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct tty_port*) ;
 int FUNC_3 (struct tty_port*,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct ipoctal_channel *VAR_11, u8 VAR_12)
{
 struct tty_port *VAR_13 = &VAR_11->tty_port;
 unsigned char VAR_14;
 unsigned char VAR_15;
 u8 VAR_16;

 do {
  VAR_14 = FUNC_0(&VAR_11->regs->r.rhr);
  VAR_15 = VAR_8;

  if (VAR_12 & VAR_1) {
   FUNC_1(VAR_0, &VAR_11->regs->w.cr);

   if (VAR_12 & VAR_3) {
    VAR_11->stats.overrun_err++;

    FUNC_3(VAR_13, 0, VAR_9);
   }
   if (VAR_12 & VAR_4) {
    VAR_11->stats.parity_err++;
    VAR_15 = VAR_10;
   }
   if (VAR_12 & VAR_2) {
    VAR_11->stats.framing_err++;
    VAR_15 = VAR_7;
   }
   if (VAR_12 & VAR_5) {
    VAR_11->stats.rcv_break++;
    VAR_15 = VAR_6;
   }
  }
  FUNC_3(VAR_13, VAR_14, VAR_15);





  VAR_16 = FUNC_0(&VAR_11->block_regs->r.isr);
  VAR_12 = FUNC_0(&VAR_11->regs->r.sr);
 } while (VAR_16 & VAR_11->isr_rx_rdy_mask);

 FUNC_2(VAR_13);
}

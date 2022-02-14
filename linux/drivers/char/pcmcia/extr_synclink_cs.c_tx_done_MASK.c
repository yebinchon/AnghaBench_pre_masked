
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; } ;
struct TYPE_8__ {scalar_t__ mode; } ;
struct TYPE_9__ {int tx_active; int tx_aborting; int drop_rts_on_tx_done; int serial_signals; int pending_bh; scalar_t__ netcount; int tx_timer; scalar_t__ tx_get; scalar_t__ tx_put; scalar_t__ tx_count; TYPE_1__ params; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(MGSLPC_INFO *VAR_3, struct tty_struct *VAR_4)
{
 if (!VAR_3->tx_active)
  return;

 VAR_3->tx_active = 0;
 VAR_3->tx_aborting = 0;

 if (VAR_3->params.mode == VAR_1)
  return;

 VAR_3->tx_count = VAR_3->tx_put = VAR_3->tx_get = 0;
 FUNC_0(&VAR_3->tx_timer);

 if (VAR_3->drop_rts_on_tx_done) {
  FUNC_1(VAR_3);
  if (VAR_3->serial_signals & VAR_2) {
   VAR_3->serial_signals &= ~VAR_2;
   FUNC_3(VAR_3);
  }
  VAR_3->drop_rts_on_tx_done = 0;
 }






 {
  if (VAR_4 && (VAR_4->stopped || VAR_4->hw_stopped)) {
   FUNC_4(VAR_3);
   return;
  }
  VAR_3->pending_bh |= VAR_0;
 }
}

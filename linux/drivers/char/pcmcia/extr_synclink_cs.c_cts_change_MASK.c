
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tty_struct {int hw_stopped; } ;
struct TYPE_10__ {int cts_down; int cts_up; } ;
struct TYPE_9__ {int cts; } ;
struct TYPE_11__ {int serial_signals; int pending_bh; int port; int event_wait_q; int status_event_wait_q; TYPE_2__ input_signal_events; TYPE_1__ icount; int cts_chkcount; } ;
typedef TYPE_3__ MGSLPC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,struct tty_struct*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(MGSLPC_INFO *VAR_8, struct tty_struct *VAR_9)
{
 FUNC_0(VAR_8);
 if ((VAR_8->cts_chkcount)++ >= VAR_4)
  FUNC_1(VAR_8, VAR_2, VAR_5);
 VAR_8->icount.cts++;
 if (VAR_8->serial_signals & VAR_6)
  VAR_8->input_signal_events.cts_up++;
 else
  VAR_8->input_signal_events.cts_down++;
 FUNC_6(&VAR_8->status_event_wait_q);
 FUNC_6(&VAR_8->event_wait_q);

 if (VAR_9 && FUNC_3(&VAR_8->port)) {
  if (VAR_9->hw_stopped) {
   if (VAR_8->serial_signals & VAR_6) {
    if (VAR_7 >= VAR_3)
     FUNC_2("CTS tx start...");
    VAR_9->hw_stopped = 0;
    FUNC_4(VAR_8, VAR_9);
    VAR_8->pending_bh |= VAR_1;
    return;
   }
  } else {
   if (!(VAR_8->serial_signals & VAR_6)) {
    if (VAR_7 >= VAR_3)
     FUNC_2("CTS tx stop...");
    VAR_9->hw_stopped = 1;
    FUNC_5(VAR_8);
   }
  }
 }
 VAR_8->pending_bh |= VAR_0;
}

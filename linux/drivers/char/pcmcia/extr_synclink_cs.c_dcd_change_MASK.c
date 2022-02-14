
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_11__ {int open_wait; } ;
struct TYPE_9__ {int dcd_down; int dcd_up; } ;
struct TYPE_8__ {int dcd; } ;
struct TYPE_10__ {int serial_signals; int pending_bh; TYPE_4__ port; int device_name; int event_wait_q; int status_event_wait_q; int netdev; scalar_t__ netcount; TYPE_2__ input_signal_events; TYPE_1__ icount; int dcd_chkcount; } ;
typedef TYPE_3__ MGSLPC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(MGSLPC_INFO *VAR_7, struct tty_struct *VAR_8)
{
 FUNC_0(VAR_7);
 if ((VAR_7->dcd_chkcount)++ >= VAR_3)
  FUNC_1(VAR_7, VAR_1, VAR_4);
 VAR_7->icount.dcd++;
 if (VAR_7->serial_signals & VAR_5) {
  VAR_7->input_signal_events.dcd_up++;
 }
 else
  VAR_7->input_signal_events.dcd_down++;
 FUNC_7(&VAR_7->status_event_wait_q);
 FUNC_7(&VAR_7->event_wait_q);

 if (FUNC_6(&VAR_7->port)) {
  if (VAR_6 >= VAR_2)
   FUNC_4("%s CD now %s...", VAR_7->device_name,
          (VAR_7->serial_signals & VAR_5) ? "on" : "off");
  if (VAR_7->serial_signals & VAR_5)
   FUNC_7(&VAR_7->port.open_wait);
  else {
   if (VAR_6 >= VAR_2)
    FUNC_4("doing serial hangup...");
   if (VAR_8)
    FUNC_5(VAR_8);
  }
 }
 VAR_7->pending_bh |= VAR_0;
}

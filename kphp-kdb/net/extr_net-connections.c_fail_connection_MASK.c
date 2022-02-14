
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int flags; scalar_t__ status; int error; int ev; TYPE_1__* target; } ;
struct TYPE_2__ {int active_outbound_connections; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_1 (struct connection *VAR_9, int VAR_10) {
  if (!(VAR_9->flags & VAR_0)) {
    VAR_8++;
    if (VAR_9->status == VAR_5) {
      VAR_7++;
    }
  }
  VAR_9->flags |= VAR_0;
  VAR_9->flags &= ~(VAR_1 | VAR_2);
  if (VAR_9->status == VAR_5) {
    VAR_9->target->active_outbound_connections++;
    VAR_4++;
    VAR_3++;
  }
  VAR_9->status = VAR_6;
  if (VAR_9->error >= 0) {
    VAR_9->error = VAR_10;
  }
  FUNC_0 (VAR_9->ev);
  return 0;
}

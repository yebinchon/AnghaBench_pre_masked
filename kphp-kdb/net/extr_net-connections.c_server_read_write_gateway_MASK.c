
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int (* run ) (struct connection*) ;struct connection* type; int flags; } ;
struct TYPE_3__ {int ready; int state; } ;
typedef TYPE_1__ event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;

int FUNC_2 (int VAR_6, void *VAR_7, event_t *VAR_8) {
  struct connection *VAR_9 = (struct connection *) VAR_7;
  FUNC_0 (VAR_9);
  FUNC_0 (VAR_9->type);

  if (VAR_8->ready & VAR_3) {

    VAR_8->ready &= ~VAR_3;
    VAR_9->flags &= ~VAR_1;
    if ((VAR_8->state & VAR_4) && !(VAR_8->ready & VAR_4)) {
      VAR_9->flags |= VAR_0;
    }
    if ((VAR_8->state & VAR_5) && !(VAR_8->ready & VAR_5)) {
      VAR_9->flags |= VAR_2;
    }
  }

  return VAR_9->type->run (VAR_9);
}

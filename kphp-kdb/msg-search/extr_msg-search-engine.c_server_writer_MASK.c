
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int fd; scalar_t__ state; int Out; TYPE_1__* ev; } ;
struct TYPE_2__ {int state; int ready; } ;
typedef TYPE_1__ event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int,int,int,char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_6 (struct connection *VAR_4) {
  int VAR_5, VAR_6, VAR_7 = VAR_4->fd;
  event_t *VAR_8 = VAR_4->ev;

  if (VAR_4->state > 0) {

    VAR_6 = FUNC_3 (&VAR_4->Out);

    while ((VAR_6 = FUNC_3 (&VAR_4->Out)) && (!(VAR_8->state & VAR_0) || (VAR_8->ready & VAR_0))) {
      char *VAR_9 = FUNC_2 (&VAR_4->Out);

      VAR_5 = FUNC_5 (VAR_7, VAR_9, VAR_6, VAR_1);

      if (VAR_3 > 0) {
 FUNC_1 (VAR_2, "send() to %d: %d written out of %d at %p\n", VAR_7, VAR_5, VAR_6, VAR_9);
 if (VAR_5 < 0) FUNC_4 ("send()");
      }

      if (VAR_5 > 0) {
 FUNC_0 (&VAR_4->Out, VAR_5);
      }

      if (VAR_5 < VAR_6) {
 VAR_8->ready &= ~VAR_0;
 break;
      }
    }

    if (VAR_6 > 0) return VAR_0;

    VAR_4->state = 0;
  }
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imessage {int flags; TYPE_2__* fmsg; TYPE_1__* msg; } ;
struct TYPE_4__ {int date; int peer_id; } ;
struct TYPE_3__ {int date; int peer_id; } ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1 (int *VAR_0, struct imessage *VAR_1, int VAR_2) {
  int VAR_3 = 0;
  if (VAR_2 & 32) {
    VAR_0[VAR_3++] = VAR_1->flags;
  }
  if (VAR_1->msg) {
    if (VAR_2 & 64) {
      VAR_0[VAR_3++] = VAR_1->msg->date;
    }
    if (VAR_2 & 128) {
      VAR_0[VAR_3++] = VAR_1->msg->peer_id;
    }
  } else {
    FUNC_0 (VAR_1->fmsg);
    if (VAR_2 & 64) {
      VAR_0[VAR_3++] = VAR_1->fmsg->date;
    }
    if (VAR_2 & 128) {
      VAR_0[VAR_3++] = VAR_1->fmsg->peer_id;
    }
  }
  return VAR_3;
}

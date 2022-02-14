
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int req; } ;
struct TYPE_7__ {TYPE_1__ t; } ;
struct TYPE_6__ {int state; TYPE_4__ outgoing; TYPE_4__ incoming; } ;
typedef TYPE_2__ client_ctx ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(client_ctx *VAR_3) {
  int VAR_4;

  if (VAR_3->state >= VAR_0) {
    return VAR_3->state;
  }




  VAR_4 = VAR_1;
  if (VAR_3->state == VAR_2) {
    VAR_4 = VAR_0;
    FUNC_1(&VAR_3->outgoing.t.req);
  }

  FUNC_0(&VAR_3->incoming);
  FUNC_0(&VAR_3->outgoing);
  return VAR_4;
}

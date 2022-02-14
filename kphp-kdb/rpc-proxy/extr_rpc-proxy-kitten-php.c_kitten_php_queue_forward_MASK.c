
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {TYPE_2__* fd; } ;
struct TYPE_7__ {TYPE_1__* h; } ;
struct TYPE_6__ {int new_id; } ;
struct TYPE_5__ {scalar_t__ kitten_php_delay; int qid; } ;


 TYPE_2__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 long long FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 struct connection* FUNC_2 (int ) ;
 int FUNC_3 (struct connection*,int ,long long,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,char*,TYPE_2__*) ;

int FUNC_6 (void) {
  FUNC_5 (2, "forward: CC = %p\n", VAR_0);
  if (FUNC_4 ()) {
    return -1;
  }
  if (VAR_1->h->kitten_php_delay > 0) {
    return FUNC_1 (0, 1);
  }
  struct connection *VAR_2 = FUNC_2 (0);
  if (VAR_2) {
    FUNC_5 (2, "Forwarding: connect = %d\n", VAR_2->fd);
    long long VAR_3 = FUNC_0 (VAR_1->h->qid);
    return FUNC_3 (VAR_2, VAR_0->new_id, VAR_3, 1);
  } else {
    FUNC_1 (1, 1);
    return 0;
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct conn_query {TYPE_4__* cq_type; struct conn_query* next; } ;
struct aiocb {int dummy; } ;
struct aio_connection {int fd; struct aio_connection* cb; struct conn_query* first_query; TYPE_3__* next; TYPE_2__* prev; TYPE_1__* type; int last_query; } ;
struct TYPE_8__ {int (* close ) (struct conn_query*) ;int (* complete ) (struct conn_query*) ;} ;
struct TYPE_7__ {TYPE_2__* prev; } ;
struct TYPE_6__ {TYPE_3__* next; } ;
struct TYPE_5__ {int (* wakeup_aio ) (struct connection*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct aio_connection*) ;
 int FUNC_1 (struct aio_connection*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct aio_connection*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_4 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct connection*,int) ;
 int FUNC_6 (struct conn_query*) ;
 int FUNC_7 (struct conn_query*) ;
 int VAR_5 ;
 int FUNC_8 (struct aio_connection*,int) ;

int FUNC_9 (struct aio_connection *VAR_6) {

  if (VAR_5 > 1) {
    FUNC_3 (VAR_4, "in check_aio_completion(%p [first_query=%p, last_query=%d])\n", VAR_6, VAR_6->first_query, VAR_6->last_query);
  }

  VAR_3 = 0;

  int VAR_7 = FUNC_1 (VAR_6->cb);

  if (VAR_7 == VAR_1) {
    if (VAR_5 > 1) {
      FUNC_3 (VAR_4, "aio_query %p in progress...\n", VAR_6);
    }
    if (VAR_6->first_query == (struct conn_query *) VAR_6) {
      if (VAR_5 > 0) {
        FUNC_3 (VAR_4, "aio_query %p in progress, but all conn_queries are dead, canceling aio.\n", VAR_6);
      }
      if (FUNC_0 (VAR_6->fd, VAR_6->cb) == VAR_0) {
        if (VAR_5 > 0) {
          FUNC_3 (VAR_4, "aio_cancel(%d,%p) returns AIO_NOTCANCELED\n", VAR_6->fd, VAR_6->cb);
        }
        return 0;
      }
      VAR_7 = FUNC_1 (VAR_6->cb);
      if (VAR_7 == VAR_1) {
        if (VAR_5 > 0) {
          FUNC_3 (VAR_4, "aio_query %p still in progress.\n", VAR_6);
        }
        return 0;
      }
    } else {
      return 0;
    }
  }

  int VAR_8 = FUNC_2 (VAR_6->cb);
  if (VAR_5 > 1 || (VAR_2 && VAR_7)) {
    FUNC_3 (VAR_4, "aio_return() returns %d, errno=%d (%s)\n", VAR_8, VAR_7, FUNC_4 (VAR_7));
  }

  VAR_6->type->wakeup_aio ((struct connection *)VAR_6, VAR_8);

  VAR_6->next->prev = VAR_6->prev;
  VAR_6->prev->next = VAR_6->next;

  struct conn_query *VAR_9, *VAR_10;

  for (VAR_9 = VAR_6->first_query; VAR_9 != (struct conn_query *)VAR_6; VAR_9 = VAR_10) {
    VAR_10 = VAR_9->next;

    if (VAR_8 >= 0) {
      VAR_9->cq_type->complete (VAR_9);
    } else {
      VAR_9->cq_type->close (VAR_9);
    }
  }

  if (VAR_5 > 2) {
    FUNC_3 (VAR_4, "freeing aio_connection at %p\n", VAR_6);
  }

  FUNC_8 (VAR_6->cb, sizeof (struct aiocb));
  FUNC_8 (VAR_6, sizeof (struct aio_connection));

  return 1;
}

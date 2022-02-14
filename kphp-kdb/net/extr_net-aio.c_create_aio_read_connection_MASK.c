
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct conn_query {int dummy; } ;
struct aiocb {int dummy; } ;
struct aio_connection {int fd; TYPE_2__* cb; struct aio_connection* next; struct aio_connection* prev; int status; int basic_type; void* extra; struct conn_query* last_query; struct conn_query* first_query; int * type; int flags; } ;
typedef scalar_t__ off_t ;
typedef int conn_type_t ;
struct TYPE_6__ {struct aio_connection* last; } ;
struct TYPE_4__ {int sigev_signo; int sigev_notify; } ;
struct TYPE_5__ {int aio_fildes; int aio_nbytes; TYPE_1__ aio_sigevent; scalar_t__ aio_offset; void* aio_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_3 (int) ;

struct aio_connection *FUNC_4 (int VAR_8, void *VAR_9, off_t VAR_10, int VAR_11, conn_type_t *VAR_12, void *VAR_13) {
  struct aio_connection *VAR_14 = FUNC_3 (sizeof (struct aio_connection));

  if (VAR_7 > 1) {
    FUNC_2 (VAR_6, "in create_aio_read_connection(%d,%p,%lld,%d,%p): allocated at %p\n", VAR_8, VAR_9, (long long) VAR_10, VAR_11, VAR_13, VAR_14);
  }

  VAR_14->fd = VAR_8;
  VAR_14->flags = VAR_0;
  VAR_14->type = VAR_12;
  VAR_14->cb = FUNC_3 (sizeof (struct aiocb));
  VAR_14->first_query = VAR_14->last_query = (struct conn_query *)VAR_14;
  VAR_14->extra = VAR_13;
  VAR_14->basic_type = VAR_5;
  VAR_14->status = VAR_4;

  VAR_14->next = (struct aio_connection *)&VAR_3;
  VAR_14->prev = VAR_3.last;

  VAR_3.last->next = VAR_14;
  VAR_3.last = VAR_14;

  VAR_14->cb->aio_fildes = VAR_8;
  VAR_14->cb->aio_buf = VAR_9;
  VAR_14->cb->aio_offset = VAR_10;
  VAR_14->cb->aio_nbytes = VAR_11;
  VAR_14->cb->aio_sigevent.sigev_notify = VAR_1;
  VAR_14->cb->aio_sigevent.sigev_signo = VAR_2;

  if (FUNC_0 (VAR_14->cb) < 0) {
    FUNC_2 (VAR_6, "aio_read returned -1: %m\n");
    FUNC_1 (3);
  };

  return VAR_14;
}

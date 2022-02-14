
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {scalar_t__ status; int generation; TYPE_4__* type; scalar_t__ flags; TYPE_3__* next; TYPE_2__* prev; struct conn_query* first_query; struct conn_target* target; } ;
struct conn_target {scalar_t__ outbound_connections; scalar_t__ min_connections; scalar_t__ next_reconnect; scalar_t__ refcnt; int active_outbound_connections; } ;
struct conn_query {TYPE_1__* cq_type; } ;
struct TYPE_8__ {int (* free_buffers ) (struct connection*) ;int (* crypto_free ) (struct connection*) ;} ;
struct TYPE_7__ {TYPE_2__* prev; } ;
struct TYPE_6__ {TYPE_3__* next; } ;
struct TYPE_5__ {int (* close ) (struct conn_query*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (struct conn_target*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct conn_target*) ;
 int FUNC_3 (struct conn_query*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct conn_query*) ;
 int FUNC_5 (struct connection*) ;
 int FUNC_6 (struct connection*) ;

int FUNC_7 (struct connection *VAR_5, int VAR_6) {
  struct conn_query *VAR_7;
  struct conn_target *VAR_8 = VAR_5->target;

  FUNC_0 (VAR_5);

  if (VAR_5->first_query) {
    while (VAR_5->first_query != (struct conn_query *) VAR_5) {
      VAR_7 = VAR_5->first_query;
      VAR_7->cq_type->close (VAR_7);
      if (VAR_5->first_query == VAR_7) {
        FUNC_3 (VAR_7);
      }
    }
  }

  if (VAR_5->type->crypto_free) {
    VAR_5->type->crypto_free (VAR_5);
  }

  if (VAR_8) {
    VAR_5->next->prev = VAR_5->prev;
    VAR_5->prev->next = VAR_5->next;
    --VAR_8->outbound_connections;
    --VAR_3;
    if (VAR_5->status != VAR_1) {
      --VAR_8->active_outbound_connections;
      --VAR_0;
    }
    if (VAR_8->outbound_connections < VAR_8->min_connections && VAR_4 >= VAR_8->next_reconnect && VAR_8->refcnt > 0) {
      FUNC_2 (VAR_8);
      if (VAR_8->next_reconnect <= VAR_4) {
        FUNC_1 (VAR_8);
      }
    }
  }

  VAR_5->status = VAR_2;
  VAR_5->flags = 0;
  VAR_5->generation = -1;

  return VAR_5->type->free_buffers(VAR_5);
}

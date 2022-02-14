
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {scalar_t__ status; int generation; scalar_t__ basic_type; TYPE_4__* type; scalar_t__ flags; TYPE_3__* target; TYPE_2__* next; TYPE_2__* prev; struct conn_query* first_query; } ;
struct conn_query {TYPE_1__* cq_type; } ;
struct TYPE_8__ {int (* free_buffers ) (struct connection*) ;int (* crypto_free ) (struct connection*) ;} ;
struct TYPE_7__ {int active_outbound_connections; int outbound_connections; } ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; } ;
struct TYPE_5__ {int (* close ) (struct conn_query*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct connection*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct conn_query*) ;
 int VAR_4 ;
 int FUNC_2 (struct conn_query*) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (struct connection*) ;

int FUNC_5 (struct connection *VAR_5, int VAR_6) {
  struct conn_query *VAR_7;

  FUNC_0 (VAR_5);

  if (VAR_5->first_query) {
    while (VAR_5->first_query != (struct conn_query *) VAR_5) {
      VAR_7 = VAR_5->first_query;
      VAR_7->cq_type->close (VAR_7);
      if (VAR_5->first_query == VAR_7) {
        FUNC_1 (VAR_7);
      }
    }
  }

  if (VAR_5->type->crypto_free) {
    VAR_5->type->crypto_free (VAR_5);
  }

  if (VAR_5->target || VAR_5->next) {
    VAR_5->next->prev = VAR_5->prev;
    VAR_5->prev->next = VAR_5->next;
    VAR_5->prev = VAR_5->next = 0;
  }

  if (VAR_5->target) {
    --VAR_5->target->outbound_connections;
    --VAR_4;
    if (VAR_5->status != VAR_1) {
      --VAR_5->target->active_outbound_connections;
      --VAR_0;
    }
  }

  VAR_5->status = VAR_2;
  VAR_5->flags = 0;
  VAR_5->generation = -1;

  if (VAR_5->basic_type == VAR_3) {
    return 0;
  }

  return VAR_5->type->free_buffers(VAR_5);
}

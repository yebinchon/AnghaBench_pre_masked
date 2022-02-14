
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int total_bytes; int unprocessed_bytes; } ;
struct TYPE_4__ {int total_bytes; int unprocessed_bytes; } ;
struct connection {int fd; int queries_ok; scalar_t__ status; int flags; scalar_t__ pending_queries; scalar_t__ generation; TYPE_2__ Out; TYPE_1__ In; } ;
struct TYPE_6__ {int query_state; int output_packet_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,char*,int,...) ;
 int VAR_6 ;
 void* VAR_7 ;


 int FUNC_4 (struct connection*,int,int,char*,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_5 (struct connection *VAR_10) {
  if (VAR_9 > 1) {
    FUNC_3 (VAR_8, "connection %d wakes up, query_state=%d, queries_ok=%d\n", VAR_10->fd, FUNC_0(VAR_10)->query_state, VAR_10->queries_ok);
  }

  if (!VAR_10->queries_ok) {
    if (VAR_10->status != VAR_5) {
      FUNC_3 (VAR_8, "connection %d (IN: %d+%d, OUT: %d+%d, FLAGS: %d) is in state %ld, conn_wait_net expected!\n", VAR_10->fd, VAR_10->In.total_bytes, VAR_10->In.unprocessed_bytes, VAR_10->Out.total_bytes, VAR_10->Out.unprocessed_bytes, VAR_10->flags, VAR_10->status);
    }
    FUNC_1 (VAR_10->status == VAR_5);
    switch (FUNC_0(VAR_10)->query_state) {
    case 128:
      if (VAR_9 > 1) {
        FUNC_3 (VAR_8, "connection %d: switching query_state to query_failed\n", VAR_10->fd);
      }
      FUNC_0(VAR_10)->query_state = VAR_6;
      break;
    case 129:
      if (VAR_9 > 0) {
        FUNC_3 (VAR_8, "connection %d: sending Failed packet because of timeout\n", VAR_10->fd);
      }
      FUNC_4 (VAR_10, 1045, 28000, "Failed", 6, ++FUNC_0(VAR_10)->output_packet_seq);
      FUNC_0(VAR_10)->query_state = VAR_7;


      break;
    default:
      FUNC_3 (VAR_8, "connection %d awakened in impossible query_state\n", VAR_10->fd);
      FUNC_1 (FUNC_0(VAR_10)->query_state == 128 || FUNC_0(VAR_10)->query_state == 129);
    }
  } else if (FUNC_0(VAR_10)->query_state == 128) {
    if (VAR_9 > 1) {
      FUNC_3 (VAR_8, "connection %d: have ready target, switching query_state from query_wait_target to query_none\n", VAR_10->fd);
    }
    FUNC_0(VAR_10)->query_state = VAR_7;
  }

  FUNC_1 (VAR_10->queries_ok >= 0);
  VAR_10->queries_ok = -1000;

  VAR_10->flags |= VAR_0;

  if (VAR_10->Out.total_bytes + VAR_10->Out.unprocessed_bytes > 0) {
    VAR_10->flags |= VAR_1;
  }

  VAR_10->generation = ++VAR_4;
  VAR_10->pending_queries = 0;

  if (VAR_10->status != VAR_2) {
    VAR_10->status = VAR_3;
  }

  FUNC_2 (VAR_10);
  return 0;
}

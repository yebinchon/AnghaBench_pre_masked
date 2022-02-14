
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sqls_data {int auth_state; int query_state; } ;
struct TYPE_4__ {int total_bytes; int unprocessed_bytes; } ;
struct TYPE_3__ {int total_bytes; int unprocessed_bytes; } ;
struct connection {scalar_t__ basic_type; int fd; int remote_port; int flags; int status; int error; int generation; int skip_bytes; int pending_queries; int ready; int parse_state; double last_response_time; double last_query_sent_time; struct connection* next; TYPE_2__ Out; TYPE_1__ In; int remote_ip; int type; } ;
struct conn_target {scalar_t__ min_connections; struct connection* first_conn; int active_outbound_connections; } ;


 struct connection* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sqls_data* FUNC_0 (struct connection*) ;
 int VAR_5 ;
 struct conn_target* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct conn_target*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (struct connection*,char const*,int) ;
 int FUNC_4 (struct connection*,char const*,int) ;
 int FUNC_5 (struct connection*,char const*,int) ;
 scalar_t__ FUNC_6 (struct connection*,scalar_t__,int) ;
 int FUNC_7 (struct connection*,char const*,scalar_t__,int) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int,char*,int,char*,int,int,int,int,int,int,scalar_t__,int,int,int,int,int,int,int,int ,int,int,double,double) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*,char*,int) ;

int FUNC_12 (struct connection *VAR_11, const char *VAR_12, int VAR_13) {
  if (VAR_13 >= 5 && !FUNC_11 (VAR_12, "stats", 5)) {
    int VAR_14 = FUNC_2 (VAR_11);
    FUNC_7 (VAR_11, VAR_12, VAR_10, VAR_14);
    return 0;
  }

  if (VAR_13 >= 8 && !FUNC_11 (VAR_12, "#inbound", 8)) {
    int VAR_15, VAR_16 = 0;
    for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
      struct connection *VAR_17 = &VAR_0[VAR_15];
      if (VAR_17->basic_type == VAR_8 && VAR_16 < VAR_5 - 1024) {
        struct sqls_data *VAR_18 = FUNC_0(VAR_17);
        VAR_16 += FUNC_9 (VAR_10 + VAR_16, VAR_5 - 6 - VAR_16,
                         "fd = %d, %s:%d, flags = %d , status = %d, err = %d, gen = %d, skip = %d, basic_type = %d\n"
                         "  Inb = %d + %d, Outb = %d + %d, pend = %d, ready = %d, parse_state=%d, type = %p\n"
                         "  auth state = %d, packet_state = %d\n"
                         "  last_response_time = %.6f, last_query_time = %.6f\n",
                         VAR_17->fd, FUNC_8 (VAR_17->remote_ip), VAR_17->remote_port, VAR_17->flags, VAR_17->status, VAR_17->error, VAR_17->generation, VAR_17->skip_bytes, VAR_17->basic_type,
                         VAR_17->In.total_bytes, VAR_17->In.unprocessed_bytes, VAR_17->Out.total_bytes, VAR_17->Out.unprocessed_bytes,
                         VAR_17->pending_queries, VAR_17->ready, VAR_17->parse_state, VAR_17->type,
                         VAR_18->auth_state, VAR_18->query_state,
                         VAR_17->last_response_time, VAR_17->last_query_sent_time);


      }
    }
    FUNC_7 (VAR_11, VAR_12, VAR_10, VAR_16);
    return 0;
  }

  if (VAR_13 >= 9 && !FUNC_11 (VAR_12, "#outbound", 9)) {
    int VAR_19, VAR_20 = 0;
    for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
      struct connection *VAR_21 = &VAR_0[VAR_19];
      if (VAR_21->basic_type == VAR_9 && VAR_20 < VAR_5 - 1024) {
        VAR_20 += FUNC_6 (VAR_21, VAR_10 + VAR_20, VAR_5 - 6 - VAR_20);
      }
    }
    FUNC_7 (VAR_11, VAR_12, VAR_10, VAR_20);
    return 0;
  }


  if (!FUNC_10 (VAR_12, "#bad_targets")) {
    FUNC_3 (VAR_11, VAR_12, VAR_13);
    return 0;
  }

  if (!FUNC_10 (VAR_12, "#bad_connections")) {
    int VAR_22, VAR_23 = 0;
    for (VAR_22 = 0; VAR_22 < VAR_7 && VAR_4 < VAR_3 + VAR_2; VAR_22++) {
      struct conn_target *VAR_24 = &VAR_6[VAR_22];
      FUNC_1 (VAR_24);
      if (VAR_24->min_connections > 0 && !VAR_24->active_outbound_connections) {
        struct connection *VAR_25;
        for (VAR_25 = VAR_24->first_conn; VAR_25 != (struct connection *)VAR_24; VAR_25 = VAR_25->next) {
          if (VAR_25->basic_type == VAR_9 && VAR_23 < VAR_5 - 1024) {
            VAR_23 += FUNC_6 (VAR_25, VAR_10 + VAR_23, VAR_5 - 6 - VAR_23);
          }
        }
      }
    }
    FUNC_7 (VAR_11, VAR_12, VAR_10, VAR_23);
    return 0;
  }

  if (!FUNC_10 (VAR_12, "#targets")) {
    FUNC_5 (VAR_11, VAR_12, VAR_13);
    return 0;
  }

  if (!FUNC_10 (VAR_12, "#connections")) {
    FUNC_4 (VAR_11, VAR_12, VAR_13);
    return 0;
  }

  return 0;
}

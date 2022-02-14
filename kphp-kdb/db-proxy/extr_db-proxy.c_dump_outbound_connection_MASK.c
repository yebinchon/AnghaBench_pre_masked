
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sqlc_data {int auth_state; int response_state; } ;
struct TYPE_4__ {int total_bytes; int unprocessed_bytes; } ;
struct TYPE_3__ {int total_bytes; int unprocessed_bytes; } ;
struct connection {int fd; int remote_port; int flags; int status; int error; int generation; int skip_bytes; int basic_type; int pending_queries; int ready; int parse_state; double last_response_time; double last_query_sent_time; double last_query_time; TYPE_2__ Out; TYPE_1__ In; int remote_ip; int type; } ;


 struct sqlc_data* FUNC_0 (struct connection*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int ,int,int,double,double,double) ;

int FUNC_3 (struct connection *VAR_0, char *VAR_1, int VAR_2) {
  struct sqlc_data *VAR_3 = FUNC_0(VAR_0);
  return FUNC_2 (VAR_1, VAR_2,
                         "fd = %d, %s:%d, flags = %d , status = %d, err = %d, gen = %d, skip = %d, basic_type = %d\n"
                         "  Inb = %d + %d, Outb = %d + %d, pend = %d, ready = %d, parse_state=%d, type = %p\n"
                         "  auth state = %d, packet_state = %d\n"
                         "  last_response_time = %.6f, last_query_sent_time = %.6f, last_query_time = %.6f\n",
                         VAR_0->fd, FUNC_1 (VAR_0->remote_ip), VAR_0->remote_port, VAR_0->flags, VAR_0->status, VAR_0->error, VAR_0->generation, VAR_0->skip_bytes, VAR_0->basic_type,
                         VAR_0->In.total_bytes, VAR_0->In.unprocessed_bytes, VAR_0->Out.total_bytes, VAR_0->Out.unprocessed_bytes,
                         VAR_0->pending_queries, VAR_0->ready, VAR_0->parse_state, VAR_0->type,
                         VAR_3->auth_state, VAR_3->response_state,
                         VAR_0->last_response_time, VAR_0->last_query_sent_time, VAR_0->last_query_time);

}

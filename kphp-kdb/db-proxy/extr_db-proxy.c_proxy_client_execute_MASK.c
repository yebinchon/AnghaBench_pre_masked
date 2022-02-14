
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlc_data {int packet_len; int response_state; int extra_flags; } ;
struct connection {scalar_t__ generation; int fd; void* status; struct conn_query* first_query; int last_response_time; int In; } ;
struct conn_query {scalar_t__ req_generation; struct connection* requester; } ;
typedef int nb_iterator_t ;


 int VAR_0 ;
 struct sqlc_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ) ;
 void* VAR_1 ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (struct connection*,int,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int *) ;
 int VAR_2 ;
 int FUNC_7 (struct connection*,int) ;




 int VAR_3 ;
 scalar_t__ FUNC_8 (struct connection*) ;
 int VAR_4 ;

int FUNC_9 (struct connection *VAR_5, int VAR_6) {
  struct sqlc_data *VAR_7 = FUNC_0(VAR_5);
  static char VAR_8[8];
  int VAR_9, VAR_10 = -1;
  nb_iterator_t VAR_11;

  FUNC_6 (&VAR_11, &VAR_5->In);
  VAR_9 = FUNC_5 (&VAR_11, VAR_8, 8);

  if (VAR_9 >= 5) {
    VAR_10 = VAR_8[4] & 0xff;
  }

  if (VAR_4 > 0) {
    FUNC_4 (VAR_3, "proxy_db_client: op=%d, packet_len=%d, response_state=%d, field_num=%d\n", VAR_6, VAR_7->packet_len, VAR_7->response_state, VAR_10);
  }

  if (VAR_5->first_query == (struct conn_query *)VAR_5) {
    if (VAR_4 >= 0) {
      FUNC_4 (VAR_3, "response received for empty query list? op=%d\n", VAR_6);
      if (VAR_4 > -2) {
        FUNC_2 (VAR_5);
        if (VAR_5->first_query != (struct conn_query *) VAR_5 && VAR_5->first_query->req_generation == VAR_5->first_query->requester->generation) {
          FUNC_2 (VAR_5->first_query->requester);
        }
      }
    }
    return VAR_0;
  }

  VAR_5->last_response_time = VAR_2;

  if (FUNC_8 (VAR_5)) {
    return 0;
  }

  switch (VAR_7->response_state) {
  case 130:
    FUNC_3 (VAR_5, VAR_7->packet_len, FUNC_0(VAR_5)->extra_flags & 1);
    if (VAR_10 == 0 && (FUNC_0(VAR_5)->extra_flags & 1)) {
      FUNC_0(VAR_5)->extra_flags |= 2;
      if (VAR_5->first_query->requester->generation != VAR_5->first_query->req_generation) {
        if (VAR_4 > 0) {
          FUNC_4 (VAR_3, "outbound connection %d: nowhere to forward replication stream, closing\n", VAR_5->fd);
        }
        VAR_5->status = VAR_1;
      }
    } else if (VAR_10 == 0 || VAR_10 == 0xff) {
      VAR_7->response_state = 131;
    } else if (VAR_10 < 0 || VAR_10 >= 0xfe) {
      VAR_5->status = VAR_1;
    } else {
      VAR_7->response_state = 129;
    }
    break;
  case 129:
    FUNC_3 (VAR_5, VAR_7->packet_len, 0);
    if (VAR_10 == 0xfe) {
      VAR_7->response_state = 128;
    }
    break;
  case 128:
    FUNC_3 (VAR_5, VAR_7->packet_len, 0);
    if (VAR_10 == 0xfe) {
      VAR_7->response_state = 131;
    }
    break;
  case 131:
    FUNC_4 (VAR_3, "unexpected packet from server!\n");
    FUNC_1 (0);
  }

  if (VAR_7->response_state == 131) {
    FUNC_7 (VAR_5, 1);
  }

  return 0;
}

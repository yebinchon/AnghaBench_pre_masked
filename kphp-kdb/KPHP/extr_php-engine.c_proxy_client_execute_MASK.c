
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sqlc_data {int packet_len; int response_state; int extra_flags; } ;
struct connection {int unreliability; void* last_query_sent_time; void* last_query_time; void* status; void* ready; struct conn_query* first_query; int In; int fd; void* last_response_time; } ;
struct conn_query {int req_generation; TYPE_1__* requester; } ;
typedef int nb_iterator_t ;
struct TYPE_6__ {int readed; } ;
typedef TYPE_2__ data_reader_t ;
struct TYPE_5__ {int generation; } ;


 int VAR_0 ;
 struct sqlc_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_2__* FUNC_3 (struct connection*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct connection*,int) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,int *) ;
 void* VAR_4 ;




 int FUNC_8 (struct conn_query*) ;
 int FUNC_9 (struct conn_query*,TYPE_2__*) ;
 int FUNC_10 (struct connection*) ;
 scalar_t__ FUNC_11 (struct connection*) ;
 int FUNC_12 (int,char*,...) ;

int FUNC_13 (struct connection *VAR_5, int VAR_6) {
  struct sqlc_data *VAR_7 = FUNC_0(VAR_5);
  static char VAR_8[8];
  int VAR_9, VAR_10 = -1;
  nb_iterator_t VAR_11;

  FUNC_7 (&VAR_11, &VAR_5->In);
  VAR_9 = FUNC_6 (&VAR_11, VAR_8, 8);

  if (VAR_9 >= 5) {
    VAR_10 = VAR_8[4] & 0xff;
  }

  FUNC_12 (1, "proxy_db_client: op=%d, packet_len=%d, response_state=%d, field_num=%d\n", VAR_6, VAR_7->packet_len, VAR_7->response_state, VAR_10);

  if (VAR_5->first_query == (struct conn_query *)VAR_5) {
    FUNC_12 (-1, "response received for empty query list? op=%d\n", VAR_6);
    return VAR_0;
  }

  VAR_5->last_response_time = VAR_4;

  if (FUNC_11 (VAR_5)) {
    return 0;
  }

  int VAR_12 = VAR_7->packet_len + 4;
  data_reader_t *VAR_13 = FUNC_3 (VAR_5, VAR_12);

  int VAR_14;
  switch (VAR_7->response_state) {
  case 130:

    VAR_14 = FUNC_9 (VAR_5->first_query, VAR_13);

    if (!VAR_13->readed) {
      FUNC_2 (FUNC_1 (&VAR_5->In, VAR_12) == VAR_12);
    }

    if (VAR_14) {
      FUNC_5 (VAR_5, -6);
      VAR_5->ready = VAR_3;
      return 0;
    }

    if (VAR_10 == 0 && (FUNC_0(VAR_5)->extra_flags & 1)) {
      FUNC_4 ("looks like unused code");
      FUNC_0(VAR_5)->extra_flags |= 2;
      if (VAR_5->first_query->requester->generation != VAR_5->first_query->req_generation) {
        FUNC_12 (1, "outbound connection %d: nowhere to forward replication stream, closing\n", VAR_5->fd);
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

    VAR_14 = FUNC_9 (VAR_5->first_query, VAR_13);
    if (!VAR_13->readed) {
      FUNC_2 (FUNC_1 (&VAR_5->In, VAR_12) == VAR_12);
    }

    if (VAR_14) {
      FUNC_5 (VAR_5, -7);
      VAR_5->ready = VAR_3;
      return 0;
    }

    if (VAR_10 == 0xfe) {
      VAR_7->response_state = 128;
    }
    break;
  case 128:

    VAR_14 = FUNC_9 (VAR_5->first_query, VAR_13);
    if (!VAR_13->readed) {
      FUNC_2 (FUNC_1 (&VAR_5->In, VAR_12) == VAR_12);
    }
    if (VAR_14) {
      FUNC_5 (VAR_5, -8);
      VAR_5->ready = VAR_3;
      return 0;
    }
    if (VAR_10 == 0xfe) {
      VAR_7->response_state = 131;
    }
    break;
  case 131:
    FUNC_12 (-1, "unexpected packet from server!\n");
    FUNC_2 (0);
  }

  if (VAR_7->response_state == 131) {

    VAR_14 = FUNC_8 (VAR_5->first_query);
    if (VAR_14) {
      FUNC_5 (VAR_5, -9);
      VAR_5->ready = VAR_3;
      return 0;
    }


    VAR_5->unreliability >>= 1;
    VAR_5->status = VAR_2;
    VAR_5->last_query_time = VAR_4 - VAR_5->last_query_sent_time;

    FUNC_10 (VAR_5);
  }

  return 0;
}

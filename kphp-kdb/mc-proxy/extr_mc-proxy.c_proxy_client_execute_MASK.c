
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcc_data {int key_len; int arg_num; int response_len; int response_flags; int* args; int key_offset; } ;
struct TYPE_2__ {int total_bytes; } ;
struct connection {scalar_t__ generation; int unreliability; int fd; int remote_port; struct conn_query* first_query; int ready; int remote_ip; TYPE_1__ In; int Q; int last_response_time; } ;
struct conn_query {scalar_t__ req_generation; int custom_type; scalar_t__ extra; struct connection* requester; } ;
typedef int nb_iterator_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct mcc_data* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 char* FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct connection*) ;
 int VAR_6 ;
 int FUNC_4 (struct connection*,int) ;
 int FUNC_5 (struct connection*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_12 (struct connection*,int) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (struct connection*,int ) ;
 int FUNC_15 (struct connection*,struct conn_query*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

int FUNC_16 (struct connection *VAR_18, int VAR_19) {
  struct mcc_data *VAR_20 = FUNC_0(VAR_18);
  int VAR_21, VAR_22 = 0;
  char *VAR_23;

  int VAR_24 = 0, VAR_25 = 0;

  if (VAR_17 > 0) {
    FUNC_6 (VAR_15, "proxy_mc_client: op=%d, key_len=%d, arg#=%d, response_len=%d\n", VAR_19, VAR_20->key_len, VAR_20->arg_num, VAR_20->response_len);
  }

  if (VAR_18->first_query == (struct conn_query *)VAR_18 && VAR_19 != 128 && VAR_19 != 129) {
    if (VAR_17 >= 0) {
      FUNC_6 (VAR_15, "response received for empty query list? op=%d\n", VAR_19);
      if (VAR_17 > -2) {
        FUNC_3 (VAR_18);
        if (VAR_18->first_query != (struct conn_query *) VAR_18 && VAR_18->first_query->req_generation == VAR_18->first_query->requester->generation) {
          FUNC_3 (VAR_18->first_query->requester);
        }
      }
    }
    VAR_20->response_flags |= 16;
    return VAR_3;
  }

  if (VAR_18->first_query != (struct conn_query *) VAR_18 && VAR_19 != 128 && VAR_19 != 129) {
    VAR_24 = VAR_18->first_query->custom_type & 0x1000;
    VAR_25 = VAR_18->first_query->custom_type & 0x2000;
    VAR_18->first_query->custom_type &= 0xfff;
  }

  VAR_18->last_response_time = VAR_14;

  switch (VAR_19) {

  case 128:
    return VAR_3;

  case 130:

    if (VAR_20->key_len > 0 && VAR_20->key_len <= VAR_0 && VAR_20->arg_num == 2 && (unsigned) VAR_20->args[1] <= VAR_1) {
      int VAR_26 = VAR_20->args[1] + VAR_20->response_len + 2 - VAR_18->In.total_bytes;
      if (VAR_26 > 0) {
        return VAR_26;
      }
      FUNC_7 (&VAR_18->Q, VAR_20->args[1]);
      VAR_21 = FUNC_10 (&VAR_18->Q);
      FUNC_1 (VAR_21 > 0);
      VAR_23 = FUNC_8 (&VAR_18->Q);
    } else {
      FUNC_6 (VAR_15, "error at VALUE: op=%d, key_len=%d, arg_num=%d, value_len=%d\n", VAR_19, VAR_20->key_len, VAR_20->arg_num, VAR_20->args[1]);

      if (VAR_17 > -2) {
        FUNC_3 (VAR_18);
        if (VAR_18->first_query != (struct conn_query *) VAR_18 && VAR_18->first_query->req_generation == VAR_18->first_query->requester->generation) {
          FUNC_3 (VAR_18->first_query->requester);
        }
      }

      VAR_20->response_flags |= 16;
      return VAR_3;
    }
    if (VAR_21 == 1) {
      FUNC_7 (&VAR_18->Q, 1);
    }
    if (VAR_23[0] != '\r' || (VAR_21 > 1 ? VAR_23[1] : *((char *) FUNC_8(&VAR_18->Q))) != '\n') {
      FUNC_6 (VAR_15, "missing cr/lf at VALUE: op=%d, key_len=%d, arg_num=%d, value_len=%d\n", VAR_19, VAR_20->key_len, VAR_20->arg_num, VAR_20->args[1]);

      if (VAR_17 > -2) {
        FUNC_3 (VAR_18);
        if (VAR_18->first_query != (struct conn_query *) VAR_18 && VAR_18->first_query->req_generation == VAR_18->first_query->requester->generation) {
          FUNC_3 (VAR_18->first_query->requester);
        }
      }

      VAR_20->response_flags |= 16;
      return VAR_3;
    }
    VAR_21 = 2;

    if (VAR_17 > 0) {
      FUNC_6 (VAR_15, "mcc_value: op=%d, key_len=%d, flags=%d, time=%d, value_len=%d\n", VAR_19, VAR_20->key_len, VAR_20->args[0], VAR_20->args[1], VAR_20->args[2]);
    }

    if (VAR_18->first_query->custom_type != VAR_10 || VAR_24) {
      FUNC_6 (VAR_15, "VALUE obtained for a non-get query: op=%d, query_type=%d, key_len=%d, arg_num=%d, value_len=%d, get_allows_stored=%d\n", VAR_19, VAR_18->first_query->custom_type, VAR_20->key_len, VAR_20->arg_num, VAR_20->args[1], VAR_24);
      VAR_20->response_flags |= 16;
      return VAR_3;
    }

    int VAR_27 = 0;
    if (!VAR_27) {
      FUNC_5 (VAR_18, VAR_20->response_len + VAR_20->args[1] + VAR_21);
    } else {



      FUNC_1 (0);

    }

    return 0;

  case 129:

    VAR_18->unreliability >>= 1;
    if (VAR_17 > 0) {
      FUNC_6 (VAR_15, "mcc_got_version: op=%d, key_len=%d, unreliability=%d\n", VAR_19, VAR_20->key_len, VAR_18->unreliability);
    }

    return VAR_3;

  case 139:
    FUNC_6 (VAR_15, "CLIENT_ERROR received from connection %d (%s:%d)\n", VAR_18->fd, FUNC_2 (VAR_18->remote_ip, 0), VAR_18->remote_port);
    VAR_4++;
  case 136:
    VAR_6++;
    if (VAR_17 > -2 && VAR_6 < 32) {
      FUNC_3 (VAR_18);
      if (VAR_18->first_query != (struct conn_query *) VAR_18 && VAR_18->first_query->req_generation == VAR_18->first_query->requester->generation) {
        FUNC_3 (VAR_18->first_query->requester);
      }
    }
    FUNC_4 (VAR_18, -5);
    VAR_18->ready = VAR_5;
    return VAR_3;
  case 132:
    VAR_22 = -1 & (~(1 << VAR_10));
    break;

  case 133:
    VAR_22 = (1 << VAR_11) | (1 << VAR_8);
    break;

  case 131:
  case 134:
    VAR_22 = (1 << VAR_13) | (1 << VAR_7) | (1 << VAR_12);
    if (VAR_24) {
      VAR_22 |= (1 << VAR_10);
    }
    break;

  case 138:
    VAR_22 = 1 << VAR_9;
    break;

  case 135:
    VAR_22 = (1 << VAR_9) | (1 << VAR_11) | (1 << VAR_8);
    break;

  case 137:
    VAR_22 = 1 << VAR_10;
    break;

  default:
    VAR_22 = 0;
  }
  if (VAR_20->key_len || VAR_20->arg_num != (VAR_19 == 133) || ((1 << VAR_18->first_query->custom_type) & VAR_22) == 0) {
    FUNC_6 (VAR_15, "INCORRECT response obtained for a query: op=%d, query_type=%d, key_len=%d, arg_num=%d, allowed_mask=%d\n", VAR_19, VAR_18->first_query->custom_type, VAR_20->key_len, VAR_20->arg_num, VAR_22);
    VAR_20->response_flags |= 16;
    return VAR_3;
  }

  if (VAR_17 > 0) {
    FUNC_6 (VAR_15, "mcc_op: op=%d, key_len=%d, arg=%d\n", VAR_19, VAR_20->key_len, VAR_20->args[0]);
  }

  if (VAR_18->first_query->custom_type == VAR_10 && (VAR_19 == 131 || VAR_19 == 134)) {
    if (VAR_17 > 1) {
      FUNC_6 (VAR_15, "STORED/NOT_STORED response for get, skipping\n");
    }
    return VAR_3;
  }

  if (VAR_25) {
    if (VAR_17 > 1) {
      FUNC_6 (VAR_15, "STORED/NOT_STORED/DELETED/... response (%d) for immediate/diagonal distribution query, skipping\n", VAR_19);
    }
    ++VAR_16;
    FUNC_12 (VAR_18, 1);
    return VAR_3;
  }

  if (VAR_18->first_query->custom_type == VAR_10 || VAR_19 == 137) {
    FUNC_12 (VAR_18, VAR_19 == 137);
    return VAR_3;
  }

  FUNC_5 (VAR_18, VAR_20->response_len);
  FUNC_12 (VAR_18, 1);

  return 0;
}

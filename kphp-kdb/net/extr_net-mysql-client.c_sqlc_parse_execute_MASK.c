
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sqlc_data {int packet_state; int packet_len; unsigned int packet_seq; int block_size; int packet_padding; scalar_t__ auth_state; int crypto_flags; } ;
struct TYPE_6__ {int total_bytes; } ;
struct connection {int fd; int status; int flags; int error; int remote_port; int Q; TYPE_1__ In; int remote_ip; int last_response_time; } ;
struct TYPE_7__ {int (* execute ) (struct connection*,int) ;int (* sql_becomes_ready ) (struct connection*) ;scalar_t__ (* sql_authorized ) (struct connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sqlc_data* FUNC_0 (struct connection*) ;
 TYPE_5__* FUNC_1 (struct connection*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned int*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 char* FUNC_12 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_13 (struct connection*) ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (struct connection*) ;
 int FUNC_15 (struct connection*) ;
 int FUNC_16 (struct connection*,int) ;
 int VAR_14 ;

int FUNC_17 (struct connection *VAR_15) {
  struct sqlc_data *VAR_16 = FUNC_0(VAR_15);
  int VAR_17 = FUNC_11 (&VAR_15->Q);
  static unsigned int VAR_18;
  if (VAR_14 > 1) {
    FUNC_4 (VAR_13, "sqlc_parse_execute(%d), status=%d, bytes=%d, packet_state=%d, packet_len=%d\n", VAR_15->fd, VAR_15->status, VAR_17, VAR_16->packet_state, VAR_16->packet_len);
  }
  char *VAR_19;

  while (VAR_17 > 0 && !(VAR_15->flags & (VAR_0 | VAR_1))) {
    VAR_15->status = VAR_4;
    if (VAR_16->packet_state == 0) {
      if (VAR_17 < 4) {
        return 4 - VAR_17;
      }
      FUNC_3 (FUNC_8 (&VAR_15->Q, &VAR_18, 4) == 4);
      VAR_17 -= 4;
      VAR_16->packet_state = 1;
      VAR_16->packet_len = VAR_18 & 0xffffff;
      VAR_16->packet_seq = (VAR_18 >> 24);
      if (VAR_16->block_size > 1) {
        VAR_16->packet_padding = VAR_16->block_size - (VAR_16->packet_len + 4) % VAR_16->block_size;
        if (VAR_16->packet_padding == VAR_16->block_size) {
          VAR_16->packet_padding = 0;
        }
      }
    }
    FUNC_3 (VAR_16->packet_state == 1);
    if (VAR_17 < VAR_16->packet_len + VAR_16->packet_padding) {
      return VAR_16->packet_len + VAR_16->packet_padding - VAR_17;
    }

    VAR_15->last_response_time = VAR_8;
    if (VAR_14 > 1) {
      FUNC_4 (VAR_13, "client packet ready: len=%d, seq_num=%d\n", VAR_16->packet_len, VAR_16->packet_seq);
    }
    if (VAR_16->auth_state == VAR_12) {
      int VAR_20 = FUNC_13(VAR_15);
      if (VAR_20 < 0) {
        VAR_15->status = VAR_3;
        VAR_15->error = -1;
        return 0;
      }
      VAR_16->auth_state = VAR_11;
      FUNC_2 (&VAR_15->In, VAR_16->packet_len + VAR_16->packet_padding + 4);
      if ((VAR_16->crypto_flags & 10) == 10) {
        FUNC_6 (&VAR_15->In);
      }
      FUNC_10 (&VAR_15->Q, &VAR_15->In);
      VAR_17 = FUNC_9 (&VAR_15->Q);
    } else
    if (VAR_16->auth_state == VAR_11) {

      VAR_19 = ((char *)FUNC_5 (&VAR_15->In)) + 4;
      if (VAR_16->packet_len == 0 || *VAR_19) {
        VAR_15->status = VAR_3;
        VAR_15->error = -1;
        FUNC_4 (VAR_13, "ok packet expected in response to authentification from connection %d (%s:%d)\n", VAR_15->fd, FUNC_12 (VAR_15->remote_ip), VAR_15->remote_port);
        return 0;
      }
      VAR_16->auth_state = VAR_10;
      FUNC_2 (&VAR_15->In, VAR_16->packet_len + VAR_16->packet_padding + 4);

      if (FUNC_1(VAR_15)->sql_authorized (VAR_15)) {
        VAR_15->status = VAR_3;
        VAR_15->error = -1;
        if (VAR_14 > 1) {
          FUNC_4 (VAR_13, "sql authorisation failed\n");
        }
        return 0;
      }

      if (VAR_14 > 1) {
        FUNC_4 (VAR_13, "outcoming authorization successful\n");
      }

    } else
    if (VAR_16->auth_state == VAR_9) {
      VAR_19 = ((char *)FUNC_5 (&VAR_15->In)) + 4;
      if (VAR_16->packet_len == 0 || *VAR_19) {
        VAR_15->status = VAR_3;
        VAR_15->error = -1;
        if (VAR_14 > 1) {
          FUNC_4 (VAR_13, "ok packet expected in response to initdb\n");
        }
        return 0;
      }
      VAR_16->auth_state = VAR_10;
      FUNC_2 (&VAR_15->In, VAR_16->packet_len + VAR_16->packet_padding + 4);
      VAR_15->status = VAR_5;
      VAR_16->packet_state = 0;






      if (VAR_14 > 1) {
        FUNC_4 (VAR_13, "outcoming initdb successful\n");
      }
      FUNC_1(VAR_15)->sql_becomes_ready (VAR_15);
      return 0;
    } else {
      int VAR_21 = (VAR_16->packet_len > 0 ? *(char *) FUNC_7 (&VAR_15->Q) : -1);

      FUNC_3 (VAR_16->auth_state == VAR_10);


      if (VAR_14 > 1) {
        FUNC_4 (VAR_13, "execute, op=%d\n", VAR_21);
      }

      int VAR_22 = VAR_15->In.total_bytes;


      VAR_15->status = VAR_6;
      int VAR_23 = FUNC_1(VAR_15)->execute (VAR_15, VAR_21);



      if (VAR_23 == VAR_2) {

        if (VAR_22 != VAR_15->In.total_bytes) {
          FUNC_4 (VAR_13, "error: in SKIP_ALL_BYTES for connection %d: keep_total=%d != total_bytes=%d, packet_len=%d, packet_padding=%d, packet_state=%d, packet_seq=%d, op=%d, status=%d\n",
                VAR_15->fd, VAR_22, VAR_15->In.total_bytes, VAR_16->packet_len, VAR_16->packet_padding, VAR_16->packet_state, VAR_16->packet_seq, VAR_21, VAR_15->status);
        }
        FUNC_2 (&VAR_15->In, VAR_16->packet_len + VAR_16->packet_padding + 4);
      } else if (VAR_22 != VAR_15->In.total_bytes) {
        FUNC_3 (VAR_22 == VAR_15->In.total_bytes + VAR_16->packet_len + 4);
        FUNC_2 (&VAR_15->In, VAR_16->packet_padding);
      }
    }
    FUNC_10 (&VAR_15->Q, &VAR_15->In);
    VAR_17 = FUNC_9 (&VAR_15->Q);
    VAR_16->packet_state = 0;
    if (VAR_15->status == VAR_6) {
      VAR_15->status = VAR_7;
    }
  }

  return 0;
}

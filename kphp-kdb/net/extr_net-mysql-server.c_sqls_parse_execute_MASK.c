
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sqls_data {int packet_state; unsigned int packet_len; unsigned int output_packet_seq; unsigned int packet_seq; int block_size; int packet_padding; scalar_t__ auth_state; int crypto_flags; int auth_user; } ;
struct TYPE_7__ {int total_bytes; scalar_t__ pptr; } ;
struct connection {int fd; int flags; int status; int error; int Q; TYPE_2__ In; TYPE_1__* type; scalar_t__ crypto; } ;
struct TYPE_8__ {int (* sql_start_crypto ) (struct connection*,char*,int) ;int (* execute ) (struct connection*,int) ;} ;
struct TYPE_6__ {int (* crypto_decrypt_input ) (struct connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sqls_data* FUNC_0 (struct connection*) ;
 TYPE_5__* FUNC_1 (struct connection*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int*,int) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,char*,int) ;
 int FUNC_10 (struct connection*,int,int,char*,int,int) ;
 int FUNC_11 (struct connection*,int ,int ,int,int ,char*,int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (struct connection*) ;
 int VAR_9 ;
 int FUNC_13 (struct connection*,char*,int) ;
 int FUNC_14 (struct connection*) ;
 int FUNC_15 (struct connection*,int) ;
 int VAR_10 ;

int FUNC_16 (struct connection *VAR_11) {
  struct sqls_data *VAR_12 = FUNC_0(VAR_11);
  int VAR_13 = FUNC_8 (&VAR_11->Q);
  static unsigned int VAR_14;
  if (VAR_10 > 1) {
    FUNC_4 (VAR_9, "sqls_parse_execute(%d), bytes=%d\n", VAR_11->fd, VAR_13);
  }

  while (VAR_13 > 0 && !(VAR_11->flags & (VAR_0 | VAR_1))) {
    VAR_11->status = VAR_5;
    if (VAR_12->packet_state == 0) {
      if (VAR_13 < 4) {
        return 4 - VAR_13;
      }
      FUNC_3 (FUNC_6 (&VAR_11->Q, &VAR_14, 4) == 4);
      VAR_13 -= 4;
      VAR_12->packet_state = 1;
      VAR_12->packet_len = VAR_14 & 0xffffff;
      VAR_12->output_packet_seq = VAR_12->packet_seq = (VAR_14 >> 24);
      if (VAR_12->block_size > 1) {
        VAR_12->packet_padding = VAR_12->block_size - (VAR_12->packet_len + 4) % VAR_12->block_size;
        if (VAR_12->packet_padding == VAR_12->block_size) {
          VAR_12->packet_padding = 0;
        }
      }
    }
    FUNC_3 (VAR_12->packet_state == 1);
    if (VAR_13 < VAR_12->packet_len + VAR_12->packet_padding) {
      return VAR_12->packet_len + VAR_12->packet_padding - VAR_13;
    }

    if (VAR_10 > 1) {
      FUNC_4 (VAR_9, "client packet ready: len=%d, padding=%d, seq_num=%d\n", VAR_12->packet_len, VAR_12->packet_padding, VAR_12->packet_seq);
    }
    if (VAR_12->auth_state == VAR_8) {
      int VAR_15;
      if (VAR_12->packet_len == 16 && VAR_12->packet_seq == 0xcc && (VAR_12->crypto_flags & 14) == 6) {
        static char VAR_16[20];
        FUNC_3 (FUNC_9 (&VAR_11->In, VAR_16, VAR_12->packet_len + 4) == 20);
        VAR_15 = FUNC_1(VAR_11)->sql_start_crypto (VAR_11, VAR_16 + 4, 16);
        if (VAR_15 != 1) {
          VAR_15 = -1;
        } else {
          VAR_12->crypto_flags = (VAR_12->crypto_flags & -16) | 10;
          FUNC_3 (VAR_11->type->crypto_decrypt_input && VAR_11->crypto && VAR_11->In.pptr);
          VAR_11->type->crypto_decrypt_input (VAR_11);
          FUNC_7 (&VAR_11->Q, &VAR_11->In);
          VAR_13 = FUNC_8 (&VAR_11->Q);
          VAR_12->packet_state = 0;
          VAR_11->status = VAR_4;
          continue;
        }
      } else {
        if (VAR_12->crypto_flags & 4) {
          VAR_12->crypto_flags &= ~6;
          if (!(VAR_12->crypto_flags & 1)) {
            VAR_11->status = VAR_3;
            VAR_11->error = -1;
            return 0;
          }
        }
        VAR_15 = FUNC_12(VAR_11);
      }
      if (VAR_15 < 0) {
        VAR_11->status = VAR_3;
        VAR_11->error = -1;
        return 0;
      }
      if (VAR_15) {

        FUNC_11 (VAR_11, 0, 0, 2, 0, "Success", 7, 2);
        if (VAR_10 > 1) {
          FUNC_4 (VAR_9, "authorized ok\n");
        }
        VAR_12->auth_state = VAR_7;
        VAR_12->auth_user = VAR_15;
      } else {
        if (VAR_10 > 1) {
          FUNC_4 (VAR_9, "authorization error\n");
        }
        FUNC_10 (VAR_11, 1045, 28000, "Failed", 6, 2);

      }
      FUNC_2 (&VAR_11->In, VAR_12->packet_len + VAR_12->packet_padding + 4);
    } else {
      int VAR_17 = (VAR_12->packet_len > 0 ? *(char *) FUNC_5 (&VAR_11->Q) : -1);

      FUNC_3 (VAR_12->auth_state == VAR_7);

      if (VAR_10 > 1) {
        FUNC_4 (VAR_9, "execute, op=%d\n", VAR_17);
      }

      int VAR_18 = VAR_11->In.total_bytes;


      VAR_11->status = VAR_6;
      int VAR_19 = FUNC_1(VAR_11)->execute (VAR_11, VAR_17);



      if (VAR_19 == VAR_2) {

        if (VAR_18 != VAR_11->In.total_bytes) {
          FUNC_4 (VAR_9, "error: in SKIP_ALL_BYTES for connection %d: keep_total=%d != total_bytes=%d, packet_len=%d, packet_padding=%d, packet_state=%d, packet_seq=%d, op=%d, status=%d\n",
                VAR_11->fd, VAR_18, VAR_11->In.total_bytes, VAR_12->packet_len, VAR_12->packet_padding, VAR_12->packet_state, VAR_12->packet_seq, VAR_17, VAR_11->status);
        }
        FUNC_2 (&VAR_11->In, VAR_12->packet_len + VAR_12->packet_padding + 4);
      } else if (VAR_18 != VAR_11->In.total_bytes) {
        FUNC_3 (VAR_18 == VAR_11->In.total_bytes + VAR_12->packet_len + 4);
        FUNC_2 (&VAR_11->In, VAR_12->packet_padding);
      }
      if (VAR_11->status == VAR_6) {
        VAR_11->status = VAR_4;
      }
    }
    VAR_12->packet_state = 0;
    if (VAR_11->status != VAR_4) {
      break;
    }
    FUNC_7 (&VAR_11->Q, &VAR_11->In);
    VAR_13 = FUNC_8 (&VAR_11->Q);
  }

  return 0;
}

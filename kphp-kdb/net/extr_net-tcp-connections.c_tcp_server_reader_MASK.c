
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct raw_message {scalar_t__ last_offset; int total_bytes; struct msg_part* last; scalar_t__ first_offset; struct msg_part* first; } ;
struct msg_part {int offset; int len; struct msg_part* next; TYPE_2__* part; } ;
struct msg_buffer {int data; TYPE_3__* chunk; } ;
struct connection {scalar_t__ crypto; int flags; int status; int skip_bytes; scalar_t__ basic_type; int fd; TYPE_4__* type; scalar_t__ error; scalar_t__ parse_state; struct raw_message in; struct raw_message in_u; } ;
struct TYPE_11__ {int iov_len; int iov_base; } ;
struct TYPE_10__ {scalar_t__ (* crypto_decrypt_input ) (struct connection*) ;scalar_t__ (* crypto_encrypt_output ) (struct connection*) ;int (* parse_execute ) (struct connection*) ;} ;
struct TYPE_9__ {int buffer_size; } ;
struct TYPE_8__ {int data; TYPE_1__* chunk; } ;
struct TYPE_7__ {scalar_t__ buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct msg_buffer* FUNC_0 (struct msg_buffer*,int ) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct raw_message*) ;
 int FUNC_4 (int ,char*,int,int,...) ;
 struct msg_part* FUNC_5 (int ,struct msg_buffer*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int,TYPE_5__*,scalar_t__) ;
 int FUNC_10 (struct raw_message*) ;
 int FUNC_11 (struct raw_message*,int ,int) ;
 int VAR_16 ;
 scalar_t__ FUNC_12 (struct connection*) ;
 scalar_t__ FUNC_13 (struct connection*) ;
 scalar_t__ FUNC_14 (struct connection*) ;
 int FUNC_15 (struct connection*) ;
 scalar_t__ FUNC_16 (struct connection*) ;
 struct msg_buffer** VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_5__* VAR_20 ;
 int VAR_21 ;
 int FUNC_17 (int,char*,...) ;

int FUNC_18 (struct connection *VAR_22) {
  int VAR_23 = 0, VAR_24, VAR_25, VAR_26;

  struct raw_message *VAR_27 = VAR_22->crypto ? &VAR_22->in_u : &VAR_22->in;
  struct raw_message *VAR_28 = &VAR_22->in;

  while (1) {

    int VAR_29 = (VAR_22->flags & VAR_4) && !(VAR_22->flags & (VAR_1 | VAR_0 | VAR_3)) && !VAR_22->error;

    int VAR_30 = (VAR_22->flags & VAR_2) && (VAR_22->status == VAR_9 || VAR_22->status == VAR_11 || VAR_22->status == VAR_12 || VAR_22->status == VAR_10) && !VAR_22->skip_bytes;
    if (!VAR_29 && !VAR_30) {
      break;
    }

    if (VAR_29) {

      if (VAR_22->status == VAR_13) {
        FUNC_10 (&VAR_22->in);
        FUNC_10 (&VAR_22->in_u);
        VAR_22->flags &= ~VAR_4;
        break;
      }

      if (!VAR_18) {
        FUNC_7 ();
      }

      if (VAR_27->last && VAR_27->last->next) {
        FUNC_3 (VAR_27);
      }
      int VAR_31;
      if (VAR_22->basic_type != VAR_14) {
        VAR_26 = VAR_19;
        if (VAR_27->last && VAR_27->last_offset != VAR_27->last->part->chunk->buffer_size) {
          VAR_20[0].iov_len = VAR_27->last->part->chunk->buffer_size - VAR_27->last_offset;
          VAR_20[0].iov_base = VAR_27->last->part->data + VAR_27->last_offset;
          VAR_31 = 0;
        } else {
          VAR_31 = 1;
        }
        VAR_24 = FUNC_9 (VAR_22->fd, VAR_20 + VAR_31, VAR_6 + 1 - VAR_31);
      } else {
        VAR_31 = 1;
        VAR_26 = VAR_20[1].iov_len;
        VAR_24 = FUNC_8 (VAR_22->fd, VAR_20[1].iov_base, VAR_20[1].iov_len);
      }

      if (VAR_24 < VAR_26) {
        VAR_22->flags |= VAR_1;
      }

      if (VAR_21 > 0) {
        FUNC_4 (VAR_16, "recv() from %d: %d read out of %d. Crypto = %d\n", VAR_22->fd, VAR_24, VAR_26, VAR_22->crypto != 0);
        if (VAR_24 < 0 && VAR_15 != VAR_5) {
          FUNC_6 ("recv()");
        }
      }

      if (VAR_24 > 0) {
        struct msg_part *VAR_32 = 0;
        if (!VAR_27->last) {
          FUNC_1 (VAR_31 == 1);
          VAR_32 = FUNC_5 (0, VAR_17[VAR_31 - 1]);
          FUNC_1 (VAR_17[VAR_31 - 1]->data == VAR_20[VAR_31].iov_base);
          VAR_32->offset = 0;
          VAR_32->len = VAR_24 > VAR_20[VAR_31].iov_len ? VAR_20[VAR_31].iov_len : VAR_24;
          VAR_24 -= VAR_32->len;
          VAR_27->first = VAR_27->last = VAR_32;
          VAR_27->total_bytes = VAR_32->len;
          VAR_27->first_offset = 0;
          VAR_27->last_offset = VAR_32->len;
          VAR_31 ++;
        } else {
          FUNC_1 (VAR_27->last->offset + VAR_27->last->len == VAR_27->last_offset);
          if (VAR_31 == 0) {
            int VAR_33 = VAR_24 > VAR_20[0].iov_len ? VAR_20[0].iov_len : VAR_24;
            VAR_27->last->len += VAR_33;
            VAR_27->total_bytes += VAR_33;
            VAR_27->last_offset += VAR_33;
            VAR_24 -= VAR_33;
            VAR_31 ++;
          }
        }

        FUNC_1 (VAR_27->last && !VAR_27->last->next);

        while (VAR_24 > 0) {
          VAR_32 = FUNC_5 (0, VAR_17[VAR_31 - 1]);
          VAR_32->offset = 0;
          VAR_32->len = VAR_24 > VAR_20[VAR_31].iov_len ? VAR_20[VAR_31].iov_len : VAR_24;
          VAR_24 -= VAR_32->len;
          VAR_27->last->next = VAR_32;
          VAR_27->last = VAR_32;
          VAR_27->last_offset = VAR_32->len + VAR_32->offset;
          VAR_27->total_bytes += VAR_32->len;
          VAR_31 ++;
        }
        FUNC_1 (!VAR_24);

        int VAR_34;
        for (VAR_34 = 0; VAR_34 < VAR_31 - 1; VAR_34++) {
          struct msg_buffer *VAR_35 = FUNC_0 (VAR_17[VAR_34], VAR_8);
          if (!VAR_35) {
            FUNC_17 (0, "**FATAL**: cannot allocate udp receive buffer\n");
            FUNC_2 (2);
          }
          VAR_17[VAR_34] = VAR_35;
          VAR_20[VAR_34 + 1].iov_base = VAR_35->data;
          VAR_20[VAR_34 + 1].iov_len = VAR_35->chunk->buffer_size;
        }

        VAR_26 = VAR_22->skip_bytes;

        if (VAR_26 && VAR_22->crypto) {
          FUNC_1 (VAR_22->type->crypto_decrypt_input (VAR_22) >= 0);
        }

        VAR_25 = VAR_22->in.total_bytes;

        if (VAR_26 < 0) {

          if (VAR_25 > -VAR_26) {
            VAR_25 = -VAR_26;
          }

          FUNC_11 (VAR_28, 0, VAR_25);
          VAR_22->skip_bytes = VAR_26 += VAR_25;

          if (VAR_21 > 2) {
            FUNC_4 (VAR_16, "skipped %d bytes, %d more to skip\n", VAR_25, -VAR_26);
          }
          if (VAR_26) {
            continue;
          }
        }

        if (VAR_26 > 0) {

          if (VAR_25 >= VAR_26) {
            VAR_22->skip_bytes = VAR_26 = 0;
          }

          FUNC_17 (1, "fetched %d bytes, %d available bytes, %d more to load\n", VAR_24, VAR_25, VAR_26 ? VAR_26 - VAR_25 : 0);
          if (VAR_26) {
            continue;
          }
        }
      }
    } else {
      VAR_24 = 0x7fffffff;
    }

    if (VAR_22->crypto) {
      FUNC_1 (VAR_22->type->crypto_decrypt_input (VAR_22) >= 0);
    }

    while (!VAR_22->skip_bytes && (VAR_22->status == VAR_9 || VAR_22->status == VAR_11 ||
                              VAR_22->status == VAR_12 || VAR_22->status == VAR_10)) {

      int VAR_36 = (VAR_22->status - 1) | 1;
      VAR_22->flags &= ~VAR_2;
      if (!VAR_28->total_bytes) {

        if (VAR_22->crypto) {
          FUNC_1 (VAR_22->type->crypto_encrypt_output (VAR_22) >= 0);
        }
        return 0;
      }
      if (VAR_22->status == VAR_36) {
        VAR_22->parse_state = 0;
        VAR_22->status++;
      }
      VAR_23 = VAR_22->type->parse_execute (VAR_22);

      if (!VAR_23) {
        if (VAR_22->status == VAR_36 + 1) {
          VAR_22->status--;
        }
        if (VAR_22->error) {
          return -1;
        }
      } else if (VAR_23 != VAR_7) {

        if (VAR_23 < 0) {
          FUNC_1 (!VAR_28->total_bytes);
          VAR_23 -= VAR_28->total_bytes;
        } else {
          VAR_23 += VAR_28->total_bytes;
        }
        VAR_22->skip_bytes = VAR_23;
        break;
      }
    }

    if (VAR_24 <= 0) {
      break;
    }
  }

  if (VAR_22->crypto) {

    FUNC_1 (VAR_22->type->crypto_encrypt_output (VAR_22) >= 0);
  }

  return VAR_23;
}

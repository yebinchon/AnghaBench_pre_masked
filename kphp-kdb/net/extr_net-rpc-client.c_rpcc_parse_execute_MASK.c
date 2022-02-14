
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpcc_data {unsigned int packet_len; unsigned int packet_num; unsigned int packet_crc32; unsigned int in_packet_num; scalar_t__ packet_type; } ;
struct TYPE_4__ {int total_bytes; } ;
struct connection {scalar_t__ status; int error; int fd; TYPE_1__ In; int Q; } ;
struct TYPE_5__ {int max_packet_len; int (* rpc_ready ) (struct connection*) ;int (* execute ) (struct connection*,scalar_t__,int) ;} ;


 struct rpcc_data* FUNC_0 (struct connection*) ;
 TYPE_3__* FUNC_1 (struct connection*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_4 (char*,int,unsigned int) ;
 int FUNC_5 (struct connection*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned int*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int VAR_6 ;
 int FUNC_13 (struct connection*,scalar_t__,int) ;
 int FUNC_14 (struct connection*) ;
 int FUNC_15 (struct connection*) ;
 int FUNC_16 (struct connection*) ;
 int VAR_7 ;
 int FUNC_17 (struct connection*) ;
 int FUNC_18 (struct connection*,scalar_t__,int) ;
 int VAR_8 ;
 int FUNC_19 (int,char*,unsigned int,...) ;

int FUNC_20 (struct connection *VAR_9) {
  struct rpcc_data *VAR_10 = FUNC_0(VAR_9);
  int VAR_11;

  while (1) {
    VAR_11 = FUNC_12 (&VAR_9->Q);
    if (VAR_11 <= 0) {
      break;
    }
    if (!VAR_10->packet_len) {
      if (VAR_11 < 4) {
        VAR_9->status = VAR_3;
        return 4 - VAR_11;
      }
      FUNC_3 (FUNC_9 (&VAR_9->Q, &VAR_10->packet_len, 4) == 4);
      VAR_11 -= 4;
      if (VAR_10->packet_len <= 0 || (VAR_10->packet_len & 3) || (VAR_10->packet_len > FUNC_1(VAR_9)->max_packet_len && FUNC_1(VAR_9)->max_packet_len > 0)) {
 FUNC_19 (1, "error while parsing packet: bad packet length %d\n", VAR_10->packet_len);
        VAR_9->status = VAR_2;
        VAR_9->error = -1;
        return 0;
      }
    }
    if (VAR_10->packet_len == 4) {
      FUNC_3 (FUNC_2 (&VAR_9->In, 4) == 4);
      VAR_10->packet_len = 0;
      FUNC_11 (&VAR_9->Q, &VAR_9->In);
      continue;
    }
    if (VAR_10->packet_len < 16) {
      FUNC_19 (1, "error while parsing packet: bad packet length %d\n", VAR_10->packet_len);
      VAR_9->status = VAR_2;
      VAR_9->error = -1;
      return 0;
    }
    if (VAR_11 + 4 < VAR_10->packet_len) {
      VAR_9->status = VAR_3;
      return VAR_10->packet_len - VAR_11 - 4;
    }
    FUNC_3 (FUNC_9 (&VAR_9->Q, &VAR_10->packet_num, 8) == 8);
    unsigned VAR_12 = !VAR_6 ? FUNC_4 (&VAR_10->packet_len, 12, -1) : 0;
    VAR_11 = VAR_10->packet_len - 16;
    while (VAR_11 > 0) {
      int VAR_13 = FUNC_10 (&VAR_9->Q);
      char *VAR_14 = FUNC_8 (&VAR_9->Q);
      if (VAR_13 > VAR_11) {
        VAR_13 = VAR_11;
      }
      FUNC_3 (VAR_13 > 0);
      if (!VAR_6) {
        VAR_12 = FUNC_4 (VAR_14, VAR_13, VAR_12);
      }
      VAR_11 -= VAR_13;
      FUNC_3 (FUNC_7 (&VAR_9->Q, VAR_13) == VAR_13);
    }
    FUNC_3 (!VAR_11);
    FUNC_3 (FUNC_9 (&VAR_9->Q, &VAR_10->packet_crc32, 4) == 4);
    if (~VAR_12 != VAR_10->packet_crc32 && !VAR_6) {
      FUNC_19 (1, "error while parsing packet: crc32 = %08x != %08x\n", ~VAR_12, VAR_10->packet_crc32);
      VAR_9->status = VAR_2;
      VAR_9->error = -1;
      return 0;
    }

    if (VAR_8 > 2) {
      FUNC_6 (VAR_7, "received packet from connection %d\n", VAR_9->fd);
      FUNC_5 (VAR_9);
    }

    int VAR_15 = VAR_9->In.total_bytes;
    int VAR_16 = -1;

    if (VAR_10->packet_num != VAR_10->in_packet_num) {
      FUNC_19 (1, "error while parsing packet: got packet num %d, expected %d\n", VAR_10->packet_num, VAR_10->in_packet_num);
      VAR_9->status = VAR_2;
      VAR_9->error = -1;
      return 0;
    } else if (VAR_10->packet_num < 0) {

      if (VAR_10->packet_num == -2) {
        VAR_9->status = VAR_4;
        VAR_16 = FUNC_15 (VAR_9);
        if (VAR_16 >= 0) {
          VAR_16 = FUNC_16 (VAR_9);

        }
      } else if (VAR_10->packet_num == -1) {
        VAR_9->status = VAR_4;
        VAR_16 = FUNC_14 (VAR_9);
        if (VAR_16 >= 0 && FUNC_1(VAR_9)->rpc_ready) {
          VAR_16 = FUNC_1(VAR_9)->rpc_ready (VAR_9);
        }
      }
      if (VAR_16 < 0) {
        VAR_9->status = VAR_2;
        VAR_9->error = VAR_16;
        return 0;
      }
    } else {

      VAR_9->status = VAR_4;
      if (VAR_10->packet_type == VAR_0) {
        VAR_16 = FUNC_13 (VAR_9, VAR_10->packet_type, VAR_10->packet_len);
      } else {
        VAR_16 = FUNC_1(VAR_9)->execute (VAR_9, VAR_10->packet_type, VAR_10->packet_len);
      }
    }

    if (VAR_9->status == VAR_2) {
      if (!VAR_9->error) {
        VAR_9->error = -2;
      }
      return 0;
    }

    if (VAR_16 == VAR_1) {
      FUNC_3 (VAR_15 == VAR_9->In.total_bytes);
      FUNC_2 (&VAR_9->In, VAR_10->packet_len);
      VAR_10->in_packet_num++;
    } else if (VAR_15 != VAR_9->In.total_bytes) {
      FUNC_3 (VAR_15 == VAR_9->In.total_bytes + VAR_10->packet_len);
      VAR_10->in_packet_num++;
    }
    VAR_10->packet_len = 0;
    if (VAR_9->status == VAR_4) {
      VAR_9->status = VAR_5;
    }
    if (VAR_9->status != VAR_5) {
      break;
    }
    FUNC_11 (&VAR_9->Q, &VAR_9->In);
  }
  return 0;
}

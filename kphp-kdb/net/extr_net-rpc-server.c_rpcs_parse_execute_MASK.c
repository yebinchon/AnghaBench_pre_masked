
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpcs_data {unsigned int packet_len; int crypto_flags; int flags; int in_packet_num; unsigned int packet_num; unsigned int packet_crc32; scalar_t__ packet_type; } ;
struct TYPE_6__ {int total_bytes; } ;
struct connection {scalar_t__ status; int fd; int error; TYPE_2__ In; int Q; scalar_t__ pending_queries; TYPE_1__* type; int extra; int custom_data; } ;
struct TYPE_7__ {int max_packet_len; int (* rpc_ready ) (struct connection*) ;int (* execute ) (struct connection*,scalar_t__,int) ;int http_fallback_extra; TYPE_1__* http_fallback_type; int memcache_fallback_extra; TYPE_1__* memcache_fallback_type; } ;
struct TYPE_5__ {scalar_t__ (* init_accepted ) (struct connection*) ;int (* parse_execute ) (struct connection*) ;} ;


 struct rpcs_data* FUNC_0 (struct connection*) ;
 TYPE_4__* FUNC_1 (struct connection*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_4 (char*,int,unsigned int) ;
 int FUNC_5 (struct connection*) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned int*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int VAR_8 ;
 int FUNC_14 (struct connection*,scalar_t__,int) ;
 int FUNC_15 (struct connection*) ;
 int FUNC_16 (struct connection*) ;
 int FUNC_17 (struct connection*) ;
 int VAR_9 ;
 scalar_t__ FUNC_18 (struct connection*) ;
 int FUNC_19 (struct connection*) ;
 scalar_t__ FUNC_20 (struct connection*) ;
 int FUNC_21 (struct connection*) ;
 int FUNC_22 (struct connection*) ;
 int FUNC_23 (struct connection*,scalar_t__,int) ;
 int VAR_10 ;
 int FUNC_24 (int,char*,int,...) ;

int FUNC_25 (struct connection *VAR_11) {
  struct rpcs_data *VAR_12 = FUNC_0(VAR_11);
  int VAR_13;

  while (1) {
    VAR_13 = FUNC_13 (&VAR_11->Q);
    if (VAR_13 <= 0) {
      break;
    }

    if (!VAR_12->packet_len) {
      if (VAR_13 < 4) {
        VAR_11->status = VAR_4;
        return 4 - VAR_13;
      }
      FUNC_3 (FUNC_10 (&VAR_11->Q, &VAR_12->packet_len, 4) == 4);

      VAR_13 -= 4;
      if (VAR_12->crypto_flags & 512) {
 VAR_12->flags = (VAR_12->flags & 0x7fffffff) | (VAR_12->packet_len & 0x80000000);
 VAR_12->packet_len &= 0x7fffffff;
      }
      if (VAR_12->packet_len <= 0 || (VAR_12->packet_len & 0xc0000003)) {
        if (VAR_12->in_packet_num <= -2 && (VAR_12->packet_len == 0x656c6564 || VAR_12->packet_len == 0x74617473 || VAR_12->packet_len == 0x73726576 || VAR_12->packet_len == 0x20746567 || VAR_12->packet_len == 0x20746573 || VAR_12->packet_len == 0x20646461
                                                                   || VAR_12->packet_len == 0x6c706572 || VAR_12->packet_len == 0x72636e69 || VAR_12->packet_len == 0x72636564) && FUNC_1(VAR_11)->memcache_fallback_type) {
   FUNC_24 (1, "switching to memcache fallback for connection %d\n", VAR_11->fd);
          FUNC_7 (VAR_11->custom_data, 0, sizeof (VAR_11->custom_data));
          VAR_11->type = FUNC_1(VAR_11)->memcache_fallback_type;
          VAR_11->extra = FUNC_1(VAR_11)->memcache_fallback_extra;
          if (VAR_11->type->init_accepted (VAR_11) < 0) {
     FUNC_24 (1, "memcache init_accepted() returns error for connection %d\n", VAR_11->fd);
            VAR_11->status = VAR_2;
            VAR_11->error = -33;
            return 0;
          }
          FUNC_12 (&VAR_11->Q, &VAR_11->In);
          return VAR_11->type->parse_execute (VAR_11);
        }
        if (VAR_12->in_packet_num <= -2 && (VAR_12->packet_len == 0x44414548 || VAR_12->packet_len == 0x54534f50 || VAR_12->packet_len == 0x20544547) && FUNC_1(VAR_11)->http_fallback_type) {
   FUNC_24 (1, "switching to http fallback for connection %d\n", VAR_11->fd);
          FUNC_7 (VAR_11->custom_data, 0, sizeof (VAR_11->custom_data));
          VAR_11->type = FUNC_1(VAR_11)->http_fallback_type;
          VAR_11->extra = FUNC_1(VAR_11)->http_fallback_extra;
          if (VAR_11->type->init_accepted (VAR_11) < 0) {
     FUNC_24 (1, "http init_accepted() returns error for connection %d\n", VAR_11->fd);
            VAR_11->status = VAR_2;
            VAR_11->error = -33;
            return 0;
          }
          FUNC_12 (&VAR_11->Q, &VAR_11->In);
          return VAR_11->type->parse_execute (VAR_11);
        }
 FUNC_24 (1, "error while parsing packet: bad packet length %d\n", VAR_12->packet_len);
        VAR_11->status = VAR_2;
        VAR_11->error = -1;
        return 0;
      }
      if (VAR_12->packet_len > FUNC_1(VAR_11)->max_packet_len && FUNC_1(VAR_11)->max_packet_len > 0) {
 FUNC_24 (1, "error while parsing packet: bad packet length %d\n", VAR_12->packet_len);
 VAR_11->status = VAR_2;
 VAR_11->error = -1;
 return 0;
      }
    }
    if (VAR_12->packet_len == 4) {
      FUNC_3 (FUNC_2 (&VAR_11->In, 4) == 4);
      VAR_12->packet_len = 0;
      FUNC_12 (&VAR_11->Q, &VAR_11->In);
      continue;
    }
    if (VAR_12->packet_len < 16) {
      FUNC_24 (1, "error while parsing packet: bad packet length %d\n", VAR_12->packet_len);
      VAR_11->status = VAR_2;
      VAR_11->error = -1;
      return 0;
    }
    if (VAR_13 + 4 < VAR_12->packet_len) {

      VAR_11->status = VAR_4;
      return VAR_12->packet_len - VAR_13 - 4;
    }
    FUNC_3 (FUNC_10 (&VAR_11->Q, &VAR_12->packet_num, 8) == 8);
    unsigned VAR_14 = 0;
    if (!VAR_8) {
      VAR_14 = FUNC_4 (&VAR_12->packet_len, 12, -1);
      if ((VAR_12->flags < 0) && (VAR_12->crypto_flags & 512)) {
 VAR_14 ^= 0x1d80c620 ^ 0x7bd5c66f;
      }
    }



    VAR_13 = VAR_12->packet_len - 16;
    while (VAR_13 > 0) {
      int VAR_15 = FUNC_11 (&VAR_11->Q);
      char *VAR_16 = FUNC_9 (&VAR_11->Q);
      if (VAR_15 > VAR_13) {
        VAR_15 = VAR_13;
      }
      FUNC_3 (VAR_15 > 0);
      if (!VAR_8) {
        VAR_14 = FUNC_4 (VAR_16, VAR_15, VAR_14);
      }
      VAR_13 -= VAR_15;
      FUNC_3 (FUNC_8 (&VAR_11->Q, VAR_15) == VAR_15);
    }
    FUNC_3 (!VAR_13);
    FUNC_3 (FUNC_10 (&VAR_11->Q, &VAR_12->packet_crc32, 4) == 4);

    if (~VAR_14 != VAR_12->packet_crc32 && !VAR_8) {
      if (VAR_10 > 0) {
        FUNC_5 (VAR_11);
        FUNC_6 (VAR_9, "error while parsing packet: crc32 = %08x != %08x\n", ~VAR_14, VAR_12->packet_crc32);
      }
      VAR_11->status = VAR_2;
      VAR_11->error = -1;
      return 0;
    }

    if (VAR_10 > 2) {
      FUNC_6 (VAR_9, "received packet from connection %d\n", VAR_11->fd);
      FUNC_5 (VAR_11);
    }

    int VAR_17 = VAR_11->In.total_bytes;
    int VAR_18 = -1;

    if (VAR_12->in_packet_num == -3) {
      VAR_12->in_packet_num = 0;
    }

    if (!(VAR_12->crypto_flags & 256) && VAR_12->packet_num != VAR_12->in_packet_num) {
      FUNC_24 (1, "error while parsing packet: got packet num %d, expected %d\n", VAR_12->packet_num, VAR_12->in_packet_num);
      VAR_11->status = VAR_2;
      VAR_11->error = -1;
      return 0;
    } else if (VAR_12->packet_num < 0) {

      if (VAR_12->packet_num == -2) {
        VAR_11->status = VAR_5;
        VAR_18 = FUNC_16 (VAR_11);
      } else if (VAR_12->packet_num == -1) {
        VAR_11->status = VAR_5;
        VAR_18 = FUNC_15 (VAR_11);
        if (VAR_18 >= 0) {
          VAR_18 = FUNC_17 (VAR_11);
          if (VAR_18 >= 0 && FUNC_1(VAR_11)->rpc_ready) {
            VAR_18 = FUNC_1(VAR_11)->rpc_ready (VAR_11);
          }
        }
      }
      if (VAR_18 < 0) {
        VAR_11->status = VAR_2;
        VAR_11->error = VAR_18;
        return 0;
      }
    } else {

      VAR_11->status = VAR_5;
      if (VAR_12->packet_type == VAR_0) {
        VAR_18 = FUNC_14 (VAR_11, VAR_12->packet_type, VAR_12->packet_len);
      } else {
        VAR_18 = FUNC_1(VAR_11)->execute (VAR_11, VAR_12->packet_type, VAR_12->packet_len);
      }
    }

    if (VAR_11->status == VAR_2) {
      if (!VAR_11->error) {
        VAR_11->error = -2;
      }
      return 0;
    }

    if (VAR_18 == VAR_1) {
      FUNC_3 (VAR_17 == VAR_11->In.total_bytes);
      FUNC_2 (&VAR_11->In, VAR_12->packet_len);
      VAR_12->in_packet_num++;
    } else if (VAR_17 != VAR_11->In.total_bytes) {
      FUNC_3 (VAR_17 == VAR_11->In.total_bytes + VAR_12->packet_len);
      VAR_12->in_packet_num++;
    }

    if (VAR_11->status == VAR_5) {
      VAR_11->status = VAR_3;
    }


    FUNC_3 (VAR_11->status == VAR_7 || (VAR_11->pending_queries && VAR_11->status == VAR_6) || (!VAR_11->pending_queries && VAR_11->status == VAR_3));

    VAR_12->packet_len = 0;
    if (VAR_11->status != VAR_3) {
      break;
    }
    FUNC_12 (&VAR_11->Q, &VAR_11->In);
  }
  return 0;
}

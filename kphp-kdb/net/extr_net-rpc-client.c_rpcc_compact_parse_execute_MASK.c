
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpcc_data {int packet_len; int flags; int packet_type; int in_packet_num; int packet_num; } ;
struct TYPE_4__ {int total_bytes; } ;
struct connection {scalar_t__ status; int error; TYPE_1__ In; int Q; int pending_queries; } ;
struct TYPE_5__ {int max_packet_len; int (* execute ) (struct connection*,int,int) ;} ;


 struct rpcc_data* FUNC_0 (struct connection*) ;
 TYPE_3__* FUNC_1 (struct connection*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct connection*,int,int) ;
 int FUNC_8 (int,char*,...) ;

int FUNC_9 (struct connection *VAR_5) {
  struct rpcc_data *VAR_6 = FUNC_0(VAR_5);
  int VAR_7;

  while (1) {
    VAR_7 = FUNC_6 (&VAR_5->Q);
    if (VAR_7 <= 0) {
      break;
    }
    if (!VAR_6->packet_len) {
      if (VAR_7 < 4) {
        VAR_5->status = VAR_2;
        return 4 - VAR_7;
      }
      FUNC_3 (FUNC_4 (&VAR_5->Q, &VAR_6->packet_len, 1) == 1);
      VAR_7--;
      if (VAR_6->packet_len & 0x80) {
 VAR_5->status = VAR_1;
 VAR_5->error = -1;
 return 0;
      }
      if (VAR_6->packet_len == 0x7f) {
 FUNC_3 (FUNC_4 (&VAR_5->Q, &VAR_6->packet_len, 3) == 3);
 if (VAR_6->packet_len < 0x7f) {
   FUNC_8 (1, "error while parsing compact packet: got length %d in overlong encoding\n", VAR_6->packet_len);
   VAR_5->status = VAR_1;
   VAR_5->error = -1;
   return 0;
 }
 VAR_7 -= 3;
      } else if (!VAR_6->packet_len) {
 FUNC_8 (1, "error while parsing compact packet: got zero packet length\n");
 VAR_5->status = VAR_1;
 VAR_5->error = -1;
 return 0;
      }
      VAR_6->flags |= 0x40000000;
      VAR_6->packet_len <<= 2;
      if (VAR_6->packet_len > FUNC_1(VAR_5)->max_packet_len && FUNC_1(VAR_5)->max_packet_len > 0) {
 FUNC_8 (1, "error while parsing packet: bad packet length %d\n", VAR_6->packet_len);
 VAR_5->status = VAR_1;
 VAR_5->error = -1;
 return 0;
      }
    }
    if (VAR_7 < VAR_6->packet_len) {
      VAR_5->status = VAR_2;
      return VAR_6->packet_len - VAR_7;
    }
    FUNC_3 (FUNC_4 (&VAR_5->Q, &VAR_6->packet_type, 4) == 4);

    if (VAR_6->packet_len <= 0x7e * 4) {
      FUNC_3 (FUNC_2 (&VAR_5->In, 1) == 1);
    } else {
      FUNC_3 (FUNC_2 (&VAR_5->In, 4) == 4);
    }
    VAR_6->packet_num = VAR_6->in_packet_num;

    int VAR_8 = VAR_5->In.total_bytes;
    int VAR_9;


    VAR_5->status = VAR_3;
    VAR_9 = FUNC_1(VAR_5)->execute (VAR_5, VAR_6->packet_type, VAR_6->packet_len);

    if (VAR_5->status == VAR_1) {
      if (!VAR_5->error) {
        VAR_5->error = -2;
      }
      return 0;
    }

    if (VAR_9 == VAR_0) {
      FUNC_3 (VAR_8 == VAR_5->In.total_bytes);
      FUNC_2 (&VAR_5->In, VAR_6->packet_len);
    } else {
      FUNC_3 (VAR_8 == VAR_5->In.total_bytes + VAR_6->packet_len);
    }
    VAR_6->in_packet_num++;

    FUNC_3 (!VAR_5->pending_queries && VAR_5->status == VAR_3);
    VAR_5->status = VAR_4;

    VAR_6->packet_len = 0;
    FUNC_5 (&VAR_5->Q, &VAR_5->In);
  }
  return 0;
}

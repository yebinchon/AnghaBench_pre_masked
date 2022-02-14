
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_binlog_data {long long remote_id; long long binlog_position; int size; int crc64; int data; int local_id; } ;
struct connection {int dummy; } ;
struct TYPE_4__ {int* total_sent_bytes_color; int binlog_data_sent; int * total_sent_num_color; } ;
struct TYPE_6__ {TYPE_1__ structured; } ;
struct TYPE_5__ {int link_color; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,long long,int) ;
 int FUNC_2 (long long) ;
 TYPE_2__* FUNC_3 (long long) ;
 scalar_t__ FUNC_4 (struct rpc_binlog_data*,int,struct connection*,int ) ;
 int FUNC_5 (struct rpc_binlog_data*,struct connection*) ;
 int FUNC_6 (int,char*,long long,long long) ;

int FUNC_7 (struct connection *VAR_6, long long VAR_7, long long VAR_8) {
  FUNC_6 (2, "rpc_send_binlog_data: remote_id = %lld, pos = %lld\n", VAR_7, VAR_8);
  if (!VAR_7) {
    return 0;
  }
  FUNC_0 (VAR_8 < VAR_0);
  int VAR_9 = (VAR_0 - VAR_8 > VAR_1) ? VAR_1 : VAR_0 - VAR_8;
  struct rpc_binlog_data *VAR_10 = (struct rpc_binlog_data *)VAR_3;
  int VAR_11 = (VAR_9 & 3) == 0 ? VAR_9 : (VAR_9 & ~3) + 4;
  FUNC_0 (VAR_11 <= VAR_1);
  if (FUNC_4 (VAR_10, sizeof (struct rpc_binlog_data) + VAR_11, VAR_6, VAR_4) < 0) {
    return -1;
  }
  VAR_10->local_id = VAR_2;
  VAR_10->remote_id = VAR_7;
  VAR_10->binlog_position = VAR_8;
  VAR_10->size = VAR_9;
  if (FUNC_1 (VAR_10->data, VAR_8, VAR_9) < 0) {
    return 0;
  }
  VAR_10->crc64 = FUNC_2 (VAR_8);
  int VAR_12 = FUNC_3 (VAR_7)->link_color;
  FUNC_0 (0 <= VAR_12 && VAR_12 <= 2);
  VAR_5->structured.total_sent_num_color[VAR_12] ++;
  VAR_5->structured.total_sent_bytes_color[VAR_12] += VAR_9;
  VAR_5->structured.binlog_data_sent ++;
  return FUNC_5 (VAR_10, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_3 (struct connection *VAR_13) {
  stats_buffer_t VAR_14;
  FUNC_1 (&VAR_14, VAR_13, VAR_9, VAR_4);
  FUNC_0 (&VAR_14, VAR_0);
  VAR_2;
  VAR_3;

  FUNC_2 (&VAR_14,
      "volume_id\t%lld\n"
      "work_dir\t%s\n"
      "snapshot_compression_level\t%d\n"
      "start_transaction_id\t%d\n"
      "transaction_id\t%d\n"
      "last_closed_transaction_id\t%d\n"
      "last_closed_transaction_time\t%d\n"
      "version\t%s\n",
    VAR_11,
    VAR_12,
    VAR_5,
    VAR_8,
    VAR_10,
    VAR_6,
    VAR_7,
    VAR_1
  );
  return VAR_14.pos;
}

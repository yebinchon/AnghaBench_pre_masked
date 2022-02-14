
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
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int*,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__,scalar_t__,int ,int ,int,char*,int ,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_21 ;
 int FUNC_5 (char*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

int FUNC_6 (struct connection *VAR_31) {
  int VAR_32 = FUNC_0 ();
  int VAR_33, VAR_34;

  FUNC_1 (&VAR_33, &VAR_34);

  stats_buffer_t VAR_35;
  FUNC_3 (&VAR_35, VAR_31, VAR_21, VAR_2);
  FUNC_2 (&VAR_35, VAR_0);
  FUNC_4 (&VAR_35,
      "binlog_original_size\t%lld\n"
      "binlog_loaded_bytes\t%lld\n"
      "binlog_load_time\t%.6fs\n"
      "current_binlog_size\t%lld\n"
      "binlog_uncommitted_bytes\t%d\n"
      "binlog_path\t%s\n"
      "binlog_first_timestamp\t%d\n"
      "binlog_read_timestamp\t%d\n"
      "binlog_last_timestamp\t%d\n"
      "aux_binlog_path\t%s\n"
      "aux_log_read_start\t%lld\n"
      "aux_log_readto_pos\t%lld\n"
      "index_size\t%lld\n"
      "index_path\t%s\n"
      "index_load_time\t%.6lfs\n"
      "main_volume_id\t%llu\n"
      "aux_volume_id\t%llu\n"
      "instance_mask\t%d\n"
      "first_transaction_id\t%d\n"
      "transactions\t%d\n"
      "tot_memory_transactions\t%d\n"
      "child_running_list_size\t%d\n"
      "auto_running_list_size\t%d\n"
      "tot_ignored\t%d\n"
      "tot_interrupted\t%d\n"
      "tot_cancelled\t%d\n"
      "tot_terminated\t%d\n"
      "tot_failed\t%d\n"
      "tot_decryption_failed\t%d\n"
      "tot_io_failed\t%d\n"
      "version\t%s\n",
    VAR_19,
    VAR_19 - VAR_14,
    VAR_7,
    VAR_17,
    VAR_32,
    VAR_8 ? (FUNC_5(VAR_8) < 250 ? VAR_8 : "(too long)") : "(none)",
    VAR_15,
    VAR_18,
    VAR_16,
    FUNC_5 (VAR_3) < 250 ? VAR_3 : "(too long)",
    VAR_4,
    VAR_5,
    VAR_10,
    VAR_9,
    VAR_12,
    VAR_20,
    VAR_6,
    VAR_13,
    VAR_11,
    VAR_30,
    VAR_28,
    VAR_33, VAR_34,
    VAR_25, VAR_26, VAR_22, VAR_29, VAR_24, VAR_23, VAR_27,
    VAR_1
  );
  return VAR_35.pos;
}

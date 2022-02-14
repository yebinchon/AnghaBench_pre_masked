
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
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_9 ;
 int FUNC_2 (long long*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int ,int ,int ,int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_17 ;
 int FUNC_6 (char*) ;
 int VAR_18 ;

int FUNC_7 (struct connection *VAR_19) {
  int VAR_20 = FUNC_0();
  FUNC_1 ();
  long long VAR_21[7];
  FUNC_2 (VAR_21, 7);

  stats_buffer_t VAR_22;
  FUNC_4 (&VAR_22, VAR_19, VAR_17, VAR_2);
  FUNC_3 (&VAR_22, VAR_0);

  FUNC_5 (&VAR_22,
      "binlog_original_size\t%lld\n"
      "binlog_loaded_bytes\t%lld\n"
      "binlog_load_time\t%.6fs\n"
      "current_binlog_size\t%lld\n"
      "binlog_uncommitted_bytes\t%d\n"
      "binlog_path\t%s\n"
      "binlog_first_timestamp\t%d\n"
      "binlog_read_timestamp\t%d\n"
      "binlog_last_timestamp\t%d\n"
      "cmd_get\t%lld\n"
      "cmd_stats\t%lld\n"
      "hosts\t%d\n"
      "tot_memory_transactions\t%d\n"
      "max_memory_transactions\t%d\n"
      "alloc_tree_nodes\t%d\n"
      "free_tree_nodes\t%d\n"
      "version\t%s\n",
    VAR_15,
    VAR_5,
    VAR_4,
    VAR_13,
    VAR_20,
    VAR_6 ? (FUNC_6(VAR_6) < 250 ? VAR_6 : "(too long)") : "(none)",
    VAR_11,
    VAR_14,
    VAR_12,
    VAR_7,
    VAR_8,
    VAR_10,
    VAR_18,
    VAR_16,
    VAR_3,
    VAR_9,
    VAR_1);
  return VAR_22.pos;
}

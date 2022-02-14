
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int,int ,int,int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

int FUNC_4 (struct connection *VAR_28) {
  stats_buffer_t VAR_29;
  FUNC_2 (&VAR_29, VAR_28, VAR_16, VAR_5);
  FUNC_1 (&VAR_29, VAR_1 + VAR_0);
  VAR_3;
  VAR_4;

  FUNC_3 (&VAR_29,
      "snapshot_loading_average_blocking_read_bytes\t%.6f\n"
      "snapshot_loading_blocking_read_calls\t%d\n"
      "tot_user_metafiles\t%d\n"
      "tot_user_metafile_bytes\t%lld\n"
      "counters\t%d\n"
      "counters_percent\t%.6f\n"
      "counters_prime\t%d\n"
      "total_views\t%lld\n"
      "tree_nodes_allocated\t%d\n"
      "counter_instances\t%d\n"
      "counter_instances_percent\t%.6f\n"
      "allocated_counter_instances\t%d\n"
      "deleted_by_LRU\t%lld\n"
      "allocated_memory\t%lld\n"
      "tot_aio_queries\t%lld\n"
      "active_aio_queries\t%lld\n"
      "expired_aio_queries\t%lld\n"
      "avg_aio_query_time\t%.6f\n"
      "aio_bytes_loaded\t%lld\n"
      "tot_aio_queries\t%lld\n"
      "tot_aio_fails\t%lld\n"
      "memory_to_index\t%lld\n"
      "version\t%s\n",
    VAR_14,
    VAR_15,
    VAR_25,
    VAR_24,
    VAR_21,
    FUNC_0 (VAR_21, VAR_12),
    VAR_8,
    VAR_26,
    VAR_7,
    VAR_20,
    FUNC_0 (VAR_20, VAR_11),
    VAR_22,
    VAR_9,
    VAR_23,
    VAR_19,
    VAR_6,
    VAR_10,
    VAR_19 > 0 ? VAR_27 / VAR_19 : 0,
    VAR_18,
    VAR_19,
    VAR_17,
    VAR_13,
    VAR_2
    );
  return VAR_29.pos;
}

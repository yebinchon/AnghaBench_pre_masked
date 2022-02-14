
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_2 () ;
 int VAR_12 ;
 int FUNC_3 () ;
 int VAR_13 ;
 int FUNC_4 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,char*,long,...) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;

int FUNC_8 (struct connection *VAR_30) {
  stats_buffer_t VAR_31;
  FUNC_6 (&VAR_31, VAR_30, VAR_22, VAR_3);
  FUNC_5 (&VAR_31, VAR_0);
  FUNC_7 (&VAR_31,
    "malloc_mem\t%ld\n"
    "zalloc_mem\t%ld\n",
    (long) VAR_17,
    (long) VAR_29);

  VAR_2;
  FUNC_7 (&VAR_31,
        "index_loaded_bytes\t%lld\n"
        "index_size\t%lld\n"
        "index_path\t%s\n"
        "index_load_time\t%.6lfs\n"
        "pid\t%d\n"
        "snapshot_size\t%d\n"
        "curr_items\t%d\n"
        "total_items\t%lld\n"
        "current_memory_used\t%lld\n"
        "cmd_get\t%lld\n"
        "cmd_set\t%lld\n"
        "get_hits\t%lld\n"
        "get_misses\t%lld\n"
        "cmd_incr\t%lld\n"
        "cmd_decr\t%lld\n"
        "cmd_delete\t%lld\n"
        "cmd_version\t%lld\n"
        "cmd_stats\t%lld\n"
        "total_response_words\t%lld\n"
        "total_response_bytes\t%lld\n"
        "limit_max_dynamic_memory\t%lld\n"
        "reindex_on_low_memory\t%d\n"
        "reindex_on_low_memory_time_ago\t%d\n"
        "wildcard_arrays_allocated\t%d\n"
        "wildcard_cache_memory\t%lld\n"
        "wildcard_cache_entries\t%d\n",
        VAR_21,
        VAR_15,
        VAR_11,
        VAR_14,
        FUNC_4(),
        (int)(sizeof(int*)*8),
        FUNC_2(),
        VAR_25,
        FUNC_3(),
        VAR_6,
        VAR_8,
        VAR_12,
        VAR_13,
        VAR_7,
        VAR_4,
        VAR_5,
        VAR_10,
        VAR_9,
        VAR_24,
        VAR_23,
        VAR_18,
        VAR_20,
        VAR_20 ? VAR_19 - VAR_16: -1,
        VAR_26,
        VAR_28,
        VAR_27);
  FUNC_1 (&VAR_31);
  FUNC_0 (&VAR_31);
  FUNC_7 (&VAR_31, "%s\n", VAR_1);
  return VAR_31.pos;

}

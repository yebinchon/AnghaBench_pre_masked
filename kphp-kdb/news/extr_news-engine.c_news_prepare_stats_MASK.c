
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ,...) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;

int FUNC_7 (struct connection *VAR_50) {
  const char *const VAR_51 = VAR_1 ? "comments" : "items";
  stats_buffer_t VAR_52;
  FUNC_5 (&VAR_52, VAR_50, VAR_40, VAR_6);
  FUNC_4 (&VAR_52, VAR_0);
  FUNC_6 (&VAR_52, "user_group_mode\t%d\n", VAR_47);

  VAR_4;
  VAR_5;

  FUNC_2 (VAR_11);
  FUNC_2 (VAR_48);
  FUNC_2 (VAR_49);
  FUNC_2 (VAR_35);

  if (VAR_3) {
    FUNC_2 (VAR_18);
    FUNC_2 (VAR_17);
    FUNC_2 (VAR_38);
    FUNC_6 (&VAR_52, "raw_recommend_updates_avg_returned_records\t%.3lf\n", FUNC_3 (VAR_44, VAR_18));
  }

  FUNC_0 (VAR_26);

  FUNC_6 (&VAR_52,
    "memory_users\t%d\n"
    "max_uid\t%d\n"
    "total_items\t%d\n"
    "total_places\t%d\n"
    "total_comments\t%d\n"
    "loadavg_last_minute\t%.6f\n"
    "garbage_collection_uptime\t%d\n"
    "%s_removed_in_process_new\t%lld\n"
    "%s_removed_in_prepare_updates\t%lld\n"
    "%s_removed_by_garbage_collector\t%lld\n",
    VAR_45,
    VAR_27,
    VAR_19,
    VAR_43,
    VAR_10,
    VAR_24,
    VAR_37 - VAR_23,
    VAR_51, VAR_21,
    VAR_51, VAR_20,
    VAR_51, VAR_15);

  if (VAR_3) {
    FUNC_1 (VAR_12);
    FUNC_1 (VAR_13);
  }

  FUNC_1 (VAR_16);

  if (VAR_1) {
    FUNC_6 (&VAR_52,
      "small_users_in_index\t%d\n"
      "large_users_in_index\t%d\n"
      "users_with_new_bookmarks\t%d\n"
      "new_bookmarks\t%d\n"
      "tot_aio_queries\t%lld\n"
      "active_aio_queries\t%lld\n"
      "expired_aio_queries\t%lld\n"
      "avg_aio_query_time\t%.6f\n"
      "metafiles_load_errors\t%d\n"
      "metafiles_load_success\t%d\n"
      "metafiles_in_memory\t%d\n"
      "metafiles_unloaded\t%d\n"
      "total_aio_loaded_bytes\t%lld\n"
      "allocated_metafiles_size\t%lld\n"
      "max_allocated_metafiles_size\t%lld\n"
      "metafiles_cache_miss\t%lld\n"
      "metafiles_cache_ok\t%lld\n"
      "metafiles_cache_loading\t%lld\n",
    VAR_39,
    VAR_22,
    VAR_36,
    (VAR_9 > 0 ? VAR_9 : -VAR_9) - VAR_36,
    VAR_42,
    VAR_7,
    VAR_14,
    VAR_42 > 0 ? VAR_46 / VAR_42 : 0,
    VAR_31,
    VAR_32,
    VAR_33,
    VAR_34,
    VAR_41,
    VAR_8,
    VAR_25,
    VAR_29,
    VAR_30,
    VAR_28);
  }

  FUNC_6 (&VAR_52, "version\t%s\n", VAR_2);

  return VAR_52.pos;
}

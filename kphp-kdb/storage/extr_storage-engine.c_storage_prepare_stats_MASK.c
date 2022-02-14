
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
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
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,char*,int ,...) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;

int FUNC_8 (struct connection *VAR_62) {
  stats_buffer_t VAR_63;
  FUNC_6 (&VAR_63, VAR_62, VAR_52, VAR_3);
  FUNC_5 (&VAR_63, VAR_1 + VAR_0);

  FUNC_3(VAR_13);
  FUNC_3(VAR_50);
  FUNC_3(VAR_49);
  FUNC_3(VAR_41);
  FUNC_3(VAR_11);
  FUNC_3(VAR_8);
  FUNC_3(VAR_12);
  FUNC_3(VAR_27);
  FUNC_7 (&VAR_63,
      "volumes\t%d\n"
      "binlog_disabled\t%d\n"
      "index_loaded_bytes\t%lld\n"
      "index_size\t%lld\n"
      "cmd_version\t%lld\n"
      "cmd_stats\t%lld\n"
      "tree_nodes\t%d\n"
      "tot_docs\t%lld\n"
      "idx_docs\t%lld\n"
      "md5_mode\t%d\n"
      "max_immediately_reply_filesize\t%d\n"
      "metafiles\t%d\n"
      "metafiles_unloaded\t%lld\n"
      "metafiles_load_errors\t%lld\n"
      "metafiles_crc32_errors\t%lld\n"
      "metafiles_cancelled\t%lld\n"
      "choose_reading_binlog_errors\t%lld\n"
      "metafiles_bytes\t%d\n"
      "max_metafiles_bytes\t%d\n"
      "tot_aio_queries\t%lld\n"
      "active_aio_queries\t%lld\n"
      "expired_aio_queries\t%lld\n"
      "avg_aio_query_time\t%.6f\n"
      "aio_bytes_loaded\t%lld\n"
      "aio_query_timeout\t%.3lfs\n"
      "metafiles_cache_hits\t%lld\n",
    VAR_60,
    VAR_10,
    VAR_51,
    VAR_28,
    VAR_17,
    VAR_16,
    VAR_7,
    VAR_58,
    VAR_26,
    VAR_32,
    VAR_30,
    VAR_33,
    VAR_39,
    VAR_38,
    VAR_37,
    VAR_36,
    VAR_15,
    VAR_34,
    VAR_31,
    VAR_57,
    VAR_4,
    VAR_18,
    FUNC_4 (VAR_59, VAR_57),
    VAR_56,
    VAR_6,
    VAR_35
    );
  FUNC_0(VAR_29);

  FUNC_2(VAR_25);
  FUNC_2(VAR_23);
  FUNC_2(VAR_20);
  FUNC_2(VAR_21);
  FUNC_1(VAR_22);
  FUNC_1(VAR_24);

  FUNC_1(VAR_61);
  FUNC_1(VAR_40);
  FUNC_1(VAR_54);
  FUNC_1(VAR_42);
  FUNC_1(VAR_46);
  FUNC_1(VAR_44);
  FUNC_1(VAR_47);
  FUNC_1(VAR_48);
  FUNC_1(VAR_43);
  FUNC_1(VAR_45);

  FUNC_1(VAR_53);

  FUNC_0(VAR_5);
  FUNC_1(VAR_19);
  FUNC_1(VAR_55);
  FUNC_0(VAR_9);

  FUNC_7 (&VAR_63, "choose_binlog_options\t%s\n", VAR_14);
  FUNC_7 (&VAR_63, "version\t%s\n", VAR_2);

  return VAR_63.pos;
}

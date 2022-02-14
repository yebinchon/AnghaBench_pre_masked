
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;
struct TYPE_8__ {int T; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (double) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 TYPE_6__* VAR_11 ;
 double VAR_12 ;
 int VAR_13 ;
 double VAR_14 ;
 double VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_3 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (char*,int,int ,int ) ;
 double VAR_23 ;
 double VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 double VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 double VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 double VAR_41 ;
 int VAR_42 ;
 double VAR_43 ;
 int FUNC_5 (double,double) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int *,char*) ;
 int FUNC_9 (TYPE_1__*,char*,...) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 double VAR_49 ;
 int VAR_50 ;
 double VAR_51 ;
 int VAR_52 ;
 double VAR_53 ;
 double VAR_54 ;
 double VAR_55 ;
 int VAR_56 ;
 double VAR_57 ;
 double VAR_58 ;

int FUNC_10 (struct connection *VAR_59) {
  int VAR_60;

  stats_buffer_t VAR_61;
  FUNC_7 (&VAR_61, VAR_59, VAR_50, VAR_10);
  FUNC_6 (&VAR_61, VAR_1 + VAR_0);
  VAR_8;
  VAR_9;

  FUNC_2(VAR_47);
  FUNC_2(VAR_45);
  FUNC_2(VAR_46);
  FUNC_2(VAR_44);
  FUNC_2(VAR_48);
  FUNC_2(VAR_38);
  FUNC_2(VAR_32);


  FUNC_1(VAR_14);
  FUNC_2(VAR_36);


  FUNC_2(VAR_37);
  FUNC_2(VAR_33);
  FUNC_2(VAR_42);

  FUNC_2(VAR_52);
  FUNC_2(VAR_20);

  FUNC_8 (&VAR_61, &VAR_39, "get_top_access");
  FUNC_8 (&VAR_61, &VAR_34, "get_bottom_access");
  FUNC_8 (&VAR_61, &VAR_35, "get_bottom_disk");
  FUNC_8 (&VAR_61, &VAR_40, "get_top_disk");

  FUNC_2(VAR_28);
  FUNC_2(VAR_30);
  FUNC_2(VAR_29);

  FUNC_0(VAR_22);
  FUNC_0(VAR_56);
  FUNC_9 (&VAR_61, "acounters_init_string\t%s\n", VAR_18);
  FUNC_0(VAR_19);
  for (VAR_60 = 0; VAR_60 < VAR_19; VAR_60++) {
    FUNC_9 (&VAR_61, "ac_T_%d\t%.3lfs\n", VAR_60, VAR_11[VAR_60].T);
  }
  FUNC_9 (&VAR_61, "optimized_top_access_uncached_acounter_id\t%d\n", VAR_17);

  FUNC_1(VAR_58);
  FUNC_1(VAR_23);
  FUNC_9 (&VAR_61, "cached_uries_percent\t%.6lf\n", FUNC_5 (VAR_23 * 100.0, VAR_58));
  FUNC_1(VAR_31);
  FUNC_1(VAR_54);
  FUNC_1(VAR_43);
  FUNC_9 (&VAR_61, "avg_uri_bytes\t%.3lf\n", FUNC_5 (VAR_54, VAR_58));
  FUNC_1(VAR_57);

  FUNC_1(VAR_51);
  FUNC_9 (&VAR_61, "cached_uries_known_size_percent\t%.6lf\n", FUNC_5 (VAR_24 * 100.0, VAR_23));

  FUNC_1(VAR_15);
  FUNC_1(VAR_12);
  FUNC_1(VAR_49);
  FUNC_1(VAR_53);
  FUNC_1(VAR_41);
  FUNC_1(VAR_55);
  FUNC_9 (&VAR_61, "uri_cache_hits_percent\t%.6lf\n", FUNC_5 (VAR_55 * 100.0, VAR_41));
  FUNC_1(VAR_27);

  char *VAR_62 = FUNC_3 (1024);
  FUNC_4 (VAR_62, 1024, VAR_16, VAR_13);
  FUNC_9 (&VAR_61, "access_performance%s\n", VAR_62);
  FUNC_4 (VAR_62, 1024, VAR_26, VAR_25);
  FUNC_9 (&VAR_61, "convert_performance%s\n", VAR_62);

  FUNC_9 (&VAR_61, "feature_long_queries\t%d\n", (VAR_21 & VAR_5) ? 1 : 0);
  FUNC_9 (&VAR_61, "feature_replay_delete\t%d\n", (VAR_21 & VAR_6) ? 1 : 0);
  FUNC_9 (&VAR_61, "feature_detailed_server_stats\t%d\n", (VAR_21 & VAR_3) ? 1 : 0);
  FUNC_9 (&VAR_61, "feature_fast_bottom_access\t%d\n", (VAR_21 & VAR_4) ? 1 : 0);
  FUNC_9 (&VAR_61, "feature_access_queries\t%d\n", (VAR_21 & VAR_2) ? 1 : 0);

  FUNC_9 (&VAR_61, "version\t%s\n", VAR_7);

  return VAR_61.pos;
}

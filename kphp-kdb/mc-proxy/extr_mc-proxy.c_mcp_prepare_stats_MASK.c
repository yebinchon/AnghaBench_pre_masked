
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_4__ {double cluster_name; int cluster_no; int cluster_mode; int get_timeout; int set_timeout; int points_num; int tot_buckets; } ;
struct TYPE_3__ {int config_loaded_at; int config_bytes; double config_md5_hex; int clusters_num; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct connection*,char*,int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,int,char*,...) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char* VAR_21 ;
 int VAR_22 ;

int FUNC_4 (struct connection *VAR_23, char *VAR_24, int VAR_25) {
  FUNC_0();
  int VAR_26 = FUNC_1 (VAR_23, VAR_24, VAR_25);
  if (*VAR_13) {
    VAR_26 += FUNC_3 (VAR_24 + VAR_26, VAR_25 - VAR_26, "extension\t%s\n", VAR_13);
  }
  VAR_26 += FUNC_3 (VAR_24 + VAR_26, VAR_25 - VAR_26,
    "heap_allocated\t%ld\n"
    "heap_max\t%ld\n"
    "wasted_heap_blocks\t%d\n"
    "wasted_heap_bytes\t%ld\n"
    "free_heap_blocks\t%d\n"
    "free_heap_bytes\t%ld\n"
    "config_filename\t%s\n"
    "config_loaded_at\t%d\n"
    "config_size\t%d\n"
    "config_md5\t%s\n"
    "cluster_name\t%s\n"
    "cluster_number\t%d\n"
    "cluster_mode\t0x%04x\n"
    "get_timeout\t%.3f\n"
    "set_timeout\t%.3f\n"
    "tot_clusters\t%d\n"
    "cluster_size\t%d\n"
    "points_per_server\t%d\n"
    "active_queries\t%d\n"
    "total_forwarded_queries\t%lld\n"
    "expired_forwarded_queries\t%lld\n"
    "diagonal_received_queries\t%lld\n"
    "diagonal_forwarded_total\t%lld\n"
    "immediate_forwarded_queries\t%lld\n"
    "dropped_overflow_responses\t%lld\n"
    "tot_skipped_answers\t%lld\n"
    "errors_received\t%lld\n"
    "client_errors_received\t%lld\n"
    "total_failed_connections\t%lld\n"
    "total_connect_failures\t%lld\n",
    (long)(VAR_8 - VAR_9),
    (long)(VAR_10 - VAR_9),
    VAR_21,
    VAR_22,
    VAR_14,
    VAR_15,
    VAR_4,
    VAR_1->config_loaded_at,
    VAR_1->config_bytes,
    VAR_1->config_md5_hex,
    VAR_0->cluster_name,
    VAR_0->cluster_no,
    VAR_0->cluster_mode,
    VAR_0->get_timeout,
    VAR_0->set_timeout,
    VAR_1->clusters_num,
    VAR_0->tot_buckets,
    VAR_0->points_num,
    VAR_2,
    VAR_17,
    VAR_12,
    VAR_6,
    VAR_5,
    VAR_16,
    VAR_7,
    VAR_18,
    VAR_11,
    VAR_3,
    VAR_20,
    VAR_19);



  return VAR_26;
}

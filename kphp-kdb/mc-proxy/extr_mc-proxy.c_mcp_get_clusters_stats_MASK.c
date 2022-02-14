
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mc_cluster {int port; int tot_buckets; double a_req; double a_sbytes; double a_rbytes; double a_timeouts; int cluster_name; int t_timeouts; int t_rbytes; int t_sbytes; int t_req; } ;
struct connection {int dummy; } ;
struct TYPE_2__ {int clusters_num; struct mc_cluster* Clusters; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct connection*,char const*,char*,int) ;
 int FUNC_2 (char*,char*,...) ;
 char* VAR_2 ;

int FUNC_3 (struct connection *VAR_3, const char *VAR_4, int VAR_5) {
  int VAR_6;
  char *VAR_7 = VAR_2;
  struct mc_cluster *VAR_8 = VAR_0->Clusters;

  VAR_7 += FUNC_2 (VAR_7, "Port\tBuckets\tReq*\tTX*\tRX*\tTOut*\tTot_Req\tTot_TX\tTot_RX\tTot_T/O\tName\n");
  for (VAR_6 = 0; VAR_6 < VAR_0->clusters_num; VAR_6++, VAR_8++) {
    FUNC_0 (VAR_7 < VAR_2 + VAR_1 - 1024);
    VAR_7 += FUNC_2 (VAR_7, "%d\t%d\t%.1f\t%.1f\t%.1f\t%.1f\t%lld\t%lld\t%lld\t%lld\t%s\n",
          VAR_8->port, VAR_8->tot_buckets,
          VAR_8->a_req, VAR_8->a_sbytes, VAR_8->a_rbytes, VAR_8->a_timeouts,
          VAR_8->t_req, VAR_8->t_sbytes, VAR_8->t_rbytes, VAR_8->t_timeouts,
          VAR_8->cluster_name);
  }
  return FUNC_1 (VAR_3, VAR_4, VAR_2, VAR_7 - VAR_2);
}

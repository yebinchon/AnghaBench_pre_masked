
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mc_config {int clusters_num; scalar_t__ ConfigServersCount; struct mc_cluster* Clusters; } ;
struct mc_cluster {int tot_buckets; scalar_t__ cluster_name; scalar_t__ points; TYPE_1__** buckets; } ;
struct conn_target {int dummy; } ;
struct TYPE_3__ {int port; int target; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__**,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,char*,int ,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

void FUNC_7 (struct mc_config *VAR_0, int VAR_1) {
  int VAR_2, VAR_3;
  for (VAR_2 = 0; VAR_2 < VAR_0->clusters_num; VAR_2++) {
    struct mc_cluster *VAR_4 = &VAR_0->Clusters[VAR_2];
    if (VAR_1) {
      for (VAR_3 = 0; VAR_3 < VAR_4->tot_buckets; VAR_3++) {
        FUNC_5 (1, "destroying target %s:%d\n", FUNC_2 (VAR_4->buckets[VAR_3]->target), VAR_4->buckets[VAR_3]->port);
 FUNC_0 (VAR_4->buckets[VAR_3]);
      }
      FUNC_3 (VAR_4->buckets, 0, VAR_4->tot_buckets * sizeof (struct conn_target *));
    }
    if (VAR_4->points) {
      FUNC_1 (VAR_4->points);
      VAR_4->points = 0;
    }
    if (VAR_4->cluster_name) {
      FUNC_6 (VAR_4->cluster_name, FUNC_4 (VAR_4->cluster_name) + 1);
      VAR_4->cluster_name = 0;
    }
  }

  VAR_0->ConfigServersCount = 0;
  VAR_0->clusters_num = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memcache_server_functions {struct mc_cluster* info; } ;
struct mc_config {int clusters_num; struct mc_cluster* Clusters; } ;
struct mc_cluster {int other_cluster_no; scalar_t__ port; int server_socket; int cluster_no; int cluster_name; struct connection* listening_connection; int mc_proxy_inbound; } ;
struct connection {scalar_t__ basic_type; int fd; int * extra; } ;


 struct connection* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct connection*) ;
 scalar_t__ FUNC_4 (int,int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (int,char*,int,scalar_t__,int,...) ;

int FUNC_6 (struct mc_config *VAR_4, struct mc_config *VAR_5) {
  int VAR_6, VAR_7, VAR_8;
  for (VAR_6 = 0; VAR_6 < VAR_4->clusters_num; VAR_6++) {
    struct mc_cluster *VAR_9 = &VAR_4->Clusters[VAR_6];
    VAR_7 = VAR_9->other_cluster_no;
    if (VAR_7 >= 0) {
      FUNC_0 (VAR_7 < VAR_5->clusters_num);
      struct mc_cluster *VAR_10 = &VAR_5->Clusters[VAR_7];
      FUNC_0 (VAR_10->port == VAR_9->port && VAR_10->other_cluster_no == VAR_6);
      VAR_9->server_socket = VAR_10->server_socket;
      VAR_9->listening_connection = VAR_10->listening_connection;
      VAR_10->server_socket = -1;
      VAR_10->listening_connection = 0;
      VAR_9->listening_connection->extra = &VAR_9->mc_proxy_inbound;
    } else {
      FUNC_0 (FUNC_4 (VAR_9->server_socket, &VAR_2, &VAR_9->mc_proxy_inbound) >= 0);
      VAR_9->listening_connection = VAR_0 + VAR_9->server_socket;
    }
  }
  for (VAR_8 = 0; VAR_8 <= VAR_3; VAR_8++) {
    struct connection *VAR_11 = VAR_0 + VAR_8;
    if (VAR_11->basic_type != VAR_1 || VAR_11->fd != VAR_8) {
      continue;
    }
    struct mc_cluster *VAR_12 = ((struct memcache_server_functions *) VAR_11->extra)->info;
    FUNC_0 (VAR_12 && &VAR_12->mc_proxy_inbound == VAR_11->extra);
    VAR_7 = VAR_12->cluster_no;
    VAR_6 = VAR_12->other_cluster_no;
    FUNC_0 (VAR_12 == &VAR_5->Clusters[VAR_7]);
    if (VAR_6 >= 0) {
      struct mc_cluster *VAR_13 = &VAR_4->Clusters[VAR_6];
      FUNC_0 (VAR_13->cluster_no == VAR_6 && VAR_13->other_cluster_no == VAR_7);
      FUNC_5 (2, "transferring inbound connection #%d (port %d) from old cluster %d to new cluster %d\n", VAR_8, VAR_12->port, VAR_7, VAR_6);
      VAR_11->extra = &VAR_13->mc_proxy_inbound;
    } else {
      FUNC_5 (2, "closing inbound connection #%d (port %d) belonging to old cluster %d, no new cluster\n", VAR_8, VAR_12->port, VAR_7);
      FUNC_3 (VAR_11);
      FUNC_2 (VAR_8);
      FUNC_1 (VAR_8);
    }
  }
  for (VAR_6 = 0; VAR_6 < VAR_5->clusters_num; VAR_6++) {
    struct mc_cluster *VAR_14 = &VAR_5->Clusters[VAR_6];
    if (VAR_14->other_cluster_no == -1) {
      FUNC_0 (VAR_14->server_socket >= 0);
      VAR_8 = VAR_14->server_socket;
      FUNC_5 (1, "closing unneeded listening connection #%d for port %d belonging to old cluster %d (%s)\n", VAR_8, VAR_14->port, VAR_6, VAR_14->cluster_name);
      FUNC_3 (&VAR_0[VAR_8]);
      FUNC_2 (VAR_8);
      FUNC_1 (VAR_8);
      VAR_14->server_socket = -1;
      VAR_14->listening_connection = 0;
    } else {
      FUNC_0 (VAR_14->server_socket == -1 && !VAR_14->listening_connection);
    }
  }
  return 0;
}

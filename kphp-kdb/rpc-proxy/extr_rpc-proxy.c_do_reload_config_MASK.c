
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_config {int clusters_num; scalar_t__* config_md5_hex; int config_bytes; scalar_t__ config_loaded_at; int * Clusters; } ;


 struct rpc_config* VAR_0 ;
 struct rpc_config* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rpc_config*,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_6 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int FUNC_9 (struct rpc_config*,struct rpc_config*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (int ,char*,char*) ;
 scalar_t__* FUNC_14 (int) ;

int FUNC_15 (int VAR_12) {
  int VAR_13;
  VAR_7 = 0;

  VAR_6[0] = FUNC_8 (VAR_5, VAR_2);
  if (VAR_6[0] < 0) {
    FUNC_4 (VAR_10, "cannot re-read config file %s: %m\n", VAR_5);
    return -1;
  }

  VAR_13 = FUNC_5 ();
  if (VAR_13 > 0 && VAR_11 > 0) {
    FUNC_4 (VAR_10, "/etc/hosts changed, reloaded\n");
  }

  VAR_13 = FUNC_9 (VAR_1, VAR_0, 0);

  FUNC_1 (VAR_6[0]);



  if (VAR_13 < 0) {
    FUNC_13 (0, "error while re-reading config file %s, new configuration NOT applied\n", VAR_5);
    return VAR_13;
  }

  VAR_13 = FUNC_9 (VAR_1, VAR_0, 1);

  if (VAR_13 < 0) {
    FUNC_13 (0, "fatal error while re-reading config file %s\n", VAR_5);
    FUNC_0 (VAR_1, 0);
    FUNC_3 (-VAR_13);
  }

  struct rpc_config *VAR_14 = VAR_0;
  VAR_0 = VAR_1;
  VAR_1 = VAR_14;

  VAR_9 = FUNC_11 (VAR_9);
  int VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_0->clusters_num; VAR_15++) {
    VAR_9 = FUNC_12 (VAR_9, &VAR_0->Clusters[VAR_15], FUNC_6 ());
  }

  FUNC_0 (VAR_1, 1);

  if (VAR_12) {
    FUNC_2 ();
  }

  VAR_0->config_loaded_at = VAR_8 ? VAR_8 : FUNC_10 (0);
  VAR_0->config_bytes = VAR_4;
  VAR_0->config_md5_hex = FUNC_14 (33);
  FUNC_7 (VAR_3, VAR_4, VAR_0->config_md5_hex);
  VAR_0->config_md5_hex[32] = 0;

  FUNC_13 (0, "configuration file %s re-read successfully, new configuration active\n", VAR_5);

  return 0;
}

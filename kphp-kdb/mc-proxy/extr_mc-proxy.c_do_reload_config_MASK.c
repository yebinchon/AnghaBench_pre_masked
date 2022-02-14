
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_config {scalar_t__* config_md5_hex; int config_bytes; scalar_t__ config_loaded_at; } ;


 struct mc_config* VAR_0 ;
 struct mc_config* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mc_config*,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_6 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int FUNC_8 (struct mc_config*,struct mc_config*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct mc_config*,struct mc_config*) ;
 int FUNC_11 (struct mc_config*) ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (int ,char*,char*) ;
 scalar_t__* FUNC_13 (int) ;

int FUNC_14 (int VAR_11) {
  int VAR_12;
  VAR_7 = 0;

  VAR_6[0] = FUNC_7 (VAR_5, VAR_2);
  if (VAR_6[0] < 0) {
    FUNC_4 (VAR_9, "cannot re-read config file %s: %m\n", VAR_5);
    return -1;
  }

  VAR_12 = FUNC_5 ();
  if (VAR_12 > 0 && VAR_10 > 0) {
    FUNC_4 (VAR_9, "/etc/hosts changed, reloaded\n");
  }

  VAR_12 = FUNC_8 (VAR_1, VAR_0, 0);

  FUNC_1 (VAR_6[0]);



  if (VAR_12 < 0) {
    FUNC_12 (0, "error while re-reading config file %s, new configuration NOT applied\n", VAR_5);
    return VAR_12;
  }

  VAR_12 = FUNC_11 (VAR_1);
  if (VAR_12 < 0) {
    FUNC_12 (0, "error while re-reading config file %s, new configuration NOT applied: cannot open listening ports\n", VAR_5);
    return VAR_12;
  }

  VAR_12 = FUNC_8 (VAR_1, VAR_0, 1);

  if (VAR_12 < 0) {
    FUNC_0 (VAR_1, 0);
    FUNC_12 (0, "fatal error while re-reading config file %s\n", VAR_5);
    FUNC_3 (-VAR_12);
  }

  if (VAR_11) {
    FUNC_10 (VAR_1, VAR_0);
  }

  struct mc_config *VAR_13 = VAR_0;
  VAR_0 = VAR_1;
  VAR_1 = VAR_13;

  FUNC_0 (VAR_1, 1);

  if (VAR_11) {
    FUNC_2 ();
  }

  VAR_0->config_loaded_at = VAR_8 ? VAR_8 : FUNC_9 (0);
  VAR_0->config_bytes = VAR_4;
  VAR_0->config_md5_hex = FUNC_13 (33);
  FUNC_6 (VAR_3, VAR_4, VAR_0->config_md5_hex);
  VAR_0->config_md5_hex[32] = 0;

  FUNC_12 (0, "configuration file %s re-read successfully, new configuration active\n", VAR_5);

  return 0;
}

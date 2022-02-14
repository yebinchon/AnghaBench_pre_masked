
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_hash_table_p ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_5 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_8 (int VAR_10) {
  int VAR_11;
  VAR_6 = 0;

  VAR_5[0] = FUNC_6 (VAR_1, VAR_0);
  if (VAR_5[0] < 0) {
    FUNC_4 (VAR_8, "cannot re-read config file %s: %m\n", VAR_1);
    return -3;
  }

  VAR_11 = FUNC_5 ();
  if (VAR_11 > 0 && VAR_9 > 0) {
    FUNC_4 (VAR_8, "/etc/hosts changed, reloaded\n");
  }

  VAR_11 = FUNC_7 (VAR_4, 4);

  FUNC_1 (VAR_5[0]);

  if (VAR_11 < 0) {
    FUNC_0 (VAR_4);
    FUNC_4 (VAR_8, "error while re-reading config file %s, new configuration NOT applied\n", VAR_1);
    return VAR_11;
  }

  VAR_11 = FUNC_7 (VAR_4, 3);

  if (VAR_11 < 0) {
    FUNC_0 (VAR_4);
    FUNC_4 (VAR_8, "error while re-reading config file %s, new configuration NOT applied\n", VAR_1);
    return VAR_11;
  }

  VAR_11 = FUNC_7 (VAR_4, 1);

  if (VAR_11 < 0) {
    FUNC_0 (VAR_4);
    FUNC_4 (VAR_8, "fatal error while re-reading config file %s\n", VAR_1);
    FUNC_3 (-VAR_11);
  }

  FUNC_0 (VAR_3);

  db_hash_table_p VAR_12 = VAR_3;
  VAR_3 = VAR_4;
  VAR_4 = VAR_12;

  if (VAR_10) {
    FUNC_2 ();
  }

  VAR_2 = VAR_7;

  if (VAR_9 > 0) {
    FUNC_4 (VAR_8, "configuration file %s re-read successfully, new configuration active\n", VAR_1);
  }

  return 0;
}

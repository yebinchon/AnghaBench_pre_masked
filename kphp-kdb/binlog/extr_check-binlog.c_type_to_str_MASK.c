
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

static inline const char *FUNC_1 (int VAR_0) {
  static const char *VAR_1[3] = {"binlog", "backup", "snapshot"};
  FUNC_0 (VAR_0 >= 0 && VAR_0 < 3);
  return VAR_1[VAR_0];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;

int FUNC_1 (int VAR_7) {
  if (VAR_7 == VAR_0) {
    if (VAR_7 - VAR_0 != VAR_5) {
      FUNC_0 (0, "index file key [-x] is not as in index\n");
      return -1;
    }
    return VAR_6 = 0;
  }
  if (VAR_7 == VAR_1 || VAR_7 == VAR_1 + 1) {
    if (VAR_7 - VAR_1 != VAR_5) {
      FUNC_0 (0, "index file key [-x] is not as in index\n");
      return -1;
    }
    return VAR_6 = 1;
  }
  if (VAR_7 == VAR_2 || VAR_7 == VAR_2 + 1) {
    if (VAR_7 - VAR_2 != VAR_5) {
      FUNC_0 (0, "index file key [-x] is not as in index\n");
      return -1;
    }
    return VAR_6 = 2;
  }
  if (VAR_7 == VAR_3 || VAR_7 == VAR_3 + 1) {
    if (VAR_7 - VAR_3 != VAR_5) {
      FUNC_0 (0, "index file key [-x] is not as in index\n");
      return -1;
    }
    return VAR_6 = 3;
  }
  if (VAR_7 == VAR_4 || VAR_7 == VAR_4 + 1) {
    if (VAR_7 - VAR_4 != VAR_5) {
      FUNC_0 (0, "index file key [-x] is not as in index\n");
      return -1;
    }
    return VAR_6 = 4;
  }
  FUNC_0 (0, "Unknown index magic %x\n", VAR_7);
  return -1;
}

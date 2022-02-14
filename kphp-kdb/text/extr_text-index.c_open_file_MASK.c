
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
 int FUNC_0 (int) ;
 int* VAR_6 ;
 char** VAR_7 ;
 int FUNC_1 (int ,char*,char*,...) ;
 scalar_t__* VAR_8 ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int,int) ;
 char* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_4 (int VAR_12, char *VAR_13, int VAR_14) {
  VAR_7[VAR_12] = VAR_13;
  VAR_6[VAR_12] = FUNC_3 (VAR_13, VAR_14 > 0 ? VAR_3 | VAR_0 | VAR_1 : VAR_2, 0600);
  if (VAR_14 < 0 && VAR_6[VAR_12] < 0) {
    if (VAR_6[VAR_12] < 0) {
      FUNC_1 (VAR_10, "%s: cannot open %s: %m\n", VAR_9, VAR_13);
    }
    return -1;
  }
  if (VAR_6[VAR_12] < 0) {
    FUNC_1 (VAR_10, "%s: cannot open %s: %m\n", VAR_9, VAR_13);
    FUNC_0(1);
  }
  VAR_8[VAR_12] = FUNC_2 (VAR_6[VAR_12], 0, VAR_4);
  if (VAR_8[VAR_12] < 0) {
    FUNC_1 (VAR_10, "%s: cannot seek %s: %m\n", VAR_9, VAR_13);
    FUNC_0(2);
  }
  FUNC_2 (VAR_6[VAR_12], 0, VAR_5);
  if (VAR_11) {
    FUNC_1 (VAR_10, "opened file %s, fd=%d, size=%ld\n", VAR_13, VAR_6[VAR_12], VAR_8[VAR_12]);
  }
  return VAR_6[VAR_12];
}

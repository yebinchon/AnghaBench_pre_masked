
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
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int* VAR_7 ;
 int * VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int* VAR_10 ;
 int * VAR_11 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char const*,int,int) ;
 char* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

int FUNC_5 (int VAR_15, const char *VAR_16, int VAR_17) {
  if (VAR_15 < 0 || VAR_15 >= VAR_0) {
    FUNC_2 (VAR_13, "%s: cannot open %s, bad local fid %d: %m\n", VAR_12, VAR_16, VAR_15);
    return -1;
  }

  VAR_8[VAR_15] = FUNC_0 (VAR_16);
  int VAR_18;
  if (VAR_17 > 0) {
    VAR_18 = VAR_3 | VAR_1;
    if (VAR_17 == 2) {
      VAR_18 |= VAR_4;
    }
  } else {
    VAR_10[VAR_15] = 1;
    VAR_18 = VAR_2;
  }

  VAR_7[VAR_15] = FUNC_4 (VAR_16, VAR_18, 0600);
  if (VAR_17 < 0 && VAR_7[VAR_15] < 0) {
    FUNC_2 (VAR_13, "%s: cannot open %s: %m\n", VAR_12, VAR_16);
    return -1;
  }
  if (VAR_7[VAR_15] < 0) {
    FUNC_2 (VAR_13, "%s: cannot open %s: %m\n", VAR_12, VAR_16);
    FUNC_1 (1);
  }
  VAR_11[VAR_15] = FUNC_3 (VAR_7[VAR_15], 0, VAR_5);
  if (VAR_11[VAR_15] < 0) {
    FUNC_2 (VAR_13, "%s: cannot seek %s: %m\n", VAR_12, VAR_16);
    FUNC_1 (2);
  }
  FUNC_3 (VAR_7[VAR_15], 0, VAR_6);
  if (VAR_14) {
    FUNC_2 (VAR_13, "opened file %s, fd=%d, size=%d\n", VAR_16, VAR_7[VAR_15], VAR_11[VAR_15]);
  }
  VAR_9[VAR_15] = 0;
  return VAR_7[VAR_15];
}

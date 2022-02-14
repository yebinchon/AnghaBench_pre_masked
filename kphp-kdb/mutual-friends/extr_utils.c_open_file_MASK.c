
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
 int FUNC_1 (int) ;
 int VAR_6 ;
 int* VAR_7 ;
 char** VAR_8 ;
 int FUNC_2 (int ,char*,char*,...) ;
 scalar_t__* VAR_9 ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int,int) ;
 char* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

int FUNC_5 (int VAR_13, char *VAR_14, int VAR_15) {
  FUNC_0 (VAR_6);
  FUNC_0 (0 <= VAR_13 && VAR_13 < VAR_6);



  VAR_8[VAR_13] = VAR_14;
  int VAR_16;
  if (VAR_15 > 0) {
    VAR_16 = VAR_2 | VAR_0;
    if (VAR_15 == 2) {
      VAR_16 |= VAR_3;
    }
  } else {
    VAR_16 = VAR_1;
  }

  VAR_7[VAR_13] = FUNC_4 (VAR_14, VAR_16, 0600);
  if (VAR_15 < 0 && VAR_7[VAR_13] < 0) {
    if (VAR_7[VAR_13] < 0) {
      FUNC_2 (VAR_11, "%s: cannot open %s: %m\n", VAR_10, VAR_14);
    }
    return -1;
  }
  if (VAR_7[VAR_13] < 0) {
    FUNC_2 (VAR_11, "%s: cannot open %s: %m\n", VAR_10, VAR_14);
    FUNC_1 (1);
  }
  VAR_9[VAR_13] = FUNC_3 (VAR_7[VAR_13], 0, VAR_4);
  if (VAR_9[VAR_13] < 0) {
    FUNC_2 (VAR_11, "%s: cannot seek %s: %m\n", VAR_10, VAR_14);
    FUNC_1 (2);
  }
  FUNC_3 (VAR_7[VAR_13], 0, VAR_5);
  if (VAR_12) {
    FUNC_2 (VAR_11, "opened file %s, fd=%d, size=%ld\n", VAR_14, VAR_7[VAR_13], VAR_9[VAR_13]);
  }
  return VAR_7[VAR_13];
}

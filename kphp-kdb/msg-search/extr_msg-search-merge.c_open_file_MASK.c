
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int* VAR_5 ;
 char** VAR_6 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int* VAR_7 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int,int) ;
 char* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

int FUNC_4 (int VAR_11, char *VAR_12, int VAR_13) {
  VAR_6[VAR_11] = VAR_12;
  VAR_7[VAR_11] = -1;
  VAR_5[VAR_11] = FUNC_3 (VAR_12, VAR_13 > 0 ? VAR_2 | VAR_0 : VAR_1, 0600);
  if (VAR_13 < 0 && VAR_5[VAR_11] < 0) {
    FUNC_1 (VAR_9, "%s: cannot open %s: %m\n", VAR_8, VAR_12);
    return -1;
  }
  if (VAR_5[VAR_11] < 0) {
    FUNC_1 (VAR_9, "%s: cannot open %s: %m\n", VAR_8, VAR_12);
    FUNC_0(1);
  }
  VAR_7[VAR_11] = FUNC_2 (VAR_5[VAR_11], 0, VAR_3);
  if (VAR_7[VAR_11] < 0) {
    FUNC_1 (VAR_9, "%s: cannot seek %s: %m\n", VAR_8, VAR_12);
    FUNC_0(2);
  }
  FUNC_2 (VAR_5[VAR_11], 0, VAR_4);
  if (VAR_10) {
    FUNC_1 (VAR_9, "opened file %s, fd=%d, size=%d\n", VAR_12, VAR_5[VAR_11], VAR_7[VAR_11]);
  }
  return VAR_5[VAR_11];
}

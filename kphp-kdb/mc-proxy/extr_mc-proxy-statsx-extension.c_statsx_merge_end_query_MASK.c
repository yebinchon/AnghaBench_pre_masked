
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsx_gather_extra {int flags; scalar_t__ Q_raw; } ;
struct gather_entry {int res_bytes; int num; scalar_t__* data; } ;
struct connection {int Out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gather_entry*) ;
 int FUNC_4 (struct gather_entry*,struct statsx_gather_extra*) ;
 int FUNC_5 (char*,struct statsx_gather_extra*) ;
 int* FUNC_6 () ;
 int FUNC_7 (char*,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *,char*,int) ;

int FUNC_9 (struct connection *VAR_13, const char *VAR_14, int VAR_15, void *VAR_16, struct gather_entry *VAR_17, int VAR_18) {
  struct statsx_gather_extra *VAR_19 = VAR_16;
  VAR_8 = VAR_19->Q_raw;

  int VAR_20;
  int VAR_21 = VAR_19->flags & VAR_5;
  int VAR_22 = VAR_19->flags & VAR_6;
  VAR_7 = VAR_19->flags & VAR_0;
  int VAR_23 = !(VAR_19->flags & VAR_4);
  int VAR_24 = VAR_19->flags & VAR_3;
  int VAR_25 = VAR_19->flags & VAR_1;
  VAR_9 = 0;

  if (VAR_12 >= 4) {
   FUNC_1 (VAR_11, "one_int = %d, union_mode = %d\n", VAR_21, VAR_22);
 }
  int VAR_26 = 0;

  FUNC_0 (VAR_19->flags & VAR_2);

  for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) if (VAR_17[VAR_20].res_bytes > 0) {

    if (!VAR_21) {
      if (!VAR_22) {
        FUNC_4 (&VAR_17[VAR_20], VAR_19);
      } else {
        FUNC_3 (&VAR_17[VAR_20]);
      }
    } else {
      if (VAR_17[VAR_20].res_bytes >= 4) {
        VAR_26 += VAR_17[VAR_20].data[0];
      }
    }
  } else {
    if (VAR_17[VAR_20].num == -1) {
      VAR_9 ++;
    }
    if (VAR_12 >= 4) {
      FUNC_1 (VAR_11, "Dropping result %d (num = %d)\n", VAR_20, VAR_17[VAR_20].num);
    }
  }


  if (VAR_22) {
    VAR_26 = 0;
    int VAR_27 = -1;
    long long VAR_28 = 0;
    if (!VAR_8 && VAR_7) {
      if (VAR_26) {
        VAR_10[VAR_26 ++] = ',';
      }
      VAR_26 += FUNC_7 (VAR_10 + VAR_26, "%d", VAR_9);
    }
    while (VAR_26 < 100000) {
      int *VAR_29 = FUNC_6 ();
      if (!VAR_29) {
        break;
      }
      if (VAR_27 == *VAR_29) {
        if (VAR_24) {
          VAR_28 += *(VAR_29 + 1);
        }
        FUNC_2 ();
        continue;
      }
      if (VAR_27 != -1) {
        if (VAR_24) {
          if (VAR_8) {
            *(int *)(VAR_10 + VAR_26) = VAR_28;
            VAR_26 += 4;
          } else {
            if (VAR_26) {
              VAR_10[VAR_26 ++] = ',';
            }
            VAR_26 += FUNC_7 (VAR_10 + VAR_26, "%lld", VAR_28);
          }
        }
        if (VAR_8) {
          *(int *)(VAR_10 + VAR_26) = VAR_27;
          VAR_26 += 4;
        } else {
          if (VAR_26) {
            VAR_10[VAR_26 ++] = ',';
          }
          if (!VAR_24) {
            VAR_26 += FUNC_7 (VAR_10 + VAR_26, "%d", VAR_27);
          } else {
            VAR_26 += FUNC_7 (VAR_10 + VAR_26, "%d,%d", VAR_27 % 100, VAR_27 / 100);
          }
        }
      }
      VAR_27 = *VAR_29;
      VAR_28 = *(VAR_29 + 1);
      FUNC_2 ();
    }
    if (VAR_27 != -1) {
      if (VAR_24) {
        if (VAR_8) {
          *(int *)(VAR_10 + VAR_26) = VAR_28;
          VAR_26 += 4;
        } else {
          if (VAR_26) {
            VAR_10[VAR_26 ++] = ',';
          }
          VAR_26 += FUNC_7 (VAR_10 + VAR_26, "%lld", VAR_28);
        }
      }
      if (VAR_8) {
        *(int *)(VAR_10 + VAR_26) = VAR_27;
        VAR_26 += 4;
      } else {
        if (VAR_26) {
          VAR_10[VAR_26 ++] = ',';
        }
        if (!VAR_24) {
          VAR_26 += FUNC_7 (VAR_10 + VAR_26, "%d", VAR_27);
        } else {
          VAR_26 += FUNC_7 (VAR_10 + VAR_26, "%d,%d", VAR_27 % 100, VAR_27 / 100);
        }
      }
    }
  }

  if (VAR_25) {
    VAR_26 = FUNC_5 (VAR_10, VAR_19);
  }



  if (VAR_21) {
    VAR_23 = 0;
    if (!VAR_8) {
      if (!VAR_7) {
        VAR_26 = FUNC_7 (VAR_10, "%d", VAR_26);
      } else {
        VAR_26 = FUNC_7 (VAR_10, "%d,%d", VAR_9, VAR_26);
      }
    } else {
      *(int *)VAR_10 = VAR_26;
      VAR_26 = 4;
    }
  }
  if (VAR_23 && !VAR_8 && !VAR_22) {
    FUNC_8 (&VAR_13->Out, VAR_10+VAR_26, FUNC_7 (VAR_10+VAR_26, "VALUE %s 1 %d\r\n", VAR_14, VAR_26));
  } else {
    FUNC_8 (&VAR_13->Out, VAR_10+VAR_26, FUNC_7 (VAR_10+VAR_26, "VALUE %s 0 %d\r\n", VAR_14, VAR_26));
  }
  FUNC_8 (&VAR_13->Out, VAR_10, VAR_26);
  FUNC_8 (&VAR_13->Out, "\r\n", 2);

  return 0;
}

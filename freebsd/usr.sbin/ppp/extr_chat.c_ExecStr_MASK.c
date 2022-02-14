
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {int fd; TYPE_1__* dl; } ;
typedef int pid_t ;
struct TYPE_2__ {int bundle; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char**,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char**) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char**,int,char const* const*,int ,int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int VAR_13 ;
 int FUNC_12 (char*,char**) ;
 int FUNC_13 (int,int ,int) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*,char*,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int*) ;
 int FUNC_22 (int,char*,int) ;
 int FUNC_23 (int ) ;
 int VAR_14 ;
 char* FUNC_24 (char*) ;
 char* FUNC_25 (int ) ;
 int FUNC_26 () ;
 int FUNC_27 (int ,int*,int ) ;

__attribute__((used)) static void
FUNC_28(struct physical *VAR_15, char *VAR_16, char *VAR_17, int VAR_18)
{
  pid_t VAR_19;
  int VAR_20[2];
  char *VAR_21[VAR_3], *VAR_22[VAR_3], *VAR_23, *VAR_24;
  int VAR_25, VAR_26, VAR_27, VAR_28;

  FUNC_19(VAR_1, "Exec: %s\n", VAR_16);
  if ((VAR_27 = FUNC_1(VAR_16, VAR_22, FUNC_2(VAR_22),
                       VAR_6|VAR_5)) <= 0) {
    if (VAR_27 < 0)
      FUNC_19(VAR_2, "Syntax error in exec command\n");
    *VAR_17 = '\0';
    return;
  }

  if (FUNC_21(VAR_20) < 0) {
    FUNC_19(VAR_1, "Unable to create pipe in ExecStr: %s\n",
       FUNC_25(VAR_13));
    *VAR_17 = '\0';
    return;
  }
  if ((VAR_19 = FUNC_14()) == 0) {
    FUNC_9(VAR_21, VAR_27, (char const *const *)VAR_22,
                   VAR_15->dl->bundle, 0, FUNC_18());
    FUNC_8(VAR_20[0]);
    FUNC_26();
    if (VAR_20[1] == VAR_8)
      VAR_20[1] = FUNC_10(VAR_20[1]);
    FUNC_11(VAR_15->fd, VAR_8);
    FUNC_11(VAR_20[1], VAR_7);
    FUNC_11(VAR_8, VAR_9);
    FUNC_8(3);
    if (FUNC_20(VAR_12, VAR_4) != 3)
      FUNC_20(VAR_11, VAR_4);
    for (VAR_28 = FUNC_17(); VAR_28 > 3; VAR_28--)
      FUNC_13(VAR_28, VAR_0, 1);

    FUNC_23(FUNC_0());

    FUNC_12(VAR_21[0], VAR_21);
    FUNC_15(VAR_14, "execvp: %s: %s\n", VAR_21[0], FUNC_25(VAR_13));
    FUNC_7(127);
  } else {
    char *VAR_29 = FUNC_24(VAR_22[0]);

    FUNC_8(VAR_20[1]);
    VAR_24 = VAR_17 + VAR_18 - 1;
    VAR_23 = VAR_17;
    while (VAR_17 < VAR_24) {
      VAR_26 = FUNC_22(VAR_20[0], VAR_17, 1);
      if (VAR_26 <= 0)
 break;
      VAR_17++;
    }
    *VAR_17 = '\0';
    FUNC_8(VAR_20[0]);
    FUNC_8(VAR_20[1]);
    FUNC_27(VAR_19, &VAR_25, VAR_10);
    if (FUNC_5(VAR_25)) {
      FUNC_19(VAR_2, "%s: signal %d\n", VAR_29, FUNC_6(VAR_25));
      FUNC_16(VAR_29);
      *VAR_17 = '\0';
      return;
    } else if (FUNC_4(VAR_25)) {
      switch (FUNC_3(VAR_25)) {
        case 0:
          FUNC_16(VAR_29);
          break;
        case 127:
          FUNC_19(VAR_2, "%s: %s\n", VAR_29, VAR_23);
          FUNC_16(VAR_29);
          *VAR_17 = '\0';
          return;
          break;
        default:
          FUNC_19(VAR_2, "%s: exit %d\n", VAR_29, FUNC_3(VAR_25));
          FUNC_16(VAR_29);
          *VAR_17 = '\0';
          return;
          break;
      }
    } else {
      FUNC_19(VAR_2, "%s: Unexpected exit result\n", VAR_29);
      FUNC_16(VAR_29);
      *VAR_17 = '\0';
      return;
    }
  }
}

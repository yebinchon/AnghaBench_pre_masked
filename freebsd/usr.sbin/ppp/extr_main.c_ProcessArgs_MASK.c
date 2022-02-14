
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switches {int mode; int unit; int nat; int quiet; int fg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_1 () ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (struct switches*,char,int) ;
 int VAR_5 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(int VAR_6, char **VAR_7, struct switches *VAR_8)
{
  int VAR_9, VAR_10, VAR_11;
  char *VAR_12;

  VAR_9 = 0;
  FUNC_6(VAR_8, '\0', sizeof *VAR_8);
  VAR_8->mode = VAR_4;
  VAR_8->unit = -1;

  for (VAR_11 = 1; VAR_11 < VAR_6 && *VAR_7[VAR_11] == '-'; VAR_11++, VAR_9++) {
    VAR_12 = VAR_7[VAR_11] + 1;
    VAR_10 = FUNC_0(VAR_12);
    switch (VAR_10) {
      case 128:
        if (FUNC_7(VAR_12, "nat") == 0) {



          VAR_8->nat = 1;

          VAR_9--;
        } else if (FUNC_7(VAR_12, "alias") == 0) {




          FUNC_5(VAR_1, "%s is deprecated\n", VAR_7[VAR_11]);
          FUNC_4(VAR_5, "%s is deprecated\n", VAR_7[VAR_11]);
          VAR_8->nat = 1;

          VAR_9--;
        } else if (FUNC_8(VAR_12, "unit", 4) == 0) {
          VAR_9--;
          if (VAR_12[4] == '\0') {
            VAR_9--;
            if (++VAR_11 == VAR_6) {
              FUNC_4(VAR_5, "-unit: Expected unit number\n");
              FUNC_1();
            } else
              VAR_8->unit = FUNC_2(VAR_7[VAR_11]);
          } else
            VAR_8->unit = FUNC_2(VAR_12 + 4);
        } else if (FUNC_7(VAR_12, "quiet") == 0) {
          VAR_8->quiet = 1;
          VAR_9--;
        } else
          FUNC_1();
        break;

      case 129:
        FUNC_1();
        break;

      default:
        VAR_8->mode = VAR_10;
        if (VAR_10 == VAR_3)
          VAR_8->fg = 1;
    }
  }

  if (VAR_9 > 1) {
    FUNC_4(VAR_5, "You may specify only one mode.\n");
    FUNC_3(VAR_0);
  }

  if (VAR_8->mode == VAR_2 && VAR_11 == VAR_6) {
    FUNC_4(VAR_5, "A system must be specified in auto mode.\n");
    FUNC_3(VAR_0);
  }

  return VAR_11;
}

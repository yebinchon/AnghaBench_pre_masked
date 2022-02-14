
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink {int physical; int state; struct datalink* next; } ;
struct bundle {struct datalink* links; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bundle*) ;
 scalar_t__ FUNC_4 (struct bundle*) ;
 int FUNC_5 (struct bundle*) ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,char*,long,...) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (int,char*,int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 (scalar_t__,int*,int ) ;
 int FUNC_22 (int,char*,int) ;

void
FUNC_23(struct bundle *VAR_11, int VAR_12)
{





  pid_t VAR_13, VAR_14;
  int VAR_15[2];
  char VAR_16;
  struct datalink *VAR_17;

  if (!VAR_12 && FUNC_4(VAR_11)) {






    return;
  }

  VAR_14 = FUNC_9();
  if (FUNC_13(VAR_15) == -1) {
    FUNC_10(VAR_2, "pipe: %s\n", FUNC_18(VAR_10));
    return;
  }
  switch ((VAR_13 = FUNC_7())) {
    case -1:
      FUNC_10(VAR_2, "fork: %s\n", FUNC_18(VAR_10));
      FUNC_6(VAR_15[0]);
      FUNC_6(VAR_15[1]);
      return;
    case 0:
      FUNC_6(VAR_15[1]);
      FUNC_14(VAR_15[0], &VAR_16, 1);
      FUNC_6(VAR_15[0]);
      if (FUNC_13(VAR_15) == -1) {
        FUNC_10(VAR_2, "pipe(2): %s\n", FUNC_18(VAR_10));
        return;
      }
      switch ((VAR_13 = FUNC_7())) {
        case -1:
          FUNC_10(VAR_2, "fork(2): %s\n", FUNC_18(VAR_10));
          FUNC_6(VAR_15[0]);
          FUNC_6(VAR_15[1]);
          return;
        case 0:
          FUNC_6(VAR_15[1]);
          FUNC_5(VAR_11);
          FUNC_14(VAR_15[0], &VAR_16, 1);
          FUNC_6(VAR_15[0]);
          FUNC_15();
          FUNC_3(VAR_11);
          FUNC_10(VAR_1, "%ld -> %ld: %s session control\n",
                     (long)VAR_14, (long)FUNC_9(),
                     VAR_12 ? "Passed" : "Dropped");
          FUNC_19(0);
          break;
        default:
          FUNC_6(VAR_15[0]);

          for (VAR_17 = VAR_11->links; VAR_17; VAR_17 = VAR_17->next)
            if (VAR_17->state != VAR_0)
              FUNC_12(VAR_17->physical, VAR_13);
          FUNC_22(VAR_15[1], "!", 1);
          FUNC_6(VAR_15[1]);
          FUNC_2(0);
          break;
      }
      break;
    default:
      FUNC_6(VAR_15[0]);

      for (VAR_17 = VAR_11->links; VAR_17; VAR_17 = VAR_17->next)
        if (VAR_17->state != VAR_0)
          FUNC_12(VAR_17->physical, VAR_13);
      FUNC_22(VAR_15[1], "!", 1);
      FUNC_6(VAR_15[1]);
      if (VAR_12) {
        int VAR_18, VAR_19;

        FUNC_20();
        FUNC_17(VAR_6, VAR_9);
        FUNC_17(VAR_3, VAR_9);
        FUNC_17(VAR_4, VAR_9);
        FUNC_17(VAR_8, VAR_9);
        FUNC_17(VAR_5, VAR_9);
        FUNC_17(VAR_7, VAR_9);
        for (VAR_18 = FUNC_8(); VAR_18 >= 0; VAR_18--)
          FUNC_6(VAR_18);




        FUNC_21(VAR_13, &VAR_19, 0);

        FUNC_1("session owner");

        FUNC_16(FUNC_0());
        FUNC_11();
      }
      FUNC_2(0);
      break;
  }
}

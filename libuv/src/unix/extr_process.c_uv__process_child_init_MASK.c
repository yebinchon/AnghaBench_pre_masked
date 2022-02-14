
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int args; int file; int * env; int uid; int gid; int * cwd; } ;
typedef TYPE_1__ uv_process_options_t ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int *,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (int,int ) ;

__attribute__((used)) static void FUNC_19(const uv_process_options_t* VAR_14,
                                   int VAR_15,
                                   int (*VAR_16)[2],
                                   int VAR_17) {
  sigset_t VAR_18;
  int VAR_19;
  int VAR_20;
  int VAR_21;
  int VAR_22;
  int VAR_23;

  if (VAR_14->flags & VAR_9)
    FUNC_11();





  for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
    VAR_20 = VAR_16[VAR_22][1];
    if (VAR_20 < 0 || VAR_20 >= VAR_22)
      continue;
    VAR_16[VAR_22][1] = FUNC_6(VAR_20, VAR_0, VAR_15);
    if (VAR_16[VAR_22][1] == -1) {
      FUNC_18(VAR_17, FUNC_1(VAR_13));
      FUNC_2(127);
    }
  }

  for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
    VAR_19 = VAR_16[VAR_22][0];
    VAR_20 = VAR_16[VAR_22][1];

    if (VAR_20 < 0) {
      if (VAR_22 >= 3)
        continue;
      else {



        VAR_20 = FUNC_7("/dev/null", VAR_22 == 0 ? VAR_1 : VAR_2);
        VAR_19 = VAR_20;

        if (VAR_20 < 0) {
          FUNC_18(VAR_17, FUNC_1(VAR_13));
          FUNC_2(127);
        }
      }
    }

    if (VAR_22 == VAR_20)
      FUNC_15(VAR_20, 0);
    else
      VAR_22 = FUNC_4(VAR_20, VAR_22);

    if (VAR_22 == -1) {
      FUNC_18(VAR_17, FUNC_1(VAR_13));
      FUNC_2(127);
    }

    if (VAR_22 <= 2)
      FUNC_17(VAR_22, 0);

    if (VAR_19 >= VAR_15)
      FUNC_16(VAR_19);
  }

  for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
    VAR_20 = VAR_16[VAR_22][1];

    if (VAR_20 >= VAR_15)
      FUNC_16(VAR_20);
  }

  if (VAR_14->cwd != ((void*)0) && FUNC_3(VAR_14->cwd)) {
    FUNC_18(VAR_17, FUNC_1(VAR_13));
    FUNC_2(127);
  }

  if (VAR_14->flags & (VAR_11 | VAR_10)) {







    FUNC_0(FUNC_10(0, ((void*)0)));
  }

  if ((VAR_14->flags & VAR_10) && FUNC_9(VAR_14->gid)) {
    FUNC_18(VAR_17, FUNC_1(VAR_13));
    FUNC_2(127);
  }

  if ((VAR_14->flags & VAR_11) && FUNC_12(VAR_14->uid)) {
    FUNC_18(VAR_17, FUNC_1(VAR_13));
    FUNC_2(127);
  }

  if (VAR_14->env != ((void*)0)) {
    VAR_12 = VAR_14->env;
  }






  for (VAR_23 = 1; VAR_23 < 32; VAR_23 += 1) {
    if (VAR_23 == VAR_3 || VAR_23 == VAR_5)
      continue;






    if (VAR_7 != FUNC_14(VAR_23, VAR_6))
      continue;

    FUNC_18(VAR_17, FUNC_1(VAR_13));
    FUNC_2(127);
  }


  FUNC_13(&VAR_18);
  VAR_21 = FUNC_8(VAR_8, &VAR_18, ((void*)0));

  if (VAR_21 != 0) {
    FUNC_18(VAR_17, FUNC_1(VAR_21));
    FUNC_2(127);
  }

  FUNC_5(VAR_14->file, VAR_14->args);
  FUNC_18(VAR_17, FUNC_1(VAR_13));
  FUNC_2(127);
}

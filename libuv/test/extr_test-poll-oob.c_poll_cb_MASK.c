
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_poll_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int) ;
 int * VAR_10 ;
 int FUNC_3 (int,char**,int,int ) ;
 int FUNC_4 (int,char*,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int *,int,void (*) (int *,int,int)) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(uv_poll_t* VAR_13, int VAR_14, int VAR_15) {
  char VAR_16[5];
  int VAR_17;
  int VAR_18;

  FUNC_0(0 == FUNC_6((uv_handle_t*)VAR_13, &VAR_18));
  FUNC_2(VAR_16, 0, 5);

  if (VAR_15 & VAR_3) {
    do
      VAR_17 = FUNC_3(VAR_8, &VAR_16, 5, VAR_2);
    while (VAR_17 == -1 && VAR_9 == VAR_0);
    FUNC_0(VAR_17 >= 0 || VAR_9 != VAR_1);
    VAR_6 = 1;
    FUNC_0(0 == FUNC_8(&VAR_10[0]));
    FUNC_0(0 == FUNC_7(&VAR_10[0],
                              VAR_4 | VAR_5,
                              FUNC_9));
  }
  if (VAR_15 & VAR_4) {
    if (VAR_18 == VAR_8) {
      do
        VAR_17 = FUNC_3(VAR_8, &VAR_16, 5, 0);
      while (VAR_17 == -1 && VAR_9 == VAR_0);
      FUNC_0(VAR_17 >= 0 || VAR_9 != VAR_1);
      if (VAR_7 == 1) {
        FUNC_0(FUNC_5(VAR_16, "world", VAR_17) == 0);
        FUNC_0(5 == VAR_17);
        VAR_7 = 2;
      }
      if (VAR_7 == 0) {
        FUNC_0(VAR_17 == 4);
        FUNC_0(FUNC_5(VAR_16, "hello", VAR_17) == 0);
        VAR_7 = 1;
        do {
          do
            VAR_17 = FUNC_3(VAR_11, &VAR_16, 5, 0);
          while (VAR_17 == -1 && VAR_9 == VAR_0);
          if (VAR_17 > 0) {
            FUNC_0(VAR_17 == 5);
            FUNC_0(FUNC_5(VAR_16, "world", VAR_17) == 0);
            VAR_7 = 2;
          }
        } while (VAR_17 > 0);

        FUNC_0(FUNC_1());
      }
    }
    if (VAR_18 == VAR_11) {
      do
        VAR_17 = FUNC_3(VAR_11, &VAR_16, 3, 0);
      while (VAR_17 == -1 && VAR_9 == VAR_0);
      FUNC_0(VAR_17 >= 0 || VAR_9 != VAR_1);
      FUNC_0(3 == VAR_17);
      FUNC_0(FUNC_5(VAR_16, "foo", VAR_17) == 0);
      VAR_12 = 1;
      FUNC_8(&VAR_10[1]);
    }
  }
  if (VAR_15 & VAR_5) {
    do {
      VAR_17 = FUNC_4(VAR_8, "foo", 3, 0);
    } while (VAR_17 < 0 && VAR_9 == VAR_0);
    FUNC_0(3 == VAR_17);
  }
}

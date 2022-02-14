
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long FUNC_0 (char const* const) ;
 int FUNC_1 (int ,char*,long,...) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, char const *const *VAR_4, u_int *VAR_5, u_int *VAR_6,
          u_int *VAR_7, int VAR_8)
{
  if (VAR_3 == 0) {
    *VAR_5 = VAR_0;
    *VAR_6 = VAR_8;
    if (VAR_7 != ((void*)0))
      *VAR_7 = VAR_8;
  } else {
    long VAR_9 = FUNC_0(VAR_4[0]);

    if (VAR_9 < VAR_2) {
      FUNC_1(VAR_1, "%ld: Invalid FSM retry period - min %d\n",
                 VAR_9, VAR_2);
      return 1;
    } else
      *VAR_5 = VAR_9;

    if (VAR_3 > 1) {
      VAR_9 = FUNC_0(VAR_4[1]);
      if (VAR_9 < 1) {
        FUNC_1(VAR_1, "%ld: Invalid FSM REQ tries - changed to 1\n", VAR_9);
        VAR_9 = 1;
      }
      *VAR_6 = VAR_9;

      if (VAR_3 > 2 && VAR_7 != ((void*)0)) {
        VAR_9 = FUNC_0(VAR_4[2]);
        if (VAR_9 < 1) {
          FUNC_1(VAR_1, "%ld: Invalid FSM TRM tries - changed to 1\n", VAR_9);
          VAR_9 = 1;
        }
        *VAR_7 = VAR_9;
      }
    }
  }

  return 0;
}

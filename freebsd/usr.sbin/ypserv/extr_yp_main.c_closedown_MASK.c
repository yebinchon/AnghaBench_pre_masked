
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;
typedef int SIG_PF ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(int VAR_7)
{
 if (VAR_6 == VAR_2) {
  extern fd_set VAR_8;
  static int VAR_9;
  int VAR_10, VAR_11;

  if (VAR_5 == VAR_1) {
   FUNC_5();
   FUNC_2(0);
  }
  if (VAR_9 == 0) {
   VAR_9 = FUNC_3();
  }
  for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_9 && VAR_11 < 2; VAR_10++)
   if (FUNC_0(VAR_10, &VAR_8))
    VAR_11++;
  if (VAR_11 <= 1) {
   FUNC_5();
   FUNC_2(0);
  }
 }
 if (VAR_6 == VAR_4)
  VAR_6 = VAR_2;

 (void) FUNC_4(VAR_0, (SIG_PF) FUNC_6);
 (void) FUNC_1(VAR_3/2);
}

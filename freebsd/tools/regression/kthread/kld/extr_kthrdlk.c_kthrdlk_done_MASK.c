
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,char*,int) ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_6;
 FUNC_0(("sending QUIT signal to the thrdlk threads\n"));


 FUNC_2(&VAR_4);
 VAR_1 = 1;
 while (VAR_5 != 0) {
  VAR_6 = FUNC_3(&VAR_2, &VAR_4, 0, "waiting thrs end", 30 * VAR_3);
  if (VAR_6 == VAR_0) {
   FUNC_4("some threads not die! remaining: %d", VAR_5);
   break;
  }
 }
 if (VAR_5 == 0)
  FUNC_0(("All test_pause threads die\n"));

 FUNC_1(&VAR_4);
}

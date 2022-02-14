
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int * VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sigaction*,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(int VAR_3, int VAR_4, int VAR_5)
{
 struct sigaction VAR_6;

 FUNC_2();




 (void)FUNC_8(VAR_3);
 if (VAR_5 == 0)
  FUNC_1(VAR_4);
 else {
  VAR_6.sa_handler = VAR_0;
  VAR_6.sa_flags = 0;
  (void)FUNC_6(&VAR_6.sa_mask);
  (void)FUNC_4(VAR_5, &VAR_6, ((void*)0));
  (void)FUNC_5(&VAR_6.sa_mask, VAR_5);
  (void)FUNC_7(VAR_1, &VAR_6.sa_mask, ((void*)0));
  FUNC_3(VAR_5);
  FUNC_1(128 + VAR_5);
 }
}

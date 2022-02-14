
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;
typedef int sa ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sigaction*,int ,int) ;
 scalar_t__ FUNC_2 (int,struct sigaction*,int *) ;

__attribute__((used)) static void FUNC_3(int VAR_1) {

  struct sigaction VAR_2;

  FUNC_1(&VAR_2, 0, sizeof(VAR_2));
  VAR_2.sa_handler = VAR_0;





  if (FUNC_2(VAR_1, &VAR_2, ((void*)0)))
    FUNC_0();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_handler; int sa_mask; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct sigaction*,int ,int) ;
 scalar_t__ FUNC_3 (int,struct sigaction*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(int VAR_4, int VAR_5) {

  struct sigaction VAR_6;


  FUNC_2(&VAR_6, 0, sizeof(VAR_6));
  if (FUNC_4(&VAR_6.sa_mask))
    FUNC_1();
  VAR_6.sa_handler = VAR_3;
  VAR_6.sa_flags = VAR_1;
  if (VAR_5)
    VAR_6.sa_flags |= VAR_0;


  if (FUNC_3(VAR_4, &VAR_6, ((void*)0)))
    return FUNC_0(VAR_2);

  return 0;
}

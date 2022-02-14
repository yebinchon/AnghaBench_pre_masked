
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  struct sigaction VAR_6;

  VAR_6.sa_handler = VAR_4;
  FUNC_2 (&VAR_6.sa_mask);
  VAR_6.sa_flags = 0;

  FUNC_1 (VAR_0, &VAR_6, ((void*)0));
  FUNC_1 (VAR_1, &VAR_6, ((void*)0));
  FUNC_1 (VAR_2, &VAR_6, ((void*)0));


  FUNC_0 (VAR_3, &VAR_5, ((void*)0));
}

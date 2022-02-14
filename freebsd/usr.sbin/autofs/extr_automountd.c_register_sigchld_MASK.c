
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_handler; } ;
typedef int sa ;


 int VAR_0 ;
 int FUNC_0 (struct sigaction*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct sigaction VAR_2;
 int VAR_3;

 FUNC_0(&VAR_2, sizeof(VAR_2));
 VAR_2.sa_handler = VAR_1;
 FUNC_3(&VAR_2.sa_mask);
 VAR_3 = FUNC_2(VAR_0, &VAR_2, ((void*)0));
 if (VAR_3 != 0)
  FUNC_1(1, "sigaction");

}

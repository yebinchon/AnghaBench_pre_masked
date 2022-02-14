
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void* sa_handler; int sa_mask; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sigaction*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 void* VAR_4 ;
 int FUNC_3 (int *) ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct sigaction VAR_7;
 int VAR_8;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_7.sa_handler = VAR_5;
 FUNC_3(&VAR_7.sa_mask);
 VAR_8 = FUNC_2(VAR_1, &VAR_7, ((void*)0));
 if (VAR_8 != 0)
  FUNC_1(1, "sigaction");

 VAR_7.sa_handler = VAR_6;
 VAR_8 = FUNC_2(VAR_3, &VAR_7, ((void*)0));
 if (VAR_8 != 0)
  FUNC_1(1, "sigaction");

 VAR_7.sa_handler = VAR_6;
 VAR_8 = FUNC_2(VAR_2, &VAR_7, ((void*)0));
 if (VAR_8 != 0)
  FUNC_1(1, "sigaction");

 VAR_7.sa_handler = VAR_4;
 VAR_8 = FUNC_2(VAR_0, &VAR_7, ((void*)0));
 if (VAR_8 != 0)
  FUNC_1(1, "sigaction");
}

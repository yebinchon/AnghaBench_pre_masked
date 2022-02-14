
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int*,int *,int *,struct timeval*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(void)
{



 int VAR_4;

 extern int VAR_5;
 int VAR_6;
 int VAR_7 = FUNC_0();


 VAR_6 = FUNC_2();

 for (;;) {



  VAR_4 = VAR_2;

  switch (FUNC_3(VAR_7, &VAR_4, ((void*)0), ((void*)0),
          (struct timeval *)0)) {
  case -1:
   if (VAR_1 == VAR_0) {
    continue;
   }
   FUNC_5("svc_run: - select failed");
   return;
  case 0:
   continue;
  default:
   FUNC_4(&VAR_4);
   if (VAR_5 && VAR_6 != FUNC_2())
    FUNC_1(0);
  }
 }
}

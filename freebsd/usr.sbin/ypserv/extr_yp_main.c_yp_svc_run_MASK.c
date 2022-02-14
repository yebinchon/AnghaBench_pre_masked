
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (int,int*,int *,int *,struct timeval*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int*) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(void)
{



 int VAR_7;

 int VAR_8 = FUNC_4();
 struct timeval VAR_9;


 VAR_6 = FUNC_5();

 for (;;) {



  VAR_7 = VAR_4;


  FUNC_2(VAR_3, &VAR_7);

  VAR_9.tv_sec = VAR_1;
  VAR_9.tv_usec = 0;
  switch (FUNC_6(VAR_8, &VAR_7, ((void*)0), ((void*)0),
          &VAR_9)) {
  case -1:
   if (VAR_2 == VAR_0) {
    continue;
   }
   FUNC_8("svc_run: - select failed");
   return;
  case 0:
   if (FUNC_5() == VAR_6)
    FUNC_9();
   break;
  default:
   if (FUNC_5() == VAR_6) {
    if (FUNC_1(VAR_3, &VAR_7)) {
     FUNC_10();
     FUNC_0(VAR_3, &VAR_7);
    }
    FUNC_7(&VAR_7);
   }
  }
  if (VAR_6 != FUNC_5())
   FUNC_3(0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
struct TYPE_2__ {int locked; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct timeval*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (struct timeval*) ;
 int FUNC_6 (int,char*) ;
 int VAR_3 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;

void FUNC_11(char* VAR_4) {
 int VAR_5;
 fd_set VAR_6;
 struct timeval VAR_7;
 int VAR_8 = VAR_0;

 VAR_3 = 1000;

 FUNC_9(VAR_4);
 FUNC_7(VAR_4, VAR_8);

 while(1) {

  if (!VAR_2.locked)
   FUNC_4(&VAR_7);
  else {
   VAR_7.tv_sec = 1;
   VAR_7.tv_usec = 0;
  }


  FUNC_5(&VAR_7);

  FUNC_2(&VAR_6);
  FUNC_1(0, &VAR_6);
  FUNC_1(VAR_1, &VAR_6);

  VAR_5 = FUNC_8(VAR_1+1, &VAR_6,((void*)0) , ((void*)0), &VAR_7);
  if (VAR_5 == -1)
   FUNC_6(1, "select()");
  if (FUNC_0(0, &VAR_6))
   FUNC_10();
  if (FUNC_0(VAR_1, &VAR_6))
   FUNC_3();
 }
}

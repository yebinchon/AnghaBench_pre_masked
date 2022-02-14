
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct sigaction {int sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct sigaction*,int ,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,int *,int ,int ,struct timeval*) ;
 int FUNC_10 (int ,struct sigaction*,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int* VAR_10 ;
 int FUNC_14 (int ,int *,int *) ;

void
FUNC_15(void)
{
 int VAR_11 = 0;
 struct sigaction VAR_12;
 fd_set VAR_13;
 sigset_t VAR_14, VAR_15;

 FUNC_2(&VAR_13);
 FUNC_1(VAR_7, &VAR_13);
 VAR_11 = VAR_7 > VAR_11 ? VAR_7 : VAR_11;

 FUNC_1(VAR_10[0], &VAR_13);
 VAR_11 = VAR_10[0] > VAR_11 ? VAR_10[0] : VAR_11;

 FUNC_6(&VAR_12, 0, sizeof VAR_12);
 VAR_12.sa_handler = VAR_8;
 FUNC_13(&VAR_12.sa_mask);
 VAR_12.sa_flags = VAR_2;
 FUNC_10(VAR_4, &VAR_12, ((void*)0));
 FUNC_10(VAR_3, &VAR_12, ((void*)0));
 FUNC_10(VAR_5, &VAR_12, ((void*)0));

 FUNC_12(&VAR_14);
 FUNC_11(&VAR_14, VAR_4);
 FUNC_11(&VAR_14, VAR_3);
 FUNC_11(&VAR_14, VAR_5);
 FUNC_14(VAR_6, &VAR_14, &VAR_15);

 while (1) {
  fd_set VAR_16;
  int VAR_17;
  struct timeval VAR_18;

  VAR_18.tv_sec = VAR_0;
  VAR_18.tv_usec = 0;

  FUNC_5(&VAR_16, &VAR_13, sizeof VAR_16);
  FUNC_14(VAR_6, &VAR_15, ((void*)0));
  if ((VAR_17=FUNC_9(VAR_11 + 1, &VAR_16, 0, 0, &VAR_18)) < 0) {
   if (VAR_9 != VAR_1)
    FUNC_4(1, "select");
  }
  FUNC_14(VAR_6, &VAR_14, ((void*)0));

  if (VAR_17 == 0) {
   FUNC_3();
   continue;
  }

  if (FUNC_0(VAR_10[0], &VAR_16)) {
   if (FUNC_8(VAR_10[0]) < 0)
    return;
  }

  if (FUNC_0(VAR_7, &VAR_16))
   FUNC_7(VAR_7);
 }
}

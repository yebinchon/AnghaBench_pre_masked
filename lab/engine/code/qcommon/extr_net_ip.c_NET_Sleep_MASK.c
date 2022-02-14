
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;
typedef scalar_t__ SOCKET ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (scalar_t__,int *,int *,int *,struct timeval*) ;

void FUNC_7(int VAR_4)
{
 struct timeval VAR_5;
 fd_set VAR_6;
 int VAR_7;
 SOCKET VAR_8 = VAR_0;

 if(VAR_4 < 0)
  VAR_4 = 0;

 FUNC_2(&VAR_6);

 if(VAR_3 != VAR_0)
 {
  FUNC_1(VAR_3, &VAR_6);

  VAR_8 = VAR_3;
 }
 if(VAR_2 != VAR_0)
 {
  FUNC_1(VAR_2, &VAR_6);

  if(VAR_8 == VAR_0 || VAR_2 > VAR_8)
   VAR_8 = VAR_2;
 }
 VAR_5.tv_sec = VAR_4/1000;
 VAR_5.tv_usec = (VAR_4%1000)*1000;

 VAR_7 = FUNC_6(VAR_8 + 1, &VAR_6, ((void*)0), ((void*)0), &VAR_5);

 if(VAR_7 == VAR_1)
  FUNC_0("Warning: select() syscall failed: %s\n", FUNC_3());
 else if(VAR_7 > 0)
  FUNC_4(&VAR_6);
}

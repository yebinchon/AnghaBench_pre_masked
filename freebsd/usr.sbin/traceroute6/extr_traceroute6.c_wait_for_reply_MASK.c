
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct pollfd {int fd; scalar_t__ revents; int events; } ;
struct msghdr {int dummy; } ;
typedef int fd_set ;
typedef int fd_mask ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (struct pollfd*,int,int) ;
 int VAR_2 ;
 int FUNC_7 (int ,struct msghdr*,int ) ;
 scalar_t__ FUNC_8 (int,int *,int *,int *,struct timeval*) ;
 int VAR_3 ;

int
FUNC_9(int VAR_4, struct msghdr *VAR_5)
{
 fd_set *VAR_6;
 struct timeval VAR_7;
 int VAR_8 = 0, VAR_9;

 VAR_9 = FUNC_3(VAR_4 + 1, VAR_0) * sizeof(fd_mask);
 if ((VAR_6 = (fd_set *)FUNC_4(VAR_9)) == ((void*)0))
  FUNC_1(1, "malloc");
 FUNC_5(VAR_6, 0, VAR_9);
 FUNC_0(VAR_4, VAR_6);
 VAR_7.tv_sec = VAR_3; VAR_7.tv_usec = 0;

 if (FUNC_8(VAR_4+1, VAR_6, (fd_set *)0, (fd_set *)0, &VAR_7) > 0)
  VAR_8 = FUNC_7(VAR_2, VAR_5, 0);

 FUNC_2(VAR_6);
 return (VAR_8);

}

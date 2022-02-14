
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,struct sockaddr*,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(int VAR_4)
{
 fd_set VAR_5;
 struct timeval VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_6("accept");

 FUNC_1(&VAR_5);
 FUNC_0(VAR_4, &VAR_5);
 VAR_6.tv_sec = VAR_3;
 VAR_6.tv_usec = 0;
 VAR_8 = FUNC_5(VAR_4 + 1, &VAR_5, (fd_set *)((void*)0), (fd_set *)((void*)0), &VAR_6);
 if (VAR_8 < 0) {
  FUNC_7("socket_accept: select");
  return (-1);
 }
 if (VAR_8 == 0) {
  FUNC_8("socket_accept: select timeout");
  return (-1);
 }

 VAR_7 = FUNC_2(VAR_4, (struct sockaddr *)((void*)0), (socklen_t *)((void*)0));
 if (VAR_7 < 0) {
  FUNC_7("socket_accept: accept");
  return (-1);
 }

 VAR_9 = FUNC_4(VAR_7, VAR_0, 0);
 if (VAR_9 < 0) {
  FUNC_7("socket_accept: fcntl(F_GETFL)");
  goto failed;
 }
 if (FUNC_4(VAR_7, VAR_1, VAR_9 & ~VAR_2) < 0) {
  FUNC_7("socket_accept: fcntl(F_SETFL)");
  goto failed;
 }

 return (VAR_7);

failed:
 if (FUNC_3(VAR_7) < 0)
  FUNC_7("socket_accept: close");
 return (-1);
}

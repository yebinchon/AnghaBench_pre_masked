
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct sockaddr*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;

int FUNC_6(int VAR_3, struct sockaddr *VAR_4, socklen_t *VAR_5)
{
 int VAR_6;

 SOCKET VAR_7 = (SOCKET)FUNC_0(VAR_3);
 SOCKET VAR_8 = FUNC_2(VAR_7, VAR_4, VAR_5);


 if ((VAR_6 = FUNC_1(VAR_8, VAR_1|VAR_0)) < 0) {
  int VAR_9 = VAR_2;
  FUNC_3(VAR_8);
  return FUNC_4("unable to make a socket file descriptor: %s",
   FUNC_5(VAR_9));
 }
 return VAR_6;
}

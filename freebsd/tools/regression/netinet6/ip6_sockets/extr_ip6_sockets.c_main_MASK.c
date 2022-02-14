
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin6_port; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin6 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockaddr_in6*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ) ;

int
FUNC_6(int VAR_6, char *VAR_7[])
{
 struct sockaddr_in6 VAR_8;
 int VAR_9;




 VAR_9 = FUNC_5(VAR_1, VAR_2, 0);
 if (VAR_9 < 0)
  FUNC_3(-1, "socket(PF_INET6, SOCK_DGRAM, 0)");
 FUNC_1(VAR_9);





 VAR_9 = FUNC_5(VAR_1, VAR_2, 0);
 if (VAR_9 < 0)
  FUNC_3(-1, "socket(PF_INET6, SOCK_DGRAM, 0)");
 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8 = sizeof(VAR_8);
 VAR_8 = VAR_0;
 VAR_8 = VAR_5;
 VAR_8 = FUNC_4(1024);
 if (FUNC_2(VAR_9, (struct sockaddr *)&VAR_8, sizeof(VAR_8)) < 0)
  FUNC_3(-1, "connect(SOCK_DGRAM, ::1)");
 FUNC_1(VAR_9);




 VAR_9 = FUNC_5(VAR_1, VAR_4, 0);
 if (VAR_9 < 0)
  FUNC_3(-1, "socket(PF_INET6, SOCK_STREAM, 0)");
 FUNC_1(VAR_9);




 VAR_9 = FUNC_5(VAR_1, VAR_3, 0);
 if (VAR_9 < 0)
  FUNC_3(-1, "socket(PF_INET6, SOCK_RAW, 0)");
 FUNC_1(VAR_9);

 return (0);
}

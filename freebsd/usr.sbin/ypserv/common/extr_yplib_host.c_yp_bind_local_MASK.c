
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct sockaddr_in*,int ,int ,struct timeval,int*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;

CLIENT *
FUNC_4(u_long VAR_3, u_long VAR_4)
{
 struct sockaddr_in VAR_5;
 static CLIENT *VAR_6;
 struct timeval VAR_7;
 int VAR_8;

 FUNC_3(&VAR_5, 0, sizeof VAR_5);
 VAR_5.sin_len = sizeof VAR_5;
 VAR_5.sin_family = VAR_0;
 VAR_5.sin_addr.s_addr = FUNC_2(VAR_1);
 VAR_8 = VAR_2;

 VAR_7.tv_sec = 10;
 VAR_7.tv_usec = 0;

 VAR_6 = FUNC_0(&VAR_5, VAR_3, VAR_4, VAR_7, &VAR_8);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(1, "clntudp_create: no contact with localhost.");
 }

 return (VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_long ;
typedef int u_int32_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct sockaddr_in*,int ,int ,int*,int ,int ) ;
 int * FUNC_1 (struct sockaddr_in*,int ,int ,struct timeval,int*) ;
 int FUNC_2 (int,char*,char*) ;
 struct hostent* FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;

CLIENT *
FUNC_7(char *VAR_2, u_long VAR_3, u_long VAR_4, u_short VAR_5,
    int VAR_6)
{
 struct sockaddr_in VAR_7;
 static CLIENT *VAR_8;
 struct hostent *VAR_9;
 struct timeval VAR_10;
 int VAR_11;

 FUNC_6(&VAR_7, 0, sizeof VAR_7);
 VAR_7.sin_len = sizeof VAR_7;
 VAR_7.sin_family = VAR_0;
 VAR_11 = VAR_1;
 if (VAR_5 != 0)
  VAR_7.sin_port = FUNC_4(VAR_5);

 if (*VAR_2 >= '0' && *VAR_2 <= '9') {
  if (FUNC_5(VAR_2, &VAR_7.sin_addr) == 0) {
   FUNC_2(1, "inet_aton: invalid address %s.",
       VAR_2);
  }
 } else {
  VAR_9 = FUNC_3(VAR_2);
  if (VAR_9 == ((void*)0)) {
   FUNC_2(1, "gethostbyname: unknown host %s.",
       VAR_2);
  }
  VAR_7.sin_addr.s_addr = *(u_int32_t *)VAR_9->h_addr;
 }

 VAR_10.tv_sec = 10;
 VAR_10.tv_usec = 0;

 if (VAR_6)
  VAR_8 = FUNC_0(&VAR_7, VAR_3, VAR_4,
      &VAR_11, 0, 0);
 else
  VAR_8 = FUNC_1(&VAR_7, VAR_3, VAR_4, VAR_10,
      &VAR_11);

 if (VAR_8 == ((void*)0)) {
  FUNC_2(1, "clntudp_create: no contact with host %s.",
      VAR_2);
 }

 return (VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int utmpidlearr ;
typedef int up ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct hostent {int h_addr; } ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,int *,struct timeval) ;
 int * FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int,char*,char*) ;
 struct hostent* FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,struct sockaddr_in*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_10(char *VAR_6)
{
 utmpidlearr VAR_7;
 CLIENT *VAR_8;
 struct sockaddr_in VAR_9;
 struct hostent *VAR_10;
 struct timeval VAR_11;

 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10 == ((void*)0))
  FUNC_5(1, "unknown host \"%s\"", VAR_6);

 VAR_8 = FUNC_1(VAR_6, VAR_2, VAR_3, "udp");
 if (VAR_8 == ((void*)0))
  FUNC_5(1, "%s", FUNC_3(""));

 FUNC_8(&VAR_7, 0, sizeof(VAR_7));
 VAR_11.tv_sec = 15;
 VAR_11.tv_usec = 0;
 if (FUNC_0(VAR_8, VAR_1, (xdrproc_t)VAR_5, ((void*)0),
     (xdrproc_t)VAR_4, &VAR_7, VAR_11) != VAR_0)
  FUNC_5(1, "%s", FUNC_4(VAR_8, ""));
 FUNC_7(&VAR_9.sin_addr.s_addr, VAR_10->h_addr, sizeof(VAR_9.sin_addr.s_addr));
 FUNC_9(&VAR_7, &VAR_9);
 FUNC_2(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct hostent {int h_addr; } ;
typedef int statstime ;
typedef int host_stat ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int *,struct timeval) ;
 int * FUNC_2 (char*,int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 struct hostent* FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,struct sockaddr_in*) ;
 int FUNC_9 (char*,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_10(char *VAR_6)
{
 CLIENT *VAR_7;
 statstime VAR_8;
 struct sockaddr_in VAR_9;
 struct hostent *VAR_10;
 struct timeval VAR_11;

 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10 == ((void*)0)) {
  FUNC_9("unknown host \"%s\"", VAR_6);
  return(-1);
 }

 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3, "udp");
 if (VAR_7 == ((void*)0)) {
  FUNC_9("%s %s", VAR_6, FUNC_4(""));
  return(-1);
 }

 FUNC_0((char *)&VAR_8, sizeof(VAR_8));
 VAR_11.tv_sec = 15;
 VAR_11.tv_usec = 0;
 if (FUNC_1(VAR_7, VAR_1,
     (xdrproc_t)VAR_5, ((void*)0),
     (xdrproc_t)VAR_4, &VAR_8, VAR_11) != VAR_0) {
  FUNC_9("%s: %s", VAR_6, FUNC_5(VAR_7, VAR_6));
  FUNC_3(VAR_7);
  return(-1);
 }

 FUNC_7(&VAR_9.sin_addr.s_addr, VAR_10->h_addr, sizeof(int));
 FUNC_8(&VAR_8, &VAR_9);
 FUNC_3(VAR_7);
 return (0);
}

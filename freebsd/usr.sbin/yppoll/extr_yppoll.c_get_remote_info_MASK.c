
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_int32_t ;
struct ypresp_order {int ordernum; int master; int status; } ;
struct ypresp_master {int ordernum; int master; int status; } ;
struct ypreq_nokey {char* domain; char* map; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int ,struct ypreq_nokey*,int ,struct ypresp_order*,struct timeval) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (struct sockaddr_in*,int ,int ,struct timeval,int*) ;
 int FUNC_5 (int,char*,char*) ;
 struct hostent* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(char *VAR_10, char *VAR_11, char *VAR_12, int *VAR_13,
    char **VAR_14)
{
 struct ypresp_order VAR_15;
 struct ypresp_master VAR_16;
 struct ypreq_nokey VAR_17;
 struct timeval VAR_18;
 struct sockaddr_in VAR_19;
 int VAR_20;
 CLIENT *VAR_21;
 struct hostent *VAR_22;
 int VAR_23;

 FUNC_0((char *)&VAR_19, sizeof VAR_19);
 VAR_19.sin_len = sizeof VAR_19;
 VAR_19.sin_family = VAR_0;
 VAR_20 = VAR_1;

 VAR_22 = FUNC_6(VAR_12);
 if (VAR_22 == ((void*)0)) {
  if (FUNC_7(VAR_12, &VAR_19.sin_addr) == 0)
   FUNC_5(1, "unknown host %s.", VAR_12);
 } else
  VAR_19.sin_addr.s_addr = *(u_int32_t *)VAR_22->h_addr;

 VAR_18.tv_sec = 10;
 VAR_18.tv_usec = 0;

 VAR_21 = FUNC_4(&VAR_19, VAR_5, VAR_6, VAR_18, &VAR_20);
 if (VAR_21 == ((void*)0))
  FUNC_5(1, "clntudp_create: no contact with host %s.", VAR_12);

 VAR_17.domain = VAR_10;
 VAR_17.map = VAR_11;

 FUNC_0((char *)(char *)&VAR_15, sizeof VAR_15);

 VAR_23 = FUNC_1(VAR_21, VAR_4, (xdrproc_t)VAR_7, &VAR_17,
     (xdrproc_t)VAR_9, &VAR_15, VAR_18);
 if (VAR_23 != VAR_2)
  FUNC_3(VAR_21, "yp_order: clnt_call");

 *VAR_13 = VAR_15.ordernum;
 FUNC_9((xdrproc_t)VAR_9, (char *)&VAR_15);

 VAR_23 = FUNC_10(VAR_15.status);
 if (VAR_23 == VAR_2) {
  FUNC_0((char *)&VAR_16, sizeof VAR_16);

  VAR_23 = FUNC_1(VAR_21, VAR_3, (xdrproc_t)VAR_7,
      &VAR_17, (xdrproc_t)VAR_8, &VAR_16, VAR_18);
  if (VAR_23 != VAR_2)
   FUNC_3(VAR_21, "yp_master: clnt_call");
  VAR_23 = FUNC_10(VAR_16.status);
  if (VAR_23 == 0)
   *VAR_14 = (char *)FUNC_8(VAR_16.master);
  FUNC_9((xdrproc_t)VAR_8, (char *)&VAR_16);
 }
 FUNC_2(VAR_21);
 return (VAR_23);
}

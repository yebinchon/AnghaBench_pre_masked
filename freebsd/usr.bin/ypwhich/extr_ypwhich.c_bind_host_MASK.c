
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_3__ {int ypbind_binding_addr; } ;
struct TYPE_4__ {TYPE_1__ ypbind_bindinfo; } ;
struct ypbind_resp {scalar_t__ ypbind_status; TYPE_2__ ypbind_resp_u; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {int dummy; } ;
struct in_addr {int s_addr; } ;
struct hostent {char* h_name; } ;
typedef int ss_addr ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,char**,int ,struct ypbind_resp*,struct timeval) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct sockaddr_in*,int ,int ,struct timeval,int*) ;
 struct hostent* FUNC_3 (char*,int,int ) ;
 char* FUNC_4 (struct in_addr) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(char *VAR_10, struct sockaddr_in *VAR_11)
{
 struct hostent *VAR_12 = ((void*)0);
 struct ypbind_resp VAR_13;
 struct in_addr VAR_14;
 struct timeval VAR_15;
 CLIENT *VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = VAR_1;
 VAR_15.tv_sec = 15;
 VAR_15.tv_usec = 0;
 VAR_16 = FUNC_2(VAR_11, VAR_4, VAR_5, VAR_15, &VAR_17);

 if (VAR_16 == ((void*)0)) {
  FUNC_7("host is not bound to a ypmaster");
  return (VAR_7);
 }

 VAR_15.tv_sec = 5;
 VAR_15.tv_usec = 0;

 VAR_18 = FUNC_0(VAR_16, VAR_3,
  (xdrproc_t)VAR_8, &VAR_10,
  (xdrproc_t)VAR_9, &VAR_13, VAR_15);
 if (VAR_18 != VAR_2) {
  FUNC_7("can't clnt_call: %s", FUNC_8(VAR_7));
  FUNC_1(VAR_16);
  return (VAR_7);
 } else {
  if (VAR_13.ypbind_status != VAR_6) {
   FUNC_7("can't yp_bind: reason: %s",
       FUNC_8(VAR_13.ypbind_status));
   FUNC_1(VAR_16);
   return (VAR_18);
  }
 }
 FUNC_1(VAR_16);

 FUNC_5(&VAR_14.s_addr, &VAR_13.ypbind_resp_u.ypbind_bindinfo.ypbind_binding_addr,
     sizeof (VAR_14));

 VAR_12 = FUNC_3((char *)&VAR_14.s_addr, sizeof(VAR_14.s_addr),
     VAR_0);
 if (VAR_12 != ((void*)0))
  FUNC_6("%s\n", VAR_12->h_name);
 else
  FUNC_6("%s\n", FUNC_4(VAR_14));

 return (0);
}

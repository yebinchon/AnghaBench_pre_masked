
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_6__ {int ypbind_binding_port; int ypbind_binding_addr; } ;
struct ypbind_setdom {char* ypsetdom_domain; int ypsetdom_vers; TYPE_1__ ypsetdom_binding; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {int dummy; } ;
struct in_addr {int s_addr; } ;
struct hostent {int h_addr; } ;
struct TYPE_7__ {int cl_auth; } ;
typedef TYPE_2__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ,struct ypbind_setdom*,int ,int *,struct timeval) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (struct sockaddr_in*,int ,int ,struct timeval,int*) ;
 int FUNC_6 (int,char*,char*) ;
 struct hostent* FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (char*,struct in_addr*) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (struct ypbind_setdom*,int ,int) ;
 int FUNC_13 (char*,char*,...) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct sockaddr_in *VAR_11, char *VAR_12, char *VAR_13)
{
 struct ypbind_setdom VAR_14;
 struct in_addr VAR_15;
 struct hostent *VAR_16;
 struct timeval VAR_17;
 CLIENT *VAR_18;
 int VAR_19, VAR_20, VAR_21;

 VAR_20 = FUNC_8(VAR_13, VAR_7, VAR_6, VAR_0);
 if (VAR_20 == 0)
  FUNC_6(1, "%s not running ypserv", VAR_13);
 VAR_20 = FUNC_9(VAR_20);

 FUNC_12(&VAR_14, 0, sizeof VAR_14);

 if (FUNC_10(VAR_13, &VAR_15) == 0) {
  VAR_16 = FUNC_7(VAR_13);
  if (VAR_16 == ((void*)0))
   FUNC_6(1, "can't find address for %s", VAR_13);
  FUNC_11(&VAR_15.s_addr, VAR_16->h_addr, sizeof(VAR_15.s_addr));
 }
 VAR_14.ypsetdom_domain = VAR_12;
 FUNC_1(&VAR_15.s_addr, &VAR_14.ypsetdom_binding.ypbind_binding_addr,
     sizeof(VAR_14.ypsetdom_binding.ypbind_binding_addr));
 FUNC_1(&VAR_20, &VAR_14.ypsetdom_binding.ypbind_binding_port,
     sizeof(VAR_14.ypsetdom_binding.ypbind_binding_port));
 VAR_14.ypsetdom_vers = VAR_8;

 VAR_17.tv_sec = 15;
 VAR_17.tv_usec = 0;
 VAR_19 = VAR_1;
 VAR_18 = FUNC_5(VAR_11, VAR_3, VAR_4, VAR_17, &VAR_19);
 if (VAR_18 == ((void*)0)) {
  FUNC_13("can't yp_bind, reason: %s", FUNC_14(VAR_5));
  return (VAR_5);
 }
 VAR_18->cl_auth = FUNC_0();

 VAR_21 = FUNC_2(VAR_18, VAR_2,
  (xdrproc_t)VAR_10, &VAR_14,
  (xdrproc_t)VAR_9, ((void*)0), VAR_17);
 if (VAR_21) {
  FUNC_13("cannot ypset for domain %s on host %s: %s"
                " - make sure ypbind was started with -ypset or -ypsetme", VAR_12,
      VAR_13, FUNC_4(VAR_21));
  FUNC_3(VAR_18);
  return (VAR_5);
 }
 FUNC_3(VAR_18);
 return (0);
}

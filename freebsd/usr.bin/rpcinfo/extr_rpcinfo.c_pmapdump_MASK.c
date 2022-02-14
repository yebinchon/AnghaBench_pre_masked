
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {int sin_port; } ;
struct rpcent {char* r_name; } ;
struct TYPE_6__ {scalar_t__ low; } ;
struct rpc_err {TYPE_2__ re_vers; } ;
struct TYPE_7__ {int pm_prog; int pm_port; int pm_prot; int pm_vers; } ;
struct pmaplist {TYPE_3__ pml_map; struct pmaplist* pml_next; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_5__ {int re_status; } ;
struct TYPE_8__ {scalar_t__ cf_stat; TYPE_1__ cf_error; } ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,int ,int *,int ,char*,struct timeval) ;
 int FUNC_1 (int *,struct rpc_err*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (struct sockaddr_in*,int ,scalar_t__,int*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sockaddr_in*,char*) ;
 struct rpcent* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (char*,...) ;
 TYPE_4__ VAR_14 ;
 int FUNC_11 () ;
 int FUNC_12 (char*,...) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void
FUNC_13(int VAR_17, char **VAR_18)
{
 struct sockaddr_in VAR_19;
 struct pmaplist *VAR_20 = ((void*)0);
 int VAR_21 = VAR_7;
 struct timeval VAR_22;
 register CLIENT *VAR_23;
 struct rpcent *VAR_24;
 enum clnt_stat VAR_25;
 struct rpc_err VAR_26;
 char *VAR_27 = ((void*)0);

 if (VAR_17 > 1)
  FUNC_11();
 if (VAR_17 == 1) {
  VAR_27 = VAR_18[0];
  FUNC_6(&VAR_19, VAR_27);
  VAR_19.sin_port = FUNC_8(VAR_3);
  VAR_23 = FUNC_4(&VAR_19, VAR_5, VAR_6,
      &VAR_21, 50, 500);
 } else
  VAR_23 = FUNC_9(VAR_5, VAR_6);

 if (VAR_23 == ((void*)0)) {
  if (VAR_14.cf_stat == VAR_13) {





   VAR_14.cf_stat = VAR_9;
   VAR_14.cf_error.re_status = VAR_8;
  }
  FUNC_2("rpcinfo: can't contact portmapper");
  FUNC_5(1);
 }

 VAR_22.tv_sec = 60;
 VAR_22.tv_usec = 0;

 VAR_25 = FUNC_0(VAR_23, VAR_4, (xdrproc_t) VAR_16,
  ((void*)0), (xdrproc_t) VAR_15, (char *)&VAR_20,
  VAR_22);
 if (VAR_25 != VAR_12) {
  if ((VAR_25 == VAR_11) ||
      (VAR_25 == VAR_10)) {
   FUNC_1(VAR_23, &VAR_26);
   if (VAR_26.re_vers.low > VAR_6) {
    if (VAR_27)
     FUNC_12("%s does not support portmapper."
         "Try rpcinfo %s instead", VAR_27,
         VAR_27);
    else
     FUNC_12("local host does not support "
         "portmapper.  Try 'rpcinfo' "
         "instead");
   }
   FUNC_5(1);
  }
  FUNC_3(VAR_23, "rpcinfo: can't contact portmapper");
  FUNC_5(1);
 }
 if (VAR_20 == ((void*)0)) {
  FUNC_10("No remote programs registered.\n");
 } else {
  FUNC_10("   program vers proto   port  service\n");
  for (; VAR_20 != ((void*)0); VAR_20 = VAR_20->pml_next) {
   FUNC_10("%10ld%5ld",
    VAR_20->pml_map.pm_prog,
    VAR_20->pml_map.pm_vers);
   if (VAR_20->pml_map.pm_prot == VAR_2)
    FUNC_10("%6s", "udp");
   else if (VAR_20->pml_map.pm_prot == VAR_1)
    FUNC_10("%6s", "tcp");
   else if (VAR_20->pml_map.pm_prot == VAR_0)
    FUNC_10("%6s", "local");
   else
    FUNC_10("%6ld", VAR_20->pml_map.pm_prot);
   FUNC_10("%7ld", VAR_20->pml_map.pm_port);
   VAR_24 = FUNC_7(VAR_20->pml_map.pm_prog);
   if (VAR_24)
    FUNC_10("  %s\n", VAR_24->r_name);
   else
    FUNC_10("\n");
  }
 }
}

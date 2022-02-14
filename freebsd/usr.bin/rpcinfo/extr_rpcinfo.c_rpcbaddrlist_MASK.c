
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct rpcent {char* r_name; } ;
struct netconfig {int dummy; } ;
struct netbuf {struct netbuf* buf; } ;
typedef TYPE_1__* rpcb_entry_list_ptr ;
struct TYPE_11__ {char* r_nc_protofmly; char* r_nc_proto; scalar_t__ r_nc_semantics; char* r_maddr; } ;
typedef TYPE_2__ rpcb_entry ;
struct TYPE_13__ {char* cl_netid; } ;
struct TYPE_12__ {int r_prog; char* r_netid; int r_vers; void* r_owner; int * r_addr; } ;
struct TYPE_10__ {TYPE_2__ rpcb_entry_map; struct TYPE_10__* rpcb_entry_next; } ;
typedef TYPE_3__ RPCB ;
typedef TYPE_4__ CLIENT ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ,char*,int ,char*,struct timeval) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 TYPE_4__* FUNC_4 (char*,int ,struct netbuf**) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct netbuf*) ;
 int FUNC_7 (struct netconfig*) ;
 TYPE_4__* FUNC_8 (char*,struct netconfig*,int ,struct netbuf**) ;
 struct netconfig* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 struct rpcent* FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 void* VAR_5 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,char*,char*,char*,char*) ;
 int * FUNC_16 (struct netconfig*,struct netbuf*) ;
 int FUNC_17 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_18(char *VAR_8, int VAR_9, char **VAR_10)
{
 rpcb_entry_list_ptr VAR_11 = ((void*)0);
 struct timeval VAR_12;
 register CLIENT *VAR_13;
 struct rpcent *VAR_14;
 char *VAR_15;
 RPCB VAR_16;
 struct netbuf *VAR_17;

 if (VAR_9 != 3)
  FUNC_17();
 VAR_15 = VAR_10[0];
 if (VAR_8 == ((void*)0)) {
  VAR_13 = FUNC_4(VAR_15, VAR_3, &VAR_17);
 } else {
  struct netconfig *VAR_18;

  VAR_18 = FUNC_9(VAR_8);
  if (VAR_18 == ((void*)0)) {
   FUNC_13("rpcinfo: invalid transport");
   FUNC_5(1);
  }
  VAR_13 = FUNC_8(VAR_15, VAR_18, VAR_3, &VAR_17);
  if (VAR_18)
   (void) FUNC_7(VAR_18);
 }
 if (VAR_13 == (CLIENT *)((void*)0)) {
  FUNC_2("rpcinfo: can't contact rpcbind");
  FUNC_5(1);
 }
 VAR_12.tv_sec = 60;
 VAR_12.tv_usec = 0;

 VAR_16.r_prog = FUNC_10(VAR_10[1]);
 VAR_16.r_vers = FUNC_12(VAR_10[2]);
 VAR_16.r_netid = VAR_13->cl_netid;
 if (VAR_17 == ((void*)0)) {
  VAR_16.r_addr = VAR_5;
 } else {





  struct netconfig *VAR_19;

  VAR_19 = FUNC_9(VAR_13->cl_netid);
  if (VAR_19 != ((void*)0)) {
   VAR_16.r_addr = FUNC_16(VAR_19, VAR_17);
   if (VAR_16.r_addr == ((void*)0))
    VAR_16.r_addr = VAR_5;
   FUNC_7(VAR_19);
  } else {
   VAR_16.r_addr = VAR_5;
  }
  FUNC_6(VAR_17->buf);
  FUNC_6(VAR_17);
 }
 VAR_16.r_owner = VAR_5;

 if (FUNC_0(VAR_13, VAR_2, (xdrproc_t) VAR_6,
  (char *) &VAR_16, (xdrproc_t) VAR_7,
  (char *) &VAR_11, VAR_12) != VAR_4) {
  FUNC_3(VAR_13, "rpcinfo: can't contact rpcbind: ");
  FUNC_5(1);
 }
 if (VAR_11 == ((void*)0)) {
  FUNC_14("No remote programs registered.\n");
 } else {
  FUNC_14(
 "   program vers  tp_family/name/class    address\t\t  service\n");
  for (; VAR_11 != ((void*)0); VAR_11 = VAR_11->rpcb_entry_next) {
   rpcb_entry *VAR_20;
   char VAR_21[128];

   VAR_20 = &VAR_11->rpcb_entry_map;
   FUNC_14("%10u%3u    ",
    VAR_16.r_prog, VAR_16.r_vers);
   FUNC_15(VAR_21, "%s/%s/%s ",
    VAR_20->r_nc_protofmly, VAR_20->r_nc_proto,
    VAR_20->r_nc_semantics == VAR_0 ? "clts" :
    VAR_20->r_nc_semantics == VAR_1 ? "cots" :
      "cots_ord");
   FUNC_14("%-24s", VAR_21);
   FUNC_14("%-24s", VAR_20->r_maddr);
   VAR_14 = FUNC_11(VAR_16.r_prog);
   if (VAR_14)
    FUNC_14(" %-13s", VAR_14->r_name);
   else
    FUNC_14(" %-13s", "-");
   FUNC_14("\n");
  }
 }
 FUNC_1(VAR_13);
 return;
}

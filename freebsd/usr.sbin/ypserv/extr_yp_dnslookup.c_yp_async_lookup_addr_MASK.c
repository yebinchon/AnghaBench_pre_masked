
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ypstat ;
typedef int uint32_t ;
typedef int u_char ;
typedef int type ;
struct svc_req {int rq_vers; TYPE_1__* rq_xprt; } ;
struct in_addr {int dummy; } ;
struct circleq_dnsentry {int prot_type; char* id; int addrlen; int addrtype; int name; int addr; int type; TYPE_1__* xprt; int client_addr; int xid; int * domain; int ypvers; int ttl; } ;
typedef int socklen_t ;
typedef int buf ;
struct TYPE_2__ {int xp_raddr; int xp_fd; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct circleq_dnsentry*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct circleq_dnsentry*) ;
 int FUNC_2 (int ,int ,int ,int*,int*) ;
 int FUNC_3 (char*,struct in_addr*) ;
 int FUNC_4 (int,char*,int*) ;
 int VAR_14 ;
 int FUNC_5 (int ,int*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (char*,int,char*,int,int,int,int) ;
 int FUNC_7 (char*,char*,int,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,...) ;
 int * FUNC_13 (int ,int ) ;
 struct circleq_dnsentry* FUNC_14 () ;
 int FUNC_15 () ;
 char* FUNC_16 (char*,int ) ;

ypstat
FUNC_17(struct svc_req *VAR_17, char *VAR_18, int VAR_19)
{
 register struct circleq_dnsentry *VAR_20;
 char VAR_21[VAR_4], *VAR_22;
 uint32_t VAR_23[4];
 u_char *VAR_24 = (u_char *)VAR_23;
 socklen_t VAR_25;
 int VAR_26, VAR_27;


 VAR_26 = -1;
 VAR_25 = sizeof(VAR_26);
 if (FUNC_2(VAR_17->rq_xprt->xp_fd, VAR_6,
     VAR_7, &VAR_26, &VAR_25) == -1) {
  FUNC_12("getsockopt failed: %s", FUNC_9(VAR_13));
  return(VAR_11);
 }


 if (VAR_26 == VAR_5 &&
     FUNC_13(FUNC_11(VAR_17->rq_xprt),VAR_0) != ((void*)0))
  return(VAR_10);

 switch (VAR_19) {
 case 129:
  if (FUNC_3(VAR_18, (struct in_addr *)VAR_24) != 1)
   return(VAR_9);
  FUNC_6(VAR_21, sizeof(VAR_21), "%u.%u.%u.%u.in-addr.arpa",
      (VAR_24[3] & 0xff), (VAR_24[2] & 0xff),
      (VAR_24[1] & 0xff), (VAR_24[0] & 0xff));
  VAR_25 = VAR_3;
  break;
 case 128:
  if (FUNC_4(VAR_19, VAR_18, VAR_24) != 1)
   return(VAR_9);
  VAR_22 = VAR_21;
  for (VAR_27 = VAR_2 - 1; VAR_27 >= 0; VAR_27--) {
   VAR_22 += (size_t)FUNC_7(VAR_22, "%x.%x.", VAR_24[VAR_27] & 0xf,
       (VAR_24[VAR_27] >> 4) & 0xf);
  }
  FUNC_10(VAR_21, "ip6.arpa", sizeof(VAR_21));
  VAR_25 = VAR_2;
  break;
 default:
  return(VAR_11);
 }

 if ((VAR_20 = FUNC_14()) == ((void*)0))
  return(VAR_11);

 if (VAR_12)
  FUNC_12("DNS address is: %s", VAR_21);

 VAR_20->type = VAR_8;
 VAR_20->ttl = VAR_1;
 VAR_20->xprt = VAR_17->rq_xprt;
 VAR_20->ypvers = VAR_17->rq_vers;
 VAR_20->domain = ((void*)0);
 VAR_20->prot_type = VAR_26;
 if (VAR_20->prot_type == VAR_5)
  VAR_20->xid = FUNC_11(VAR_20->xprt);
 VAR_20->client_addr = VAR_20->xprt->xp_raddr;
 VAR_20->id = FUNC_16(VAR_21, VAR_20->type);

 if (VAR_20->id == 0) {
  FUNC_12("DNS query failed");
  FUNC_1(VAR_20);
  return(VAR_11);
 }

 FUNC_5(VAR_20->addr, VAR_24, VAR_25);
 VAR_20->addrlen = VAR_25;
 VAR_20->addrtype = VAR_19;
 VAR_20->name = FUNC_8(VAR_21);
 FUNC_0(&VAR_16, VAR_20, VAR_14);
 VAR_15++;

 if (VAR_12)
  FUNC_12("queueing async DNS address lookup (%lu)", VAR_20->id);

 FUNC_15();
 return(VAR_10);
}

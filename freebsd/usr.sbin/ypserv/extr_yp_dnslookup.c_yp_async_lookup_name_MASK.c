
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ypstat ;
typedef int type ;
struct svc_req {int rq_vers; TYPE_1__* rq_xprt; } ;
struct circleq_dnsentry {int prot_type; scalar_t__ id; int name; int type; int domain; TYPE_1__* xprt; int client_addr; int xid; int ypvers; int ttl; } ;
typedef int socklen_t ;
struct TYPE_4__ {int dnsrch; } ;
struct TYPE_3__ {int xp_raddr; int xp_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct circleq_dnsentry*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct circleq_dnsentry*) ;
 int FUNC_2 (int ,int ,int ,int*,int*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,...) ;
 int * FUNC_7 (int ,int ) ;
 struct circleq_dnsentry* FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (char*,int ) ;

ypstat
FUNC_11(struct svc_req *VAR_16, char *VAR_17, int VAR_18)
{
 register struct circleq_dnsentry *VAR_19;
 socklen_t VAR_20;
 int VAR_21;


 VAR_21 = -1;
 VAR_20 = sizeof(VAR_21);
 if (FUNC_2(VAR_16->rq_xprt->xp_fd, VAR_4,
     VAR_5, &VAR_21, &VAR_20) == -1) {
  FUNC_6("getsockopt failed: %s", FUNC_4(VAR_12));
  return(VAR_9);
 }


 if (VAR_21 == VAR_3 &&
     FUNC_7(FUNC_5(VAR_16->rq_xprt),VAR_1) != ((void*)0))
  return(VAR_8);

 if ((VAR_19 = FUNC_8()) == ((void*)0))
  return(VAR_9);

 VAR_19->type = (VAR_18 == VAR_0) ? VAR_6 : VAR_7;
 VAR_19->ttl = VAR_2;
 VAR_19->xprt = VAR_16->rq_xprt;
 VAR_19->ypvers = VAR_16->rq_vers;
 VAR_19->prot_type = VAR_21;
 if (VAR_19->prot_type == VAR_3)
  VAR_19->xid = FUNC_5(VAR_19->xprt);
 VAR_19->client_addr = VAR_19->xprt->xp_raddr;
 VAR_19->domain = VAR_10.dnsrch;
 VAR_19->id = FUNC_10(VAR_17, VAR_19->type);

 if (VAR_19->id == 0) {
  FUNC_6("DNS query failed");
  FUNC_1(VAR_19);
  return(VAR_9);
 }

 VAR_19->name = FUNC_3(VAR_17);
 FUNC_0(&VAR_15, VAR_19, VAR_13);
 VAR_14++;

 if (VAR_11)
  FUNC_6("queueing async DNS name lookup (%lu)", VAR_19->id);

 FUNC_9();
 return(VAR_8);
}

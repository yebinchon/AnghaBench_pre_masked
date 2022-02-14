
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct svc_callout {void (* sc_dispatch ) (struct svc_req*,TYPE_2__*) ;char* sc_netid; int sc_vers; int sc_prog; } ;
struct netconfig {char* nc_netid; } ;
struct netbuf {int len; TYPE_1__* buf; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int bool_t ;
struct TYPE_10__ {int sp_lock; int sp_callouts; } ;
struct TYPE_8__ {int ss_len; } ;
struct TYPE_9__ {char* xp_netid; TYPE_1__ xp_ltaddr; TYPE_4__* xp_pool; } ;
typedef TYPE_2__ SVCXPRT ;
typedef TYPE_4__ SVCPOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct svc_callout*,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 struct svc_callout* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const,int const,struct netconfig*,struct netbuf*) ;
 int VAR_4 ;
 void* FUNC_6 (char*,int ) ;
 struct svc_callout* FUNC_7 (TYPE_4__*,int const,int const,char*) ;

bool_t
FUNC_8(SVCXPRT *VAR_5, const rpcprog_t VAR_6, const rpcvers_t VAR_7,
    void (*VAR_8)(struct svc_req *, SVCXPRT *),
    const struct netconfig *VAR_9)
{
 SVCPOOL *VAR_10 = VAR_5->xp_pool;
 struct svc_callout *VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13 = 0;



 if (VAR_5->xp_netid) {
  VAR_12 = FUNC_6(VAR_5->xp_netid, VAR_2);
  VAR_13 = 1;
 } else if (VAR_9 && VAR_9->nc_netid) {
  VAR_12 = FUNC_6(VAR_9->nc_netid, VAR_2);
  VAR_13 = 1;
 }
 if ((VAR_12 == ((void*)0)) && (VAR_13 == 1)) {
  return (VAR_0);
 }

 FUNC_3(&VAR_10->sp_lock);
 if ((VAR_11 = FUNC_7(VAR_10, VAR_6, VAR_7, VAR_12)) != ((void*)0)) {
  if (VAR_12)
   FUNC_1(VAR_12, VAR_2);
  if (VAR_11->sc_dispatch == VAR_8)
   goto rpcb_it;
  FUNC_4(&VAR_10->sp_lock);
  return (VAR_0);
 }
 VAR_11 = FUNC_2(sizeof (struct svc_callout), VAR_2, VAR_1);
 if (VAR_11 == ((void*)0)) {
  if (VAR_12)
   FUNC_1(VAR_12, VAR_2);
  FUNC_4(&VAR_10->sp_lock);
  return (VAR_0);
 }

 VAR_11->sc_prog = VAR_6;
 VAR_11->sc_vers = VAR_7;
 VAR_11->sc_dispatch = VAR_8;
 VAR_11->sc_netid = VAR_12;
 FUNC_0(&VAR_10->sp_callouts, VAR_11, VAR_4);

 if ((VAR_5->xp_netid == ((void*)0)) && (VAR_13 == 1) && VAR_12)
  ((SVCXPRT *) VAR_5)->xp_netid = FUNC_6(VAR_12, VAR_2);

rpcb_it:
 FUNC_4(&VAR_10->sp_lock);

 if (VAR_9) {
  bool_t VAR_14;
  struct netconfig VAR_15;
  struct netbuf VAR_16;
  VAR_15 = *VAR_9;
  VAR_16.buf = &VAR_5->xp_ltaddr;
  VAR_16.len = VAR_5->xp_ltaddr.ss_len;
  VAR_14 = FUNC_5(VAR_6, VAR_7, &VAR_15, &VAR_16);
  return (VAR_14);
 }
 return (VAR_3);
}

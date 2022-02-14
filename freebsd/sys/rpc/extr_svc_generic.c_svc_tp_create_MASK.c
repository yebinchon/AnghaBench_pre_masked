
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuf {struct netbuf* buf; } ;
struct t_bind {int qlen; struct netbuf addr; } ;
struct netconfig {char* nc_netid; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef int SVCXPRT ;
typedef int SVCPOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netbuf*,int ) ;
 int FUNC_2 (char*,unsigned int,unsigned int,...) ;
 int FUNC_3 (scalar_t__,scalar_t__,struct netconfig*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,scalar_t__,void (*) (struct svc_req*,int *),struct netconfig const*) ;
 int * FUNC_5 (int *,int *,struct netconfig const*,struct t_bind*,int ,int ) ;
 struct netbuf* FUNC_6 (struct netconfig const*,char const*) ;
 int FUNC_7 (int *) ;

SVCXPRT *
FUNC_8(
 SVCPOOL *VAR_2,
 void (*VAR_3)(struct svc_req *, SVCXPRT *),
 rpcprog_t VAR_4,
 rpcvers_t VAR_5,
 const char *VAR_6,
 const struct netconfig *VAR_7)
{
 struct netconfig VAR_8;
 struct netbuf *VAR_9;
 struct t_bind VAR_10;
 SVCXPRT *VAR_11;

 if (VAR_7 == ((void*)0)) {
  FUNC_2(
 "svc_tp_create: invalid netconfig structure for prog %u vers %u\n",
    (unsigned)VAR_4, (unsigned)VAR_5);
  return (((void*)0));
 }
 if (VAR_6) {
  VAR_9 = FUNC_6(VAR_7, VAR_6);
  VAR_10.addr = *VAR_9;
  FUNC_1(VAR_9, VAR_1);
  VAR_10.qlen = -1;
  VAR_11 = FUNC_5(VAR_2, ((void*)0), VAR_7, &VAR_10, 0, 0);
  FUNC_1(VAR_10.addr.buf, VAR_1);
 } else {
  VAR_11 = FUNC_5(VAR_2, ((void*)0), VAR_7, ((void*)0), 0, 0);
 }
 if (VAR_11 == ((void*)0)) {
  return (((void*)0));
 }

 VAR_8 = *VAR_7;
 (void) FUNC_3(VAR_4, VAR_5, &VAR_8);
 if (FUNC_4(VAR_11, VAR_4, VAR_5, VAR_3, VAR_7) == VAR_0) {
  FUNC_2(
  "svc_tp_create: Could not register prog %u vers %u on %s\n",
    (unsigned)VAR_4, (unsigned)VAR_5,
    VAR_7->nc_netid);
  FUNC_7(VAR_11);
  FUNC_0(VAR_11);
  return (((void*)0));
 }
 return (VAR_11);
}

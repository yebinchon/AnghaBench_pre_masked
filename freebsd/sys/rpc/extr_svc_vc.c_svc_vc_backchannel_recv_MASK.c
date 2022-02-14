
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rpc_msg {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct ct_data {int ct_lock; } ;
struct cf_conn {struct mbuf* mreq; } ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_4__ {int xp_lock; scalar_t__ xp_p2; scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct rpc_msg*) ;
 int FUNC_6 (int *,struct mbuf*,int ) ;
 struct mbuf* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static bool_t
FUNC_9(SVCXPRT *VAR_3, struct rpc_msg *VAR_4,
    struct sockaddr **VAR_5, struct mbuf **VAR_6)
{
 struct cf_conn *VAR_7 = (struct cf_conn *) VAR_3->xp_p1;
 struct ct_data *VAR_8;
 struct mbuf *VAR_9;
 XDR VAR_10;

 FUNC_3(&VAR_3->xp_lock);
 VAR_8 = (struct ct_data *)VAR_3->xp_p2;
 if (VAR_8 == ((void*)0)) {
  FUNC_4(&VAR_3->xp_lock);
  return (VAR_0);
 }
 FUNC_1(&VAR_8->ct_lock);
 VAR_9 = VAR_7->mreq;
 if (VAR_9 == ((void*)0)) {
  FUNC_8(VAR_3);
  FUNC_2(&VAR_8->ct_lock);
  FUNC_4(&VAR_3->xp_lock);
  return (VAR_0);
 }
 VAR_7->mreq = VAR_9->m_nextpkt;
 FUNC_2(&VAR_8->ct_lock);
 FUNC_4(&VAR_3->xp_lock);

 FUNC_6(&VAR_10, VAR_9, VAR_2);
 if (! FUNC_5(&VAR_10, VAR_4)) {
  FUNC_0(&VAR_10);
  return (VAR_0);
 }
 *VAR_5 = ((void*)0);
 *VAR_6 = FUNC_7(&VAR_10);
 FUNC_0(&VAR_10);
 return (VAR_1);
}

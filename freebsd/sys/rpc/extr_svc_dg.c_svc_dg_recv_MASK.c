
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct uio {int uio_resid; int uio_td; } ;
struct sockaddr {int dummy; } ;
struct rpc_msg {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_8__ {int so_rcv; } ;
struct TYPE_7__ {int xp_lock; TYPE_4__* xp_socket; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,struct sockaddr**,struct uio*,struct mbuf**,int *,int*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct rpc_msg*) ;
 int FUNC_9 (int *,struct mbuf*,int ) ;
 struct mbuf* FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static bool_t
FUNC_12(SVCXPRT *VAR_7, struct rpc_msg *VAR_8,
    struct sockaddr **VAR_9, struct mbuf **VAR_10)
{
 struct uio VAR_11;
 struct sockaddr *VAR_12;
 struct mbuf *VAR_13;
 XDR VAR_14;
 int VAR_15, VAR_16;




 FUNC_6(&VAR_7->xp_lock);
 VAR_11.uio_resid = 1000000000;
 VAR_11.uio_td = VAR_6;
 VAR_13 = ((void*)0);
 VAR_16 = VAR_2;
 VAR_15 = FUNC_4(VAR_7->xp_socket, &VAR_12, &VAR_11, &VAR_13, ((void*)0), &VAR_16);

 if (VAR_15 == VAR_0) {
  FUNC_0(&VAR_7->xp_socket->so_rcv);
  if (!FUNC_3(VAR_7->xp_socket))
   FUNC_11(VAR_7);
  FUNC_1(&VAR_7->xp_socket->so_rcv);
  FUNC_7(&VAR_7->xp_lock);
  return (VAR_1);
 }

 if (VAR_15) {
  FUNC_0(&VAR_7->xp_socket->so_rcv);
  FUNC_5(VAR_7->xp_socket, VAR_3);
  FUNC_1(&VAR_7->xp_socket->so_rcv);
  FUNC_11(VAR_7);
  FUNC_7(&VAR_7->xp_lock);
  return (VAR_1);
 }

 FUNC_7(&VAR_7->xp_lock);

 FUNC_9(&VAR_14, VAR_13, VAR_5);
 if (! FUNC_8(&VAR_14, VAR_8)) {
  FUNC_2(&VAR_14);
  return (VAR_1);
 }

 *VAR_9 = VAR_12;
 *VAR_10 = FUNC_10(&VAR_14);
 FUNC_2(&VAR_14);

 return (VAR_4);
}

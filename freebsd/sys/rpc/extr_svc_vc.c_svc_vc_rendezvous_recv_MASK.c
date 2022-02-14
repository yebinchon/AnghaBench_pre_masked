
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rpc_msg {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int bool_t ;
struct TYPE_11__ {int sol_comp; } ;
struct TYPE_10__ {int xp_pool; int xp_lock; TYPE_5__* xp_socket; scalar_t__ xp_upcallset; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct sockaddr*,int ) ;
 int FUNC_5 (struct socket*,struct sockaddr**) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,struct socket**) ;
 TYPE_1__* FUNC_9 (int ,struct socket*,struct sockaddr*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static bool_t
FUNC_13(SVCXPRT *VAR_4, struct rpc_msg *VAR_5,
    struct sockaddr **VAR_6, struct mbuf **VAR_7)
{
 struct socket *VAR_8 = ((void*)0);
 struct sockaddr *VAR_9 = ((void*)0);
 int VAR_10;
 SVCXPRT *VAR_11;
 FUNC_10(&VAR_4->xp_lock);

 VAR_10 = FUNC_8(VAR_4->xp_socket, &VAR_8);

 if (VAR_10 == VAR_0) {






  FUNC_0(VAR_4->xp_socket);
  if (FUNC_3(&VAR_4->xp_socket->sol_comp))
   FUNC_12(VAR_4);
  FUNC_1(VAR_4->xp_socket);
  FUNC_11(&VAR_4->xp_lock);
  return (VAR_1);
 }

 if (VAR_10) {
  FUNC_0(VAR_4->xp_socket);
  if (VAR_4->xp_upcallset) {
   VAR_4->xp_upcallset = 0;
   FUNC_7(VAR_4->xp_socket, VAR_3);
  }
  FUNC_1(VAR_4->xp_socket);
  FUNC_12(VAR_4);
  FUNC_11(&VAR_4->xp_lock);
  return (VAR_1);
 }

 FUNC_11(&VAR_4->xp_lock);

 VAR_9 = ((void*)0);
 VAR_10 = FUNC_5(VAR_8, &VAR_9);

 if (VAR_10) {



  if (VAR_9)
   FUNC_4(VAR_9, VAR_2);
  return (VAR_1);
 }





 VAR_11 = FUNC_9(VAR_4->xp_pool, VAR_8, VAR_9);
 if (!VAR_11) {
  FUNC_6(VAR_8);
 } else {
  FUNC_2(VAR_11);
 }

 FUNC_4(VAR_9, VAR_2);

 return (VAR_1);
}

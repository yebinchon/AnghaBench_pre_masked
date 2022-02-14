
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xid_plus_direction ;
typedef int uint32_t ;
struct uio {int uio_resid; int uio_td; } ;
struct socket {int so_rcv; } ;
struct sockaddr {int dummy; } ;
struct rpc_msg {int dummy; } ;
struct mbuf {int dummy; } ;
struct cf_conn {scalar_t__ resid; struct mbuf* mpending; void* strm_stat; TYPE_3__* mreq; scalar_t__ eor; } ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_12__ {struct mbuf* m_next; } ;
struct TYPE_11__ {int m_len; } ;
struct TYPE_10__ {int xp_lock; scalar_t__ xp_upcallset; int * xp_p2; struct socket* xp_socket; scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 void* VAR_7 ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_3__*,int ,int,char*) ;
 TYPE_7__* FUNC_5 (struct mbuf*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,int *,struct uio*,struct mbuf**,int *,int*) ;
 int FUNC_10 (struct socket*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,struct rpc_msg*) ;
 int FUNC_15 (int *,TYPE_3__*,int ) ;
 struct mbuf* FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static bool_t
FUNC_18(SVCXPRT *VAR_9, struct rpc_msg *VAR_10,
    struct sockaddr **VAR_11, struct mbuf **VAR_12)
{
 struct cf_conn *VAR_13 = (struct cf_conn *) VAR_9->xp_p1;
 struct uio VAR_14;
 struct mbuf *VAR_15;
 struct socket* VAR_16 = VAR_9->xp_socket;
 XDR VAR_17;
 int VAR_18, VAR_19;
 uint32_t VAR_20[2];





 FUNC_12(&VAR_9->xp_lock);

 for (;;) {

  while (VAR_13->mpending &&
      (VAR_13->mreq == ((void*)0) || VAR_13->resid != 0 || !VAR_13->eor)) {
   if (!FUNC_11(VAR_9))
    break;
  }


  if (VAR_13->mreq != ((void*)0) && VAR_13->resid == 0 && VAR_13->eor) {






   if ((VAR_13->mreq->m_len >= sizeof(VAR_20) ||
       FUNC_6(VAR_13->mreq, ((void*)0)) >=
       sizeof(VAR_20)) &&
       VAR_9->xp_p2 != ((void*)0)) {
    FUNC_4(VAR_13->mreq, 0,
        sizeof(VAR_20),
        (char *)VAR_20);
    VAR_20[0] =
        FUNC_7(VAR_20[0]);
    VAR_20[1] =
        FUNC_7(VAR_20[1]);

    if (VAR_20[1] == VAR_3) {
     FUNC_3(VAR_9->xp_p2,
         VAR_13->mreq,
         VAR_20[0]);
     VAR_13->mreq = ((void*)0);
     continue;
    }
   }

   FUNC_15(&VAR_17, VAR_13->mreq, VAR_6);
   VAR_13->mreq = ((void*)0);


   FUNC_11(VAR_9);
   if (VAR_13->mreq == ((void*)0) || VAR_13->resid != 0) {
    FUNC_0(&VAR_16->so_rcv);
    if (!FUNC_8(VAR_16))
     FUNC_17(VAR_9);
    FUNC_1(&VAR_16->so_rcv);
   }

   FUNC_13(&VAR_9->xp_lock);

   if (! FUNC_14(&VAR_17, VAR_10)) {
    FUNC_2(&VAR_17);
    return (VAR_1);
   }

   *VAR_11 = ((void*)0);
   *VAR_12 = FUNC_16(&VAR_17);
   FUNC_2(&VAR_17);

   return (VAR_5);
  }
  VAR_14.uio_resid = 1000000000;
  VAR_14.uio_td = VAR_8;
  VAR_15 = ((void*)0);
  VAR_19 = VAR_2;
  VAR_18 = FUNC_9(VAR_16, ((void*)0), &VAR_14, &VAR_15, ((void*)0), &VAR_19);

  if (VAR_18 == VAR_0) {







   FUNC_0(&VAR_16->so_rcv);
   if (!FUNC_8(VAR_16))
    FUNC_17(VAR_9);
   FUNC_1(&VAR_16->so_rcv);
   FUNC_13(&VAR_9->xp_lock);
   return (VAR_1);
  }

  if (VAR_18) {
   FUNC_0(&VAR_16->so_rcv);
   if (VAR_9->xp_upcallset) {
    VAR_9->xp_upcallset = 0;
    FUNC_10(VAR_16, VAR_4);
   }
   FUNC_1(&VAR_16->so_rcv);
   FUNC_17(VAR_9);
   VAR_13->strm_stat = VAR_7;
   FUNC_13(&VAR_9->xp_lock);
   return (VAR_1);
  }

  if (!VAR_15) {



   FUNC_17(VAR_9);
   VAR_13->strm_stat = VAR_7;
   FUNC_13(&VAR_9->xp_lock);
   return (VAR_1);
  }

  if (VAR_13->mpending)
   FUNC_5(VAR_13->mpending)->m_next = VAR_15;
  else
   VAR_13->mpending = VAR_15;
 }
}

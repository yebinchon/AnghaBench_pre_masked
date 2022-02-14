
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct uio {scalar_t__ uio_resid; struct thread* uio_td; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int sb_state; } ;
struct socket {int so_state; int so_vnet; TYPE_1__ so_rcv; } ;
struct sockaddr {int dummy; } ;
struct nbpcb {scalar_t__ nbp_state; struct socket* nbp_tso; } ;
struct mbuf {struct mbuf* m_next; } ;
typedef int auio ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct uio*,int) ;
 int FUNC_5 (struct mbuf*) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (struct nbpcb*,int*,scalar_t__*,int ,struct thread*) ;
 int FUNC_8 (struct socket*,struct sockaddr**,struct uio*,struct mbuf**,struct mbuf**,int*) ;

__attribute__((used)) static int
FUNC_9(struct nbpcb *VAR_16, struct mbuf **VAR_17, int *VAR_18,
 u_int8_t *VAR_19, struct thread *VAR_20)
{
 struct socket *VAR_21 = VAR_16->nbp_tso;
 struct uio VAR_22;
 struct mbuf *VAR_23, *VAR_24, *VAR_25;
 u_int8_t VAR_26;
 int VAR_27, VAR_28;
 int VAR_29, VAR_30;

 if (VAR_21 == ((void*)0))
  return VAR_2;

 if (VAR_17)
  *VAR_17 = ((void*)0);
 VAR_23 = ((void*)0);
 for(;;) {




  VAR_27 = 0;
  VAR_26 = 0;
  VAR_29 = FUNC_7(VAR_16, &VAR_27, &VAR_26, VAR_6, VAR_20);
  if ((VAR_21->so_state & (VAR_15 | VAR_14)) ||
      (VAR_21->so_rcv.sb_state & VAR_13)) {
   VAR_16->nbp_state = VAR_8;
   FUNC_2("session closed by peer\n");
   return VAR_0;
  }
  if (VAR_29)
   return VAR_29;
  if (VAR_27 == 0 && VAR_16->nbp_state != VAR_9)
   break;

  if (VAR_26 == VAR_11)
   continue;
  VAR_28 = VAR_27;
  while (VAR_28 > 0) {
   VAR_24 = ((void*)0);
   VAR_30 = VAR_7;
   FUNC_4(&VAR_22, sizeof(VAR_22));
   VAR_22.uio_resid = FUNC_6(VAR_28, VAR_10);
   VAR_22.uio_td = VAR_20;
   VAR_28 -= VAR_22.uio_resid;




   do {
    VAR_30 = VAR_7;
    FUNC_1(VAR_21->so_vnet);
    VAR_29 = FUNC_8(VAR_21, (struct sockaddr **)((void*)0),
        &VAR_22, &VAR_24, (struct mbuf **)((void*)0), &VAR_30);
    FUNC_0();
   } while (VAR_29 == VAR_5 || VAR_29 == VAR_1 ||
     VAR_29 == VAR_4);
   if (VAR_29)
    goto out;

   if (VAR_22.uio_resid > 0) {
    FUNC_3("packet is shorter than expected\n");
    VAR_29 = VAR_3;
    goto out;
   }

   if (VAR_23 == ((void*)0)) {
    VAR_23 = VAR_24;
   } else {




    for (VAR_25 = VAR_23; VAR_25->m_next != ((void*)0); VAR_25 = VAR_25->m_next)
     ;
    VAR_25->m_next = VAR_24;
   }
  }

  if (VAR_16->nbp_state == VAR_9 &&
      VAR_26 == VAR_12)
   break;

  FUNC_2("non-session packet %x\n", VAR_26);
  if (VAR_23) {
   FUNC_5(VAR_23);
   VAR_23 = ((void*)0);
  }
 }

out:
 if (VAR_29) {
  if (VAR_23)
   FUNC_5(VAR_23);
  return VAR_29;
 }
 if (VAR_17)
  *VAR_17 = VAR_23;
 else
  FUNC_5(VAR_23);
 *VAR_18 = VAR_27;
 *VAR_19 = VAR_26;
 return 0;
}

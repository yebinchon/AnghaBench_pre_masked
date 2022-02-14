
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct udpcb {int u_tun_ctx; int (* u_tun_func ) (struct mbuf*,int,struct inpcb*,struct sockaddr*,int ) ;} ;
struct socket {int so_options; int so_rcv; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {struct mbuf* m_next; } ;
struct inpcb {int inp_flags; int inp_vflag; int inp_flags2; struct socket* inp_socket; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 int VAR_2 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct inpcb*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,struct mbuf*,struct inpcb*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inpcb*) ;
 int FUNC_9 (struct inpcb*) ;
 struct udpcb* FUNC_10 (struct inpcb*) ;
 int FUNC_11 (struct inpcb*,struct mbuf*,struct mbuf**) ;
 int VAR_6 ;
 int FUNC_12 (struct mbuf*,int) ;
 int FUNC_13 (struct mbuf*) ;
 scalar_t__ FUNC_14 (struct inpcb*,struct mbuf*) ;
 scalar_t__ FUNC_15 (int *,struct sockaddr*,struct mbuf*,struct mbuf*) ;
 struct mbuf* FUNC_16 (int ,int,int ,int ) ;
 int FUNC_17 (struct socket*) ;
 int FUNC_18 (struct mbuf*,int,struct inpcb*,struct sockaddr*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_19(struct inpcb *VAR_8, struct mbuf *VAR_9, int VAR_10,
    struct sockaddr_in6 *VAR_11)
{
 struct socket *VAR_12;
 struct mbuf *VAR_13 = ((void*)0), *VAR_14;
 struct udpcb *VAR_15;

 FUNC_0(VAR_8);




 VAR_15 = FUNC_10(VAR_8);
 if (VAR_15->u_tun_func != ((void*)0)) {
  FUNC_8(VAR_8);
  FUNC_2(VAR_8);
  (*VAR_15->u_tun_func)(VAR_9, VAR_10, VAR_8, (struct sockaddr *)&VAR_11[0],
      VAR_15->u_tun_ctx);
  FUNC_1(VAR_8);
  return (FUNC_9(VAR_8));
 }
 VAR_13 = ((void*)0);
 if (VAR_8->inp_flags & VAR_0 ||
     VAR_8->inp_socket->so_options & VAR_5)
  FUNC_11(VAR_8, VAR_9, &VAR_13);
 if ((VAR_8->inp_vflag & VAR_1) && (VAR_8->inp_flags2 & VAR_2)) {
  VAR_14 = FUNC_16((caddr_t)&VAR_11[1],
                        sizeof(struct sockaddr_in6), VAR_4, VAR_3);
                if (VAR_14) {
                        if (VAR_13) {
                                VAR_14->m_next = VAR_13;
                                VAR_13 = VAR_14;
                        } else
                                VAR_13 = VAR_14;
                }

 }
 FUNC_12(VAR_9, VAR_10 + sizeof(struct udphdr));

 VAR_12 = VAR_8->inp_socket;
 FUNC_5(&VAR_12->so_rcv);
 if (FUNC_15(&VAR_12->so_rcv, (struct sockaddr *)&VAR_11[0], VAR_9,
     VAR_13) == 0) {
  FUNC_6(&VAR_12->so_rcv);
  FUNC_13(VAR_9);
  if (VAR_13)
   FUNC_13(VAR_13);
  FUNC_7(VAR_7);
 } else
  FUNC_17(VAR_12);
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct ucred {scalar_t__ cr_uid; } ;
struct tcptw {int tw_so_options; } ;
struct socket {int so_options; scalar_t__ so_type; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; void* sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;
struct inpcbinfo {int dummy; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct inpcb {int inp_flags; int inp_flags2; int inp_vflag; scalar_t__ inp_lport; void* in6p_laddr; TYPE_2__ inp_laddr; struct ucred* inp_cred; TYPE_1__ inp_faddr; void* in6p_faddr; struct inpcbinfo* inp_pcbinfo; struct socket* inp_socket; } ;
struct in6_ifaddr {int ia6_flags; } ;
struct ifaddr {int dummy; } ;
struct epoch_tracker {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (void**) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct inpcbinfo*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct epoch_tracker) ;
 int FUNC_6 (struct epoch_tracker) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 struct ifaddr* FUNC_7 (struct sockaddr*) ;
 struct inpcb* FUNC_8 (struct inpcbinfo*,void**,scalar_t__,int,struct ucred*) ;
 int FUNC_9 (void**,struct inpcb*,struct ucred*) ;
 int FUNC_10 (struct sockaddr_in*,struct sockaddr_in6*) ;
 void* VAR_29 ;
 int FUNC_11 (struct inpcb*,struct inpcb*) ;
 scalar_t__ FUNC_12 (struct inpcb*) ;
 struct inpcb* FUNC_13 (struct inpcbinfo*,int ,scalar_t__,int,struct ucred*) ;
 int FUNC_14 (struct inpcb*) ;
 struct tcptw* FUNC_15 (struct inpcb*) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct ucred*,void**,int) ;
 scalar_t__ FUNC_19 (struct ucred*,int ) ;
 int FUNC_20 (struct sockaddr_in6*,int ) ;

int
FUNC_21(struct inpcb *VAR_30, struct sockaddr *VAR_31,
    struct ucred *VAR_32)
{
 struct socket *VAR_33 = VAR_30->inp_socket;
 struct sockaddr_in6 *VAR_34 = (struct sockaddr_in6 *)((void*)0);
 struct inpcbinfo *VAR_35 = VAR_30->inp_pcbinfo;
 u_short VAR_36 = 0;
 int VAR_37, VAR_38 = 0;
 int VAR_39 = (VAR_33->so_options & VAR_23);





 int VAR_40 = (VAR_33->so_options & VAR_24);

 FUNC_4(VAR_30);
 FUNC_3(VAR_35);

 if (FUNC_0(&VAR_25))
  return (VAR_3);
 if (VAR_30->inp_lport || !FUNC_2(&VAR_30->in6p_laddr))
  return (VAR_6);
 if ((VAR_33->so_options & (VAR_22|VAR_23|VAR_24)) == 0)
  VAR_38 = VAR_12;
 if (VAR_31 == ((void*)0)) {
  if ((VAR_37 = FUNC_18(VAR_32, &VAR_30->in6p_laddr,
      ((VAR_30->inp_flags & VAR_7) != 0))) != 0)
   return (VAR_37);
 } else {
  VAR_34 = (struct sockaddr_in6 *)VAR_31;
  if (VAR_31->sa_len != sizeof(*VAR_34))
   return (VAR_6);



  if (VAR_31->sa_family != VAR_0)
   return (VAR_4);

  if ((VAR_37 = FUNC_20(VAR_34, VAR_26)) != 0)
   return(VAR_37);

  if ((VAR_37 = FUNC_18(VAR_32, &VAR_34->sin6_addr,
      ((VAR_30->inp_flags & VAR_7) != 0))) != 0)
   return (VAR_37);

  VAR_36 = VAR_34->sin6_port;
  if (FUNC_1(&VAR_34->sin6_addr)) {







   if ((VAR_33->so_options & (VAR_22|VAR_23)) != 0)
    VAR_39 = VAR_22|VAR_23;




   if ((VAR_33->so_options &
       (VAR_22|VAR_24)) != 0)
    VAR_40 = VAR_22|VAR_24;
  } else if (!FUNC_2(&VAR_34->sin6_addr)) {
   struct epoch_tracker VAR_41;
   struct ifaddr *VAR_42;

   VAR_34->sin6_port = 0;
   FUNC_5(VAR_41);
   if ((VAR_42 = FUNC_7((struct sockaddr *)VAR_34)) ==
       ((void*)0) &&
       (VAR_30->inp_flags & VAR_13) == 0) {
    FUNC_6(VAR_41);
    return (VAR_3);
   }







   if (VAR_42 != ((void*)0) &&
       ((struct in6_ifaddr *)VAR_42)->ia6_flags &
       (VAR_8|VAR_10|VAR_9)) {
    FUNC_6(VAR_41);
    return (VAR_3);
   }
   FUNC_6(VAR_41);
  }
  if (VAR_36) {
   struct inpcb *VAR_43;
   struct tcptw *VAR_44;


   if (FUNC_17(VAR_36) <= VAR_27 &&
       FUNC_17(VAR_36) >= VAR_28 &&
       FUNC_19(VAR_32, VAR_19))
    return (VAR_1);
   if (!FUNC_1(&VAR_34->sin6_addr) &&
       FUNC_19(VAR_30->inp_cred, VAR_20) != 0) {
    VAR_43 = FUNC_8(VAR_35,
        &VAR_34->sin6_addr, VAR_36,
        VAR_12, VAR_32);
    if (VAR_43 &&
        ((VAR_30->inp_flags2 & VAR_14) == 0) &&
        ((VAR_43->inp_flags & VAR_18) == 0) &&
        (VAR_33->so_type != VAR_21 ||
         FUNC_2(&VAR_43->in6p_faddr)) &&
        (!FUNC_2(&VAR_34->sin6_addr) ||
         !FUNC_2(&VAR_43->in6p_laddr) ||
         (VAR_43->inp_flags2 & VAR_16) ||
         (VAR_43->inp_flags2 & VAR_17) == 0) &&
        (VAR_30->inp_cred->cr_uid !=
         VAR_43->inp_cred->cr_uid))
     return (VAR_2);







    if (VAR_43 && (! FUNC_11(VAR_30, VAR_43)))
     return (VAR_2);
   }
   VAR_43 = FUNC_8(VAR_35, &VAR_34->sin6_addr,
       VAR_36, VAR_38, VAR_32);
   if (VAR_43 && (VAR_43->inp_flags & VAR_18)) {






    VAR_44 = FUNC_15(VAR_43);
    if (VAR_44 == ((void*)0) ||
        ((VAR_39 & VAR_44->tw_so_options) == 0 &&
      (VAR_40 & VAR_44->tw_so_options) == 0))
     return (VAR_2);
   } else if (VAR_43 && (VAR_39 & FUNC_14(VAR_43)) == 0 &&
        (VAR_40 & FUNC_14(VAR_43)) == 0) {
    return (VAR_2);
   }
  }
  VAR_30->in6p_laddr = VAR_34->sin6_addr;
 }
 if (VAR_36 == 0) {
  if ((VAR_37 = FUNC_9(&VAR_30->in6p_laddr, VAR_30, VAR_32)) != 0) {

   VAR_30->in6p_laddr = VAR_29;
   return (VAR_37);
  }
 } else {
  VAR_30->inp_lport = VAR_36;
  if (FUNC_12(VAR_30) != 0) {
   VAR_30->in6p_laddr = VAR_29;
   VAR_30->inp_lport = 0;
   return (VAR_5);
  }
 }
 return (0);
}

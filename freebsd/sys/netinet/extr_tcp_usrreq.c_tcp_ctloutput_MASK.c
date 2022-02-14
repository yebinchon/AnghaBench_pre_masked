
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_state; scalar_t__ t_maxseg; int t_flags; struct tcp_function_block* t_fb; int t_inpcb; } ;
struct tcp_function_set {char* function_set_name; int pcbcnt; } ;
struct tcp_function_block {int (* tfb_tcp_handoff_ok ) (struct tcpcb*) ;int tfb_flags; int (* tfb_tcp_fb_init ) (struct tcpcb*) ;int (* tfb_tcp_ctloutput ) (struct socket*,struct sockopt*,struct inpcb*,struct tcpcb*) ;int tfb_refcnt; int tfb_tcp_block_name; int (* tfb_tcp_fb_fini ) (struct tcpcb*,int ) ;} ;
struct sockopt {scalar_t__ sopt_level; int sopt_name; int sopt_dir; } ;
struct socket {int dummy; } ;
struct ip6_pktopts {scalar_t__ ip6po_minmtu; } ;
struct TYPE_2__ {int inc_flags; } ;
struct inpcb {int inp_vflag; int inp_flags; struct ip6_pktopts* in6p_outputopts; TYPE_1__ inp_inc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct inpcb*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct tcp_function_block* FUNC_4 (struct tcp_function_set*) ;
 struct tcpcb* FUNC_5 (struct inpcb*) ;
 int FUNC_6 (struct socket*,struct sockopt*) ;
 int FUNC_7 (struct socket*,struct sockopt*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (struct sockopt*,struct tcp_function_set*,int,int) ;
 int FUNC_11 (struct sockopt*,struct tcp_function_set*,int) ;
 struct inpcb* FUNC_12 (struct socket*) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (struct tcpcb*) ;
 int FUNC_15 (struct tcpcb*,int ) ;
 int FUNC_16 (struct tcpcb*) ;
 scalar_t__ FUNC_17 (struct tcpcb*) ;
 int FUNC_18 (struct socket*,struct sockopt*,struct inpcb*,struct tcpcb*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct tcpcb*,int ,int ) ;

int
FUNC_21(struct socket *VAR_22, struct sockopt *VAR_23)
{
 int VAR_24;
 struct inpcb *VAR_25;
 struct tcpcb *VAR_26;
 struct tcp_function_block *VAR_27;
 struct tcp_function_set VAR_28;

 VAR_24 = 0;
 VAR_25 = FUNC_12(VAR_22);
 FUNC_3(VAR_25 != ((void*)0), ("tcp_ctloutput: inp == NULL"));
 if (VAR_23->sopt_level != VAR_11) {
  return (VAR_24);
 }
 FUNC_0(VAR_25);
 if (VAR_25->inp_flags & (VAR_8 | VAR_6)) {
  FUNC_2(VAR_25);
  return (VAR_0);
 }
 VAR_26 = FUNC_5(VAR_25);




 if ((VAR_23->sopt_dir == VAR_14) &&
     (VAR_23->sopt_name == VAR_18)) {
  FUNC_2(VAR_25);
  VAR_24 = FUNC_10(VAR_23, &VAR_28, sizeof VAR_28,
      sizeof VAR_28);
  if (VAR_24)
   return (VAR_24);
  FUNC_1(VAR_25);
  VAR_27 = FUNC_4(&VAR_28);
  if (VAR_27 == ((void*)0)) {
   FUNC_2(VAR_25);
   return (VAR_2);
  }
  if (VAR_26->t_fb == VAR_27) {

   FUNC_8(&VAR_27->tfb_refcnt);
   FUNC_2(VAR_25);
   return (0);
  }
  if (VAR_26->t_state != VAR_16) {





   if (VAR_27->tfb_tcp_handoff_ok != ((void*)0)) {





    VAR_24 = (*VAR_27->tfb_tcp_handoff_ok)(VAR_26);
   } else
    VAR_24 = VAR_1;
   if (VAR_24) {
    FUNC_8(&VAR_27->tfb_refcnt);
    FUNC_2(VAR_25);
    return(VAR_24);
   }
  }
  if (VAR_27->tfb_flags & VAR_20) {
   FUNC_8(&VAR_27->tfb_refcnt);
   FUNC_2(VAR_25);
   return (VAR_2);
  }





  if (VAR_26->t_fb->tfb_tcp_fb_fini) {




   (*VAR_26->t_fb->tfb_tcp_fb_fini)(VAR_26, 0);
  }




  if (VAR_27->tfb_tcp_fb_init) {
   VAR_24 = (*VAR_27->tfb_tcp_fb_init)(VAR_26);
   if (VAR_24) {
    FUNC_8(&VAR_27->tfb_refcnt);
    if (VAR_26->t_fb->tfb_tcp_fb_init) {
     if((*VAR_26->t_fb->tfb_tcp_fb_init)(VAR_26) != 0) {

      FUNC_2(VAR_25);
      FUNC_9(VAR_22);
      return(VAR_24);
     }
    }
    goto err_out;
   }
  }
  FUNC_8(&VAR_26->t_fb->tfb_refcnt);
  VAR_26->t_fb = VAR_27;






err_out:
  FUNC_2(VAR_25);
  return (VAR_24);
 } else if ((VAR_23->sopt_dir == VAR_13) &&
     (VAR_23->sopt_name == VAR_18)) {
  FUNC_13(VAR_28.function_set_name, VAR_26->t_fb->tfb_tcp_block_name,
      VAR_19);
  VAR_28.function_set_name[VAR_19 - 1] = '\0';
  VAR_28.pcbcnt = VAR_26->t_fb->tfb_refcnt;
  FUNC_2(VAR_25);
  VAR_24 = FUNC_11(VAR_23, &VAR_28, sizeof VAR_28);
  return (VAR_24);
 }

 return (VAR_26->t_fb->tfb_tcp_ctloutput(VAR_22, VAR_23, VAR_25, VAR_26));
}

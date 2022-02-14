
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_state; int t_rxtshift; int t_softerror; } ;
struct rtentry {int dummy; } ;
struct TYPE_5__ {struct rtentry* ro_rt; } ;
struct inpcb {int inp_flags; TYPE_1__ inp_route; } ;
struct TYPE_6__ {int so_timeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rtentry*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct tcpcb* FUNC_4 (struct inpcb*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 struct tcpcb* FUNC_7 (struct tcpcb*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct inpcb *
FUNC_9(struct inpcb *VAR_8, int VAR_9)
{
 struct tcpcb *VAR_10;

 FUNC_0(&VAR_6);
 FUNC_1(VAR_8);

 if ((VAR_8->inp_flags & VAR_4) ||
     (VAR_8->inp_flags & VAR_3))
  return (VAR_8);

 VAR_10 = FUNC_4(VAR_8);
 FUNC_2(VAR_10 != ((void*)0), ("tcp_notify: tp == NULL"));
 if (VAR_10->t_state == VAR_5 &&
     (VAR_9 == VAR_1 || VAR_9 == VAR_2 ||
      VAR_9 == VAR_0)) {
  if (VAR_8->inp_route.ro_rt) {
   FUNC_3(VAR_8->inp_route.ro_rt);
   VAR_8->inp_route.ro_rt = (struct rtentry *)((void*)0);
  }
  return (VAR_8);
 } else if (VAR_10->t_state < VAR_5 && VAR_10->t_rxtshift > 3 &&
     VAR_10->t_softerror) {
  VAR_10 = FUNC_7(VAR_10, VAR_9);
  if (VAR_10 != ((void*)0))
   return (VAR_8);
  else
   return (((void*)0));
 } else {
  VAR_10->t_softerror = VAR_9;
  return (VAR_8);
 }





}

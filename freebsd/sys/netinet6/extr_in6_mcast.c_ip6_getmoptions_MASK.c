
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct sockopt {int sopt_name; } ;
struct ip6_moptions {int im6o_multicast_loop; int im6o_multicast_hlim; TYPE_3__* im6o_multicast_ifp; } ;
struct inpcb {TYPE_2__* inp_socket; struct ip6_moptions* in6p_moptions; } ;
struct TYPE_6__ {int if_index; } ;
struct TYPE_5__ {TYPE_1__* so_proto; } ;
struct TYPE_4__ {scalar_t__ pr_protocol; scalar_t__ pr_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct inpcb*) ;
 scalar_t__ VAR_3 ;




 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct inpcb*,struct sockopt*) ;
 int FUNC_4 (struct sockopt*,int *,int) ;

int
FUNC_5(struct inpcb *VAR_8, struct sockopt *VAR_9)
{
 struct ip6_moptions *VAR_10;
 int VAR_11;
 u_int VAR_12;

 FUNC_1(VAR_8);
 VAR_10 = VAR_8->in6p_moptions;




 if (VAR_8->inp_socket->so_proto->pr_protocol == VAR_3 ||
     (VAR_8->inp_socket->so_proto->pr_type != VAR_5 &&
     VAR_8->inp_socket->so_proto->pr_type != VAR_4)) {
  FUNC_2(VAR_8);
  return (VAR_2);
 }

 VAR_11 = 0;
 switch (VAR_9->sopt_name) {
 case 129:
  if (VAR_10 == ((void*)0) || VAR_10->im6o_multicast_ifp == ((void*)0)) {
   VAR_12 = 0;
  } else {
   VAR_12 = VAR_10->im6o_multicast_ifp->if_index;
  }
  FUNC_2(VAR_8);
  VAR_11 = FUNC_4(VAR_9, &VAR_12, sizeof(u_int));
  break;

 case 130:
  if (VAR_10 == ((void*)0))
   VAR_12 = VAR_6;
  else
   VAR_12 = VAR_10->im6o_multicast_hlim;
  FUNC_2(VAR_8);
  VAR_11 = FUNC_4(VAR_9, &VAR_12, sizeof(u_int));
  break;

 case 128:
  if (VAR_10 == ((void*)0))
   VAR_12 = VAR_7;
  else
   VAR_12 = VAR_10->im6o_multicast_loop;
  FUNC_2(VAR_8);
  VAR_11 = FUNC_4(VAR_9, &VAR_12, sizeof(u_int));
  break;

 case 131:
  if (VAR_10 == ((void*)0)) {
   VAR_11 = VAR_0;
   FUNC_2(VAR_8);
  } else {
   VAR_11 = FUNC_3(VAR_8, VAR_9);
  }
  break;

 default:
  FUNC_2(VAR_8);
  VAR_11 = VAR_1;
  break;
 }

 FUNC_0(VAR_8);

 return (VAR_11);
}

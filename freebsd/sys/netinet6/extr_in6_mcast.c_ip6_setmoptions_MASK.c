
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct sockopt {int sopt_name; int sopt_valsize; } ;
struct ip6_moptions {int im6o_multicast_hlim; int im6o_multicast_loop; } ;
struct inpcb {TYPE_2__* inp_socket; } ;
typedef int hlim ;
struct TYPE_4__ {TYPE_1__* so_proto; } ;
struct TYPE_3__ {scalar_t__ pr_protocol; scalar_t__ pr_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct inpcb*,struct sockopt*) ;
 struct ip6_moptions* FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct inpcb*,struct sockopt*) ;
 int FUNC_5 (struct inpcb*,struct sockopt*) ;
 int FUNC_6 (struct inpcb*,struct sockopt*) ;
 int FUNC_7 (struct inpcb*,struct sockopt*) ;
 int FUNC_8 (struct sockopt*,int*,int,int) ;

int
FUNC_9(struct inpcb *VAR_6, struct sockopt *VAR_7)
{
 struct ip6_moptions *VAR_8;
 int VAR_9;

 VAR_9 = 0;





 if (VAR_6->inp_socket->so_proto->pr_protocol == VAR_2 ||
     (VAR_6->inp_socket->so_proto->pr_type != VAR_4 &&
      VAR_6->inp_socket->so_proto->pr_type != VAR_3))
  return (VAR_1);

 switch (VAR_7->sopt_name) {
 case 135:
  VAR_9 = FUNC_6(VAR_6, VAR_7);
  break;

 case 136: {
  int VAR_10;

  if (VAR_7->sopt_valsize != sizeof(int)) {
   VAR_9 = VAR_0;
   break;
  }
  VAR_9 = FUNC_8(VAR_7, &VAR_10, sizeof(VAR_10), sizeof(int));
  if (VAR_9)
   break;
  if (VAR_10 < -1 || VAR_10 > 255) {
   VAR_9 = VAR_0;
   break;
  } else if (VAR_10 == -1) {
   VAR_10 = VAR_5;
  }
  VAR_8 = FUNC_3(VAR_6);
  VAR_8->im6o_multicast_hlim = VAR_10;
  FUNC_1(VAR_6);
  break;
 }

 case 134: {
  u_int VAR_11;





  if (VAR_7->sopt_valsize != sizeof(u_int)) {
   VAR_9 = VAR_0;
   break;
  }
  VAR_9 = FUNC_8(VAR_7, &VAR_11, sizeof(u_int), sizeof(u_int));
  if (VAR_9)
   break;
  if (VAR_11 > 1) {
   VAR_9 = VAR_0;
   break;
  }
  VAR_8 = FUNC_3(VAR_6);
  VAR_8->im6o_multicast_loop = VAR_11;
  FUNC_1(VAR_6);
  break;
 }

 case 139:
 case 132:
 case 131:
  VAR_9 = FUNC_4(VAR_6, VAR_7);
  break;

 case 138:
 case 130:
 case 129:
  VAR_9 = FUNC_5(VAR_6, VAR_7);
  break;

 case 133:
 case 128:
  VAR_9 = FUNC_2(VAR_6, VAR_7);
  break;

 case 137:
  VAR_9 = FUNC_7(VAR_6, VAR_7);
  break;

 default:
  VAR_9 = VAR_1;
  break;
 }

 FUNC_0(VAR_6);

 return (VAR_9);
}

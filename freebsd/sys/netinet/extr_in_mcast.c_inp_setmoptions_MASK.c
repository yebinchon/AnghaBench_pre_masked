
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct sockopt {int sopt_name; int sopt_valsize; } ;
struct ip_moptions {int imo_multicast_vif; int imo_multicast_ttl; int imo_multicast_loop; } ;
struct inpcb {TYPE_2__* inp_socket; } ;
struct TYPE_4__ {TYPE_1__* so_proto; } ;
struct TYPE_3__ {scalar_t__ pr_protocol; scalar_t__ pr_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct inpcb*,struct sockopt*) ;
 struct ip_moptions* FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct inpcb*,struct sockopt*) ;
 int FUNC_5 (struct inpcb*,struct sockopt*) ;
 int FUNC_6 (struct inpcb*,struct sockopt*) ;
 int FUNC_7 (struct inpcb*,struct sockopt*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct sockopt*,int*,int,int) ;

int
FUNC_10(struct inpcb *VAR_5, struct sockopt *VAR_6)
{
 struct ip_moptions *VAR_7;
 int VAR_8;

 VAR_8 = 0;





 if (VAR_5->inp_socket->so_proto->pr_protocol == VAR_2 ||
     (VAR_5->inp_socket->so_proto->pr_type != VAR_4 &&
      VAR_5->inp_socket->so_proto->pr_type != VAR_3))
  return (VAR_1);

 switch (VAR_6->sopt_name) {
 case 135: {
  int VAR_9;




  if (&FUNC_8 == ((void*)0)) {
   VAR_8 = VAR_1;
   break;
  }
  VAR_8 = FUNC_9(VAR_6, &VAR_9, sizeof(int), sizeof(int));
  if (VAR_8)
   break;
  if (!FUNC_8(VAR_9) && (VAR_9 != -1)) {
   VAR_8 = VAR_0;
   break;
  }
  VAR_7 = FUNC_3(VAR_5);
  VAR_7->imo_multicast_vif = VAR_9;
  FUNC_1(VAR_5);
  break;
 }

 case 138:
  VAR_8 = FUNC_6(VAR_5, VAR_6);
  break;

 case 136: {
  u_char VAR_10;







  if (VAR_6->sopt_valsize == sizeof(u_char)) {
   VAR_8 = FUNC_9(VAR_6, &VAR_10, sizeof(u_char),
       sizeof(u_char));
   if (VAR_8)
    break;
  } else {
   u_int VAR_11;

   VAR_8 = FUNC_9(VAR_6, &VAR_11, sizeof(u_int),
       sizeof(u_int));
   if (VAR_8)
    break;
   if (VAR_11 > 255) {
    VAR_8 = VAR_0;
    break;
   }
   VAR_10 = (u_char)VAR_11;
  }
  VAR_7 = FUNC_3(VAR_5);
  VAR_7->imo_multicast_ttl = VAR_10;
  FUNC_1(VAR_5);
  break;
 }

 case 137: {
  u_char VAR_12;







  if (VAR_6->sopt_valsize == sizeof(u_char)) {
   VAR_8 = FUNC_9(VAR_6, &VAR_12, sizeof(u_char),
       sizeof(u_char));
   if (VAR_8)
    break;
  } else {
   u_int VAR_13;

   VAR_8 = FUNC_9(VAR_6, &VAR_13, sizeof(u_int),
         sizeof(u_int));
   if (VAR_8)
    break;
   VAR_12 = (u_char)VAR_13;
  }
  VAR_7 = FUNC_3(VAR_5);
  VAR_7->imo_multicast_loop = !!VAR_12;
  FUNC_1(VAR_5);
  break;
 }

 case 144:
 case 143:
 case 132:
 case 131:
  VAR_8 = FUNC_4(VAR_5, VAR_6);
  break;

 case 141:
 case 140:
 case 130:
 case 129:
  VAR_8 = FUNC_5(VAR_5, VAR_6);
  break;

 case 142:
 case 134:
 case 133:
 case 128:
  VAR_8 = FUNC_2(VAR_5, VAR_6);
  break;

 case 139:
  VAR_8 = FUNC_7(VAR_5, VAR_6);
  break;

 default:
  VAR_8 = VAR_1;
  break;
 }

 FUNC_0(VAR_5);

 return (VAR_8);
}

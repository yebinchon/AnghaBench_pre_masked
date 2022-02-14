
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt {scalar_t__ sopt_level; scalar_t__ sopt_name; int sopt_dir; } ;
struct socket {int so_fibnum; } ;
struct TYPE_2__ {int inc_fibnum; } ;
struct inpcb {TYPE_1__ inp_inc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 scalar_t__ VAR_5 ;
 int FUNC_2 (struct socket*,struct sockopt*) ;
 int FUNC_3 (struct socket*,struct sockopt*) ;
 int FUNC_4 (struct socket*,struct sockopt*) ;
 int FUNC_5 (struct socket*,struct sockopt*) ;
 int FUNC_6 (struct socket*,struct sockopt*) ;
 struct inpcb* FUNC_7 (struct socket*) ;

int
FUNC_8(struct socket *VAR_6, struct sockopt *VAR_7)
{
 struct inpcb *VAR_8;
 int VAR_9;

 if (VAR_7->sopt_level == VAR_2)




  return (FUNC_2(VAR_6, VAR_7));
 else if (VAR_7->sopt_level != VAR_3) {
  if (VAR_7->sopt_level == VAR_4 &&
      VAR_7->sopt_name == VAR_5) {
   VAR_8 = FUNC_7(VAR_6);
   FUNC_0(VAR_8);
   VAR_8->inp_inc.inc_fibnum = VAR_6->so_fibnum;
   FUNC_1(VAR_8);
   return (0);
  }
  return (VAR_0);
 }

 VAR_9 = 0;

 switch (VAR_7->sopt_dir) {
 case 129:
  switch (VAR_7->sopt_name) {
  case 131:
  case 132:
  case 135:
  case 133:
  case 136:
  case 134:
  case 130:
   VAR_9 = &FUNC_4 ? FUNC_4(VAR_6, VAR_7) :
       VAR_1;
   break;
  case 137:
   VAR_9 = FUNC_6(VAR_6, VAR_7);
   break;
  default:
   VAR_9 = FUNC_3(VAR_6, VAR_7);
   break;
  }
  break;

 case 128:
  switch (VAR_7->sopt_name) {
  case 131:
  case 132:
  case 135:
  case 133:
  case 136:
  case 134:
  case 130:
   VAR_9 = &FUNC_5 ? FUNC_5(VAR_6, VAR_7) :
       VAR_1;
   break;
  case 137:
   VAR_9 = FUNC_6(VAR_6, VAR_7);
   break;
  default:
   VAR_9 = FUNC_3(VAR_6, VAR_7);
   break;
  }
  break;
 }

 return (VAR_9);
}

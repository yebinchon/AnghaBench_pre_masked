
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udpcb {int u_flags; } ;
struct sockopt {scalar_t__ sopt_name; scalar_t__ sopt_dir; } ;
struct inpcb {int dummy; } ;
typedef int optval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct inpcb*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;
 struct udpcb* FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct sockopt*,int*,int,int) ;
 int FUNC_5 (struct sockopt*,int*,int) ;

int
FUNC_6(struct inpcb *VAR_5, struct sockopt *VAR_6)
{
 struct udpcb *VAR_7;
 int VAR_8, VAR_9;

 FUNC_1(VAR_5);
 if (VAR_6->sopt_name != VAR_3) {
  FUNC_2(VAR_5);
  return (VAR_1);
 }

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_6->sopt_dir == VAR_2) {
  if (VAR_7->u_flags & VAR_4)
   VAR_9 = 128;
  else
   VAR_9 = 0;
  FUNC_2(VAR_5);
  return (FUNC_5(VAR_6, &VAR_9, sizeof(VAR_9)));
 }
 FUNC_2(VAR_5);

 VAR_8 = FUNC_4(VAR_6, &VAR_9, sizeof(VAR_9), sizeof(VAR_9));
 if (VAR_8 != 0)
  return (VAR_8);

 FUNC_0(VAR_5);
 switch (VAR_9) {
 case 0:
  VAR_7->u_flags &= ~VAR_4;
  break;
 case 128:
  VAR_7->u_flags |= VAR_4;
  break;
 default:
  VAR_8 = VAR_0;
 }
 FUNC_2(VAR_5);
 return (VAR_8);
}

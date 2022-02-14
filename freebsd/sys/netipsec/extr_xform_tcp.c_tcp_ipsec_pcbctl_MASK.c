
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flags; } ;
struct sockopt {scalar_t__ sopt_name; scalar_t__ sopt_dir; } ;
struct inpcb {int inp_flags; } ;
typedef int optval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int VAR_3 ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct tcpcb* FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct sockopt*,int*,int,int) ;
 int FUNC_6 (struct sockopt*,int*,int) ;

__attribute__((used)) static int
FUNC_7(struct inpcb *VAR_7, struct sockopt *VAR_8)
{
 struct tcpcb *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_8->sopt_name != VAR_5) {
  return (VAR_1);
 }

 if (VAR_8->sopt_dir == VAR_4) {
  FUNC_0(VAR_7);
  if (VAR_7->inp_flags & (VAR_3 | VAR_2)) {
   FUNC_1(VAR_7);
   return (VAR_0);
  }
  VAR_9 = FUNC_4(VAR_7);
  VAR_11 = (VAR_9->t_flags & VAR_6) ? 1 : 0;
  FUNC_1(VAR_7);


  return (FUNC_6(VAR_8, &VAR_11, sizeof(VAR_11)));
 }

 VAR_10 = FUNC_5(VAR_8, &VAR_11, sizeof(VAR_11), sizeof(VAR_11));
 if (VAR_10 != 0)
  return (VAR_10);


 FUNC_2(VAR_7);
 if (VAR_7->inp_flags & (VAR_3 | VAR_2)) {
  FUNC_3(VAR_7);
  return (VAR_0);
 }
 VAR_9 = FUNC_4(VAR_7);
 if (VAR_11 > 0)
  VAR_9->t_flags |= VAR_6;
 else
  VAR_9->t_flags &= ~VAR_6;

 FUNC_3(VAR_7);
 return (VAR_10);
}

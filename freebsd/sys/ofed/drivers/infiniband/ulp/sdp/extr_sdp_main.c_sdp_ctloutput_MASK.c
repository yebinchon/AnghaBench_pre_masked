
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {scalar_t__ sopt_level; int sopt_name; int sopt_dir; } ;
struct socket {int so_options; } ;
struct sdp_sock {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 scalar_t__ VAR_6 ;


 int VAR_7 ;

 int FUNC_3 (struct sdp_sock*) ;
 struct sdp_sock* FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct sockopt*,int*,int,int) ;
 int FUNC_8 (struct sockopt*,int*,int) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_8, struct sockopt *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct sdp_sock *VAR_13;

 VAR_10 = 0;
 VAR_13 = FUNC_4(VAR_8);
 if (VAR_9->sopt_level == VAR_6 && VAR_9->sopt_name == VAR_7) {
  FUNC_0(VAR_13);
  if (VAR_8->so_options & VAR_7)
   FUNC_5(VAR_8);
  else
   FUNC_6(VAR_8);
  FUNC_2(VAR_13);
 }
 if (VAR_9->sopt_level != VAR_2)
  return (VAR_10);

 FUNC_0(VAR_13);
 if (VAR_13->flags & (VAR_5 | VAR_3)) {
  FUNC_2(VAR_13);
  return (VAR_0);
 }

 switch (VAR_9->sopt_dir) {
 case 129:
  switch (VAR_9->sopt_name) {
  case 128:
   FUNC_2(VAR_13);
   VAR_10 = FUNC_7(VAR_9, &VAR_12, sizeof VAR_12,
       sizeof VAR_12);
   if (VAR_10)
    return (VAR_10);

   FUNC_1(VAR_13);
   VAR_11 = VAR_4;
   if (VAR_12)
    VAR_13->flags |= VAR_11;
   else
    VAR_13->flags &= ~VAR_11;
   FUNC_3(VAR_13);
   FUNC_2(VAR_13);
   break;

  default:
   FUNC_2(VAR_13);
   VAR_10 = VAR_1;
   break;
  }
  break;

 case 130:
  switch (VAR_9->sopt_name) {
  case 128:
   VAR_12 = VAR_13->flags & VAR_4;
   FUNC_2(VAR_13);
   VAR_10 = FUNC_8(VAR_9, &VAR_12, sizeof VAR_12);
   break;
  default:
   FUNC_2(VAR_13);
   VAR_10 = VAR_1;
   break;
  }
  break;
 }
 return (VAR_10);
}

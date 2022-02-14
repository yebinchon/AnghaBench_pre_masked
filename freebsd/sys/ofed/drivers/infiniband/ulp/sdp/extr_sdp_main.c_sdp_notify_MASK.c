
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int flags; scalar_t__ state; int softerror; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sdp_sock*) ;
 scalar_t__ VAR_5 ;
 struct sdp_sock* FUNC_1 (struct sdp_sock*,int) ;

struct sdp_sock *
FUNC_2(struct sdp_sock *VAR_6, int VAR_7)
{

 FUNC_0(VAR_6);

 if ((VAR_6->flags & VAR_4) ||
     (VAR_6->flags & VAR_3))
  return (VAR_6);




 if (VAR_6->state == VAR_5 &&
     (VAR_7 == VAR_1 || VAR_7 == VAR_2 ||
      VAR_7 == VAR_0))
  return (VAR_6);
 VAR_6->softerror = VAR_7;
 return FUNC_1(VAR_6, VAR_7);
}

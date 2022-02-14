
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct inpcb {int inp_cred; } ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 scalar_t__ FUNC_1 (struct ucred*,int ) ;
 scalar_t__ FUNC_2 (struct ucred*,int ) ;
 int FUNC_3 (struct ucred*,struct inpcb*) ;
 int FUNC_4 (struct ucred*,int ) ;

int
FUNC_5(struct ucred *VAR_1, struct inpcb *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1, VAR_2->inp_cred);
 if (VAR_3)
  return (VAR_0);






 if (FUNC_2(VAR_1, VAR_2->inp_cred))
  return (VAR_0);
 if (FUNC_1(VAR_1, VAR_2->inp_cred))
  return (VAR_0);

 return (0);
}

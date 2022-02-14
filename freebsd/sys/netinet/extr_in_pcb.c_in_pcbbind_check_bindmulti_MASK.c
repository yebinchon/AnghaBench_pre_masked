
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inpcb {int inp_flags2; TYPE_1__* inp_cred; } ;
struct TYPE_2__ {scalar_t__ cr_uid; } ;


 int VAR_0 ;

int
FUNC_0(const struct inpcb *VAR_1, const struct inpcb *VAR_2)
{

 if ((VAR_1->inp_flags2 & VAR_0) &&
     (VAR_1->inp_cred->cr_uid !=
     VAR_2->inp_cred->cr_uid))
  return (0);


 if ((VAR_1->inp_flags2 & VAR_0) &&
     ((VAR_2->inp_flags2 & VAR_0) == 0))
  return (0);





 return (1);
}

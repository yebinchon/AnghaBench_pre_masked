
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct socket {TYPE_2__* so_proto; } ;
struct label {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sosetlabel ) (struct socket*) ;} ;


 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct ucred*,struct socket*,struct label*) ;
 int FUNC_3 (struct ucred*,struct socket*,struct label*) ;
 int FUNC_4 (struct socket*) ;

int
FUNC_5(struct ucred *VAR_0, struct socket *VAR_1,
    struct label *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1);
  return (VAR_3);
 }

 FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_1);







 if (VAR_1->so_proto->pr_usrreqs->pru_sosetlabel != ((void*)0))
  (VAR_1->so_proto->pr_usrreqs->pru_sosetlabel)(VAR_1);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int cr_label; } ;
struct proc {TYPE_1__* p_ucred; } ;
struct mac_lomac {int dummy; } ;
struct TYPE_2__ {int cr_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_lomac* FUNC_0 (int ) ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int VAR_2 ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*) ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_3, struct proc *VAR_4)
{
 struct mac_lomac *VAR_5, *VAR_6;

 if (!VAR_2)
  return (0);

 VAR_5 = FUNC_0(VAR_3->cr_label);
 VAR_6 = FUNC_0(VAR_4->p_ucred->cr_label);


 if (!FUNC_1(VAR_6, VAR_5))
  return (VAR_1);
 if (!FUNC_2(VAR_5, VAR_6))
  return (VAR_0);

 return (0);
}

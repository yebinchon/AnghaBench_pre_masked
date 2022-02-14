
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int cr_label; } ;
struct proc {TYPE_1__* p_ucred; } ;
struct TYPE_2__ {int cr_label; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_2, struct proc *VAR_3)
{

 FUNC_1(VAR_2->cr_label, VAR_0);
 FUNC_1(VAR_3->p_ucred->cr_label, VAR_0);
 FUNC_0(VAR_1);

 return (0);
}

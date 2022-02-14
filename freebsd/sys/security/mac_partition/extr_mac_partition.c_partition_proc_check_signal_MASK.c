
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int cr_label; } ;
struct proc {TYPE_1__* p_ucred; } ;
struct TYPE_2__ {int cr_label; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ucred *VAR_1, struct proc *VAR_2,
    int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->cr_label, VAR_2->p_ucred->cr_label);

 return (VAR_4 ? VAR_0 : 0);
}

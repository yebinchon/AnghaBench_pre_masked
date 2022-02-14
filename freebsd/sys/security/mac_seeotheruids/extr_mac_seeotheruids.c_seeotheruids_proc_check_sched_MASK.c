
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct proc {int p_ucred; } ;


 int FUNC_0 (struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ucred *VAR_0, struct proc *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1->p_ucred));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct proc {int dummy; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_0 ;
 int FUNC_3 (struct ucred*,struct proc*,int*,int ) ;

int
FUNC_4(struct ucred *VAR_1, struct proc *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;


 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  FUNC_0(VAR_2);

 VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_5, 0);


 if (!VAR_3)
  FUNC_2(VAR_2);


 if (VAR_4 != 0)
  return (0);


 return ((VAR_5 & VAR_0) == VAR_0);
}

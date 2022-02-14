
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucred*,struct proc*,int*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct ucred *VAR_4, struct proc *VAR_5)
{
 int VAR_6, VAR_7;


 if ((VAR_3 & VAR_2) == 0)
  return (0);

 VAR_6 = FUNC_0(VAR_4, VAR_5, &VAR_7, 0);
 if (VAR_6 != 0)
  return (0);

 return ((VAR_7 & VAR_1) ? VAR_0 : 0);
}

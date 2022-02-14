
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sysarch_args {int op; int parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*,int ) ;
 int VAR_4 ;


 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct thread*,int ) ;
 int FUNC_6 (struct thread*,int ) ;

int
FUNC_7(struct thread *VAR_5, struct sysarch_args *VAR_6)
{
 int VAR_7;
 FUNC_3(&VAR_3);
 switch (VAR_6->op) {
 case 129:
  VAR_7 = FUNC_5(VAR_5, VAR_6->parms);
  break;
 case 128:
  VAR_7 = FUNC_6(VAR_5, VAR_6->parms);
  break;
 default:
  VAR_7 = VAR_2;
  break;
 }
 FUNC_4(&VAR_3);
 return (VAR_7);
}

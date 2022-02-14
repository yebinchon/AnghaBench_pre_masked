
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_error_log {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtas_error_log* FUNC_0 (struct pt_regs*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct pt_regs*,struct rtas_error_log*) ;

long FUNC_4(struct pt_regs *VAR_3)
{
 struct rtas_error_log *VAR_4;
 int VAR_5;

 if (VAR_1) {
  VAR_4 = FUNC_0(VAR_3);





  VAR_5 = FUNC_3(VAR_3, VAR_4);
  FUNC_1();


  FUNC_2(&VAR_2);

  if (VAR_5 == VAR_0)
   return 1;
 }

 return 0;
}

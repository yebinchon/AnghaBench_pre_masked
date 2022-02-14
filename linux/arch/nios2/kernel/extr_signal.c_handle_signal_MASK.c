
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct ksignal {int dummy; } ;
typedef int sigset_t ;


 int FUNC_0 (struct ksignal*,int *,struct pt_regs*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int,struct ksignal*,int ) ;

__attribute__((used)) static void FUNC_3(struct ksignal *VAR_0, struct pt_regs *VAR_1)
{
 int VAR_2;
 sigset_t *VAR_3 = FUNC_1();


 VAR_2 = FUNC_0(VAR_0, VAR_3, VAR_1);

 FUNC_2(VAR_2, VAR_0, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {scalar_t__ tra; unsigned int* regs; scalar_t__ pc; } ;
struct TYPE_2__ {int sa; } ;
struct ksignal {TYPE_1__ ka; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct ksignal*) ;
 int FUNC_2 (struct ksignal*,struct pt_regs*,unsigned int) ;
 int FUNC_3 (unsigned int,struct pt_regs*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_7(struct pt_regs *VAR_5, unsigned int VAR_6)
{
 struct ksignal VAR_7;







 if (!FUNC_6(VAR_5))
  return;

 if (FUNC_1(&VAR_7)) {
  FUNC_3(VAR_6, VAR_5, &VAR_7.ka.sa);


  FUNC_2(&VAR_7, VAR_5, VAR_6);
  return;
 }


 if (VAR_5->tra >= 0) {

  if (VAR_5->regs[0] == -VAR_0 ||
      VAR_5->regs[0] == -VAR_2 ||
      VAR_5->regs[0] == -VAR_1) {
   VAR_5->regs[0] = VAR_6;
   VAR_5->pc -= FUNC_4(FUNC_0(VAR_5->pc - 4));
  } else if (VAR_5->regs[0] == -VAR_3) {
   VAR_5->pc -= FUNC_4(FUNC_0(VAR_5->pc - 4));
   VAR_5->regs[3] = VAR_4;
  }
 }





 FUNC_5();
}

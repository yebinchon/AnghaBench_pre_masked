
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct die_args {int trapnr; int regs; int err; int signr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct die_args *VAR_3, unsigned long VAR_4)
{

 if (FUNC_0(&VAR_2) != -1) {
  FUNC_2(FUNC_3(), VAR_3->regs);
  return VAR_1;
 }

 if (FUNC_4(VAR_3->regs))
  return VAR_0;

 if (FUNC_1(VAR_3->trapnr & 0xff, VAR_3->signr, VAR_3->err,
        VAR_3->regs))
  return VAR_0;

 return VAR_1;
}

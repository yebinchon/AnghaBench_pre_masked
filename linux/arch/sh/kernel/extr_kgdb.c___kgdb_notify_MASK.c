
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct die_args {int trapnr; int regs; int err; int signr; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct die_args *VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 128:




  if (FUNC_1(VAR_2))
   return VAR_0;

  VAR_5 = FUNC_0(VAR_3->trapnr & 0xff, VAR_3->signr,
         VAR_3->err, VAR_3->regs);
  if (VAR_5)
   return VAR_0;

  break;
 }

 return VAR_1;
}

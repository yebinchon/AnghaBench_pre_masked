
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int tf_scause; } ;
struct intr_irqsrc {int dummy; } ;
struct TYPE_2__ {struct intr_irqsrc isrc; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct trapframe*) ;
 int FUNC_4 (struct intr_irqsrc*,struct trapframe*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(struct trapframe *VAR_3)
{
 struct intr_irqsrc *VAR_4;
 int VAR_5;

 FUNC_1();

 FUNC_0(VAR_3->tf_scause & VAR_0,
  ("riscv_cpu_intr: wrong frame passed"));

 VAR_5 = (VAR_3->tf_scause & VAR_1);

 switch (VAR_5) {
 case 129:
 case 130:
 case 128:
  VAR_4 = &VAR_2[VAR_5].isrc;
  if (FUNC_4(VAR_4, VAR_3) != 0)
   FUNC_5("stray interrupt %d\n", VAR_5);
  break;
 case 131:
  FUNC_3(VAR_3);
  break;
 default:
  break;
 }

 FUNC_2();
}

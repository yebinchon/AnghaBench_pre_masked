
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread_info {int tp_value; } ;
struct pt_regs {int* regs; } ;
struct TYPE_5__ {int linesz; } ;
struct TYPE_4__ {int linesz; } ;
struct TYPE_6__ {TYPE_2__ icache; TYPE_1__ dcache; } ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,struct pt_regs*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct thread_info* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct pt_regs *VAR_3, int VAR_4, int VAR_5)
{
 struct thread_info *VAR_6 = FUNC_5(VAR_1);

 FUNC_2(VAR_0,
   1, VAR_3, 0);
 switch (VAR_4) {
 case 130:
  VAR_3->regs[VAR_5] = FUNC_4();
  return 0;
 case 129:
  VAR_3->regs[VAR_5] = FUNC_1(VAR_2.dcache.linesz,
         VAR_2.icache.linesz);
  return 0;
 case 132:
  VAR_3->regs[VAR_5] = FUNC_3();
  return 0;
 case 131:
  switch (FUNC_0()) {
  case 134:
  case 133:
   VAR_3->regs[VAR_5] = 1;
   break;
  default:
   VAR_3->regs[VAR_5] = 2;
  }
  return 0;
 case 128:
  VAR_3->regs[VAR_5] = VAR_6->tp_value;
  return 0;
 default:
  return -1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_value; } ;
struct TYPE_4__ {TYPE_1__ uw; } ;
struct task_struct {TYPE_2__ thread; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct task_struct*) ;
 int * FUNC_3 (struct task_struct*) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct task_struct *VAR_2)
{
 FUNC_4();

 if (FUNC_1(FUNC_2(VAR_2)))
  FUNC_5(VAR_2->thread.uw.tp_value, VAR_1);
 else if (!FUNC_0())
  FUNC_5(0, VAR_1);

 FUNC_5(*FUNC_3(VAR_2), VAR_0);
}

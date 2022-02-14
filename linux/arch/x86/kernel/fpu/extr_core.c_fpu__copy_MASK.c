
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int xsave; } ;
struct fpu {int last_cpu; TYPE_3__ state; } ;
struct TYPE_7__ {struct fpu fpu; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_8__ {struct fpu fpu; } ;
struct TYPE_10__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct fpu*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_5__* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct task_struct*,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct fpu*) ;
 int FUNC_11 (struct fpu*) ;

int FUNC_12(struct task_struct *VAR_4, struct task_struct *VAR_5)
{
 struct fpu *VAR_6 = &VAR_4->thread.fpu;
 struct fpu *VAR_7 = &VAR_5->thread.fpu;

 VAR_6->last_cpu = -1;

 if (!FUNC_8(VAR_1))
  return 0;

 FUNC_0(VAR_7 != &VAR_2->thread.fpu);





 FUNC_6(&VAR_6->state.xsave, 0, VAR_3);
 FUNC_3();
 if (FUNC_9(VAR_0))
  FUNC_5(&VAR_6->state, &VAR_7->state, VAR_3);

 else if (!FUNC_1(VAR_6))
  FUNC_2(&VAR_6->state);

 FUNC_4();

 FUNC_7(VAR_4, VAR_0);

 FUNC_11(VAR_7);
 FUNC_10(VAR_6);

 return 0;
}

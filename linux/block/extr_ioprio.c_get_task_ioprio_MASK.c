
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* io_context; } ;
struct TYPE_2__ {int ioprio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_2);
 if (VAR_2->io_context)
  VAR_3 = VAR_2->io_context->ioprio;
 FUNC_3(VAR_2);
out:
 return VAR_3;
}

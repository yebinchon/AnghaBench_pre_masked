
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {struct task_struct* target; } ;
struct perf_event {TYPE_1__ hw; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_0)
{
 struct task_struct *VAR_1 = VAR_0->hw.target;
 return VAR_1 && FUNC_0(FUNC_1(VAR_1));
}

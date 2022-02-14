
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__* core_regs; int * core_keys; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3, struct task_struct *VAR_4)
{
 if (!VAR_1)
  return -VAR_0;

 if (!VAR_2->core_keys[VAR_3-1])
  return -VAR_0;

 FUNC_2(VAR_2->core_keys[VAR_3-1],
  VAR_1 + VAR_2->core_regs[VAR_3-1]);

 FUNC_0(FUNC_1(VAR_3));

 return 0;
}

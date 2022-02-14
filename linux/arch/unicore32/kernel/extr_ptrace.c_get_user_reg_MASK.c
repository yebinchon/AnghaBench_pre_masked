
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {long* uregs; } ;


 TYPE_1__* FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline long FUNC_1(struct task_struct *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0)->uregs[VAR_1];
}

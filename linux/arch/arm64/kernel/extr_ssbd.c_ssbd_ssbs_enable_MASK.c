
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int pstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_2)
{
 u64 VAR_3 = FUNC_0(FUNC_2(VAR_2)) ?
    VAR_0 : VAR_1;

 FUNC_1(VAR_2)->pstate |= VAR_3;
}

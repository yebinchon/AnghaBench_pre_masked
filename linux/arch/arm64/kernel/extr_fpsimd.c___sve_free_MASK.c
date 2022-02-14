
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sve_state; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_0)
{
 FUNC_0(VAR_0->thread.sve_state);
 VAR_0->thread.sve_state = ((void*)0);
}

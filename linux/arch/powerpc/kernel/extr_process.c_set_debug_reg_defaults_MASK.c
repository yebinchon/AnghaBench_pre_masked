
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ address; } ;
struct thread_struct {TYPE_1__ hw_brk; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct thread_struct *VAR_0)
{
 VAR_0->hw_brk.address = 0;
 VAR_0->hw_brk.type = 0;
 if (FUNC_0())
  FUNC_1(&VAR_0->hw_brk);
}

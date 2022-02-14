
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct thread {TYPE_1__* td_frame; } ;
struct TYPE_2__ {scalar_t__* tf_global; } ;


 struct thread* VAR_0 ;
 int FUNC_0 () ;

int
FUNC_1(struct thread *VAR_1, void *VAR_2)
{

 if (VAR_1 == VAR_0)
  FUNC_0();
 VAR_1->td_frame->tf_global[7] = (uint64_t)VAR_2;
 return (0);
}

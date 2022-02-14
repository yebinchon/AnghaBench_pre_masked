
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; } ;
typedef scalar_t__ register_t ;
struct TYPE_2__ {scalar_t__ tf_tp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 uintptr_t VAR_2 ;

int
FUNC_0(struct thread *VAR_3, void *VAR_4)
{

 if ((uintptr_t)VAR_4 >= VAR_2)
  return (VAR_0);





 VAR_3->td_frame->tf_tp = (register_t)VAR_4 + VAR_1;

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long pc; unsigned long range; } ;
struct TYPE_4__ {unsigned long pc; unsigned long range; } ;
struct unwind_table {TYPE_1__ init; TYPE_2__ core; struct unwind_table* link; } ;


 struct unwind_table VAR_0 ;

__attribute__((used)) static struct unwind_table *FUNC_0(unsigned long VAR_1)
{
 struct unwind_table *VAR_2;

 for (VAR_2 = &VAR_0; VAR_2; VAR_2 = VAR_2->link)
  if ((VAR_1 >= VAR_2->core.pc
       && VAR_1 < VAR_2->core.pc + VAR_2->core.range)
      || (VAR_1 >= VAR_2->init.pc
   && VAR_1 < VAR_2->init.pc + VAR_2->init.range))
   break;

 return VAR_2;
}

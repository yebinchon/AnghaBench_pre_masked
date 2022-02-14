
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * tls_array; } ;
struct task_struct {TYPE_3__* mm; TYPE_1__ thread; } ;
struct ldt_struct {unsigned short nr_entries; int * entries; } ;
struct TYPE_5__ {int lock; struct ldt_struct* ldt; } ;
struct TYPE_6__ {TYPE_2__ context; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static unsigned long FUNC_5(struct task_struct *VAR_4,
         unsigned short VAR_5)
{
 unsigned short VAR_6 = VAR_5 >> 3;
 unsigned long VAR_7;

 if (FUNC_1((VAR_5 & VAR_3) == 0)) {
  if (FUNC_4(VAR_6 >= VAR_0))
   return 0;





  if (VAR_6 < VAR_2 || VAR_6 > VAR_1)
   return 0;

  VAR_6 -= VAR_2;
  VAR_7 = FUNC_0(&VAR_4->thread.tls_array[VAR_6]);
 } else {
  VAR_7 = 0;

 }

 return VAR_7;
}

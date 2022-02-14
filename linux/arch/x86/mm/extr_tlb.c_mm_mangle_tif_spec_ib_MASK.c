
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {scalar_t__ mm; } ;
struct TYPE_2__ {unsigned long flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct task_struct *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2)->flags;
 unsigned long VAR_4 = (VAR_3 >> VAR_1) & VAR_0;

 return (unsigned long)VAR_2->mm | VAR_4;
}

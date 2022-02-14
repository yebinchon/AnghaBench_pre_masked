
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {unsigned long flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct task_struct*,struct task_struct*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct task_struct *VAR_5,
       struct task_struct *VAR_6)
{
 unsigned long VAR_7 = FUNC_3(VAR_6)->flags;
 unsigned long VAR_8 = FUNC_3(VAR_5)->flags;

 if (FUNC_0(VAR_0)) {






  if (!FUNC_2(&VAR_4)) {
   VAR_8 &= ~VAR_1;
   VAR_7 &= ~VAR_1;
  }
 }





 if (FUNC_4(VAR_7 & VAR_2 ||
       VAR_8 & VAR_3))
  FUNC_1(VAR_5, VAR_6);
}

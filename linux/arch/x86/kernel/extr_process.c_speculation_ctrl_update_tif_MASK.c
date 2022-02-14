
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {unsigned long flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,int ) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 TYPE_1__* FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*,int ) ;

__attribute__((used)) static unsigned long FUNC_6(struct task_struct *VAR_3)
{
 if (FUNC_5(VAR_3, VAR_0)) {
  if (FUNC_3(VAR_3))
   FUNC_1(VAR_3, VAR_2);
  else
   FUNC_0(VAR_3, VAR_2);

  if (FUNC_2(VAR_3))
   FUNC_1(VAR_3, VAR_1);
  else
   FUNC_0(VAR_3, VAR_1);
 }

 return FUNC_4(VAR_3)->flags;
}

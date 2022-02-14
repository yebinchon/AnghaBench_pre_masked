
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int thumbee_state; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {int thumbee_state; } ;


 int VAR_0 ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct thread_info *VAR_4 = VAR_3;

 switch (VAR_2) {
 case 129:
  FUNC_2(0);
  break;
 case 128:
  FUNC_0()->thumbee_state = FUNC_1();
  FUNC_2(VAR_4->thumbee_state);
  break;
 }

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * extra; } ;
struct thread_info {TYPE_2__ cpu_context; } ;
struct notifier_block {int dummy; } ;
struct TYPE_4__ {int extra; } ;
struct TYPE_6__ {TYPE_1__ cpu_context; } ;


 int VAR_0 ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct thread_info *VAR_4 = VAR_3;

 switch (VAR_2) {
 case 129:
  VAR_4->cpu_context.extra[0] = 0;
  VAR_4->cpu_context.extra[1] = 0;
  break;

 case 128:
  FUNC_2(FUNC_0()->cpu_context.extra);
  FUNC_1(VAR_4->cpu_context.extra);
  break;
 }

 return VAR_0;
}

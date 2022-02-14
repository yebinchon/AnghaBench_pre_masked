
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int (* cpu_boot ) (unsigned int) ;} ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2, struct task_struct *VAR_3)
{
 if (VAR_1[VAR_2]->cpu_boot)
  return VAR_1[VAR_2]->cpu_boot(VAR_2);

 return -VAR_0;
}

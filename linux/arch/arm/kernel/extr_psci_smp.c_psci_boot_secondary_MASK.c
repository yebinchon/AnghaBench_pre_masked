
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int (* cpu_on ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3, struct task_struct *VAR_4)
{
 if (VAR_1.cpu_on)
  return VAR_1.cpu_on(FUNC_0(VAR_3),
     FUNC_2(&VAR_2));
 return -VAR_0;
}

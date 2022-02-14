
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct task_struct*,int ) ;

int FUNC_1(struct task_struct *VAR_4)
{
 int VAR_5 = 0;

 if (!FUNC_0(VAR_4, VAR_2))
  VAR_5 |= VAR_0;
 if (FUNC_0(VAR_4, VAR_3))
  VAR_5 |= VAR_1;

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (unsigned int,struct task_struct*) ;
 int FUNC_2 (unsigned int,struct task_struct*) ;
 int FUNC_3 (unsigned int,struct task_struct*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_9,
       struct task_struct *VAR_10)
{
 if (FUNC_0(VAR_2) && FUNC_4() == VAR_7)
  return FUNC_2(VAR_9, VAR_10);
 if (FUNC_0(VAR_3) && FUNC_4() == VAR_8)
  return FUNC_3(VAR_9, VAR_10);
 if (FUNC_0(VAR_0) && FUNC_4() == VAR_5)
  return FUNC_1(VAR_9, VAR_10);
 if (FUNC_0(VAR_1) && FUNC_4() == VAR_6)
  return FUNC_1(VAR_9, VAR_10);

 return -VAR_4;
}

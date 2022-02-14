
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
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_6)
{
 switch (FUNC_0()) {
 case 128:
  return -VAR_0;
 case 130:
  return VAR_1;
 case 129:
  if (FUNC_2(VAR_6))
   return VAR_5 | VAR_3;
  if (FUNC_1(VAR_6))
   return VAR_5 | VAR_1;
  return VAR_5 | VAR_2;
 case 131:
  return VAR_2;
 default:
  return VAR_4;
 }
}

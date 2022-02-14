
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
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;

__attribute__((used)) static int FUNC_9(struct task_struct *VAR_8, unsigned long VAR_9)
{
 int VAR_10 = FUNC_0();


 if (VAR_10 == VAR_3)
  return -VAR_4;


 if (VAR_10 == VAR_2) {
  switch (VAR_9) {
  case 129:
   return -VAR_5;
  case 130:
  case 128:
   return 0;
  }
 }






 switch (VAR_9) {
 case 129:

  if (VAR_10 == VAR_1 ||
      FUNC_8(VAR_8))
   return -VAR_5;
  FUNC_5(VAR_8);
  FUNC_1(VAR_8, VAR_7);
  FUNC_4(VAR_8);
  break;
 case 130:
  if (VAR_10 == VAR_0)
   return -VAR_5;
  FUNC_6(VAR_8);
  FUNC_2(VAR_8, VAR_7);
  FUNC_3(VAR_8);
  break;
 case 128:
  if (VAR_10 == VAR_0)
   return -VAR_5;
  FUNC_6(VAR_8);
  FUNC_7(VAR_8);
  FUNC_2(VAR_8, VAR_7);
  FUNC_3(VAR_8);
  break;
 default:
  return -VAR_6;
 }

 return 0;
}

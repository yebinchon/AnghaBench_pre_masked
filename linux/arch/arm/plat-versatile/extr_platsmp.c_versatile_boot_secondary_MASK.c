
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,unsigned long) ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

int FUNC_9(unsigned int VAR_5, struct task_struct *VAR_6)
{
 unsigned long VAR_7;





 FUNC_3(&VAR_4);







 FUNC_8(FUNC_1(VAR_5));






 FUNC_0(FUNC_2(VAR_5));

 VAR_7 = VAR_2 + (1 * VAR_1);
 while (FUNC_6(VAR_2, VAR_7)) {
  FUNC_5();
  if (VAR_3 == -1)
   break;

  FUNC_7(10);
 }





 FUNC_4(&VAR_4);

 return VAR_3 != -1 ? -VAR_0 : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_5, struct task_struct *VAR_6)
{
 unsigned long VAR_7;





 FUNC_2(&VAR_2);
 FUNC_1(VAR_5);

 VAR_7 = VAR_3 + (1 * VAR_1);
 while (FUNC_4(VAR_3, VAR_7)) {
  FUNC_0();
  if (VAR_4 == -1)
   break;

  FUNC_5(10);
 }





 FUNC_3(&VAR_2);

 return VAR_4 != -1 ? -VAR_0 : 0;
}

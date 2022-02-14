
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int,int) ;
 int VAR_2 ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_3, struct task_struct *VAR_4)
{
 int VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_3, &VAR_2)) {






  FUNC_2(VAR_3, 1);
  FUNC_3(VAR_3,
    VAR_1 | VAR_0);
 } else {






  VAR_5 = FUNC_4(VAR_3);
 }

 return VAR_5;
}

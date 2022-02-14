
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_3, struct task_struct *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_2(10);

 FUNC_1(VAR_3);

 FUNC_3(0, VAR_2 + VAR_0 + (VAR_3 - 1) * 4);
 FUNC_3(0, VAR_2 + VAR_1 + (VAR_3 - 1) * 4);

 return 0;
}

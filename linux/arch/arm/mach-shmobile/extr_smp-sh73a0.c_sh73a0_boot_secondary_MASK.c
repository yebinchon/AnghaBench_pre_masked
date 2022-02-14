
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3, struct task_struct *VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_3);

 if (((FUNC_0(VAR_0) >> (4 * VAR_5)) & 3) == 3)
  FUNC_1(1 << VAR_5, VAR_2);
 else
  FUNC_1(1 << VAR_5, VAR_1);

 return 0;
}

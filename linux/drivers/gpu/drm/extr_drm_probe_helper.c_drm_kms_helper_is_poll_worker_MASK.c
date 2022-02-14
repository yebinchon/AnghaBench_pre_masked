
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {scalar_t__ func; } ;


 struct work_struct* FUNC_0 () ;
 scalar_t__ VAR_0 ;

bool FUNC_1(void)
{
 struct work_struct *VAR_1 = FUNC_0();

 return VAR_1 && VAR_1->func == VAR_0;
}

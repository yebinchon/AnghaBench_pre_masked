
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int context; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int *) ;

void FUNC_2(struct mm_struct *VAR_0)
{
 void *VAR_1 = FUNC_1(&VAR_0->context);

 if (VAR_1)
  FUNC_0(VAR_1);
}

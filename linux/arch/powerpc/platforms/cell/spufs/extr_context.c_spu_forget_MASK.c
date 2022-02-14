
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {scalar_t__ state; struct mm_struct* owner; int state_mutex; } ;
struct mm_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*) ;

void FUNC_4(struct spu_context *VAR_1)
{
 struct mm_struct *VAR_2;






 FUNC_1(&VAR_1->state_mutex);
 if (VAR_1->state != VAR_0)
  FUNC_2(VAR_1);

 VAR_2 = VAR_1->owner;
 VAR_1->owner = ((void*)0);
 FUNC_0(VAR_2);
 FUNC_3(VAR_1);
}

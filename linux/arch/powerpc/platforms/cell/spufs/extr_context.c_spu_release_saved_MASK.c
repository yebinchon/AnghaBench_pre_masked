
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {scalar_t__ state; int sched_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct spu_context*,int ) ;
 int FUNC_2 (struct spu_context*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct spu_context *VAR_3)
{
 FUNC_0(VAR_3->state != VAR_2);

 if (FUNC_3(VAR_1, &VAR_3->sched_flags) &&
   FUNC_4(VAR_0, &VAR_3->sched_flags))
  FUNC_1(VAR_3, 0);

 FUNC_2(VAR_3);
}

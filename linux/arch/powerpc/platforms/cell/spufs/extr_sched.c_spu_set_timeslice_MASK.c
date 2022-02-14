
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {scalar_t__ prio; void* time_slice; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct spu_context *VAR_2)
{
 if (VAR_2->prio < VAR_1)
  VAR_2->time_slice = FUNC_0(VAR_0 * 4, VAR_2->prio);
 else
  VAR_2->time_slice = FUNC_0(VAR_0, VAR_2->prio);
}

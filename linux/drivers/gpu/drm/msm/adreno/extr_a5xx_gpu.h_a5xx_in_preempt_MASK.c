
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a5xx_gpu {int preempt_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct a5xx_gpu *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_2->preempt_state);

 return !(VAR_3 == VAR_1 ||
   VAR_3 == VAR_0);
}

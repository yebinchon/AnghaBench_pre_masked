
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a5xx_gpu {int preempt_state; } ;
typedef enum preempt_state { ____Placeholder_preempt_state } preempt_state ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline bool FUNC_1(struct a5xx_gpu *VAR_0,
  enum preempt_state VAR_1, enum preempt_state VAR_2)
{
 enum preempt_state VAR_3 = FUNC_0(&VAR_0->preempt_state,
  VAR_1, VAR_2);

 return (VAR_3 == VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct global_pstate_info {scalar_t__ elapsed_time; int timer; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct global_pstate_info *VAR_3)
{
 unsigned int VAR_4;







 if ((VAR_3->elapsed_time + VAR_0)
      > VAR_1)
  VAR_4 = VAR_1 - VAR_3->elapsed_time;
 else
  VAR_4 = VAR_0;

 FUNC_0(&VAR_3->timer, VAR_2 + FUNC_1(VAR_4));
}

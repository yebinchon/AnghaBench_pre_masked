
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_user_sdma_pkt_q {int wait; int n_reqs; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct hfi1_user_sdma_pkt_q *VAR_0)
{
 if (FUNC_0(&VAR_0->n_reqs))
  FUNC_1(&VAR_0->wait);
}

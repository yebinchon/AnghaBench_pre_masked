
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_group {scalar_t__ async_idle_bfqq; scalar_t__** async_bfqq; } ;
struct bfq_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct bfq_data *VAR_1,
        struct bfq_group *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++)
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   if (VAR_2->async_bfqq[VAR_3][VAR_4])
    FUNC_0(VAR_2->async_bfqq[VAR_3][VAR_4]);
 if (VAR_2->async_idle_bfqq)
  FUNC_0(VAR_2->async_idle_bfqq);
}

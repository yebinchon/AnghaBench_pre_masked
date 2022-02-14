
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qp_list {int idx; TYPE_1__** qps; } ;
struct TYPE_2__ {int ibqp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct qp_list *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->idx; VAR_1++)
  FUNC_0(&VAR_0->qps[VAR_1]->ibqp);
}

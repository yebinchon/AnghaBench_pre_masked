
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_wb {TYPE_1__* rq_wait; } ;
struct TYPE_2__ {int inflight; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct rq_wb *VAR_1)
{
 unsigned int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 += FUNC_0(&VAR_1->rq_wait[VAR_2].inflight);

 return VAR_3;
}

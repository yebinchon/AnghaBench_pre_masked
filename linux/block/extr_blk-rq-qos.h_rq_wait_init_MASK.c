
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wait {int wait; int inflight; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct rq_wait *VAR_0)
{
 FUNC_0(&VAR_0->inflight, 0);
 FUNC_1(&VAR_0->wait);
}
